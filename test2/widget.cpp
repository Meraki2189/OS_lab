#include "widget.h"
#include "ui_widget.h"
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}
#define P(S) WaitForSingleObject(S,INFINITE)
#define V(S) ReleaseSemaphore(S,1,NULL)

const int BUFFER_SIZE = 10;
int buffer[BUFFER_SIZE]; //缓冲区
int ProductID = 0; //将被放入的产品号
int ConsumeID = 0;  //将被消耗的产品号
int in = 0; //产品进缓冲区时的缓冲区下标
int out = 0; //产品出缓冲区时的缓冲区下标

std::string x1 = {0};
std::string x2 = {0};
HANDLE empty; //当缓冲区空时，迫使消费者等待
HANDLE full; //当缓冲区满时，迫使生产者等待
HANDLE mutex; //线程间互斥

DWORD WINAPI producer_thread(LPVOID); //生产者线程
DWORD WINAPI consumer_thread(LPVOID); //消费者线程


void Widget::on_startBtn_clicked()
{
    if(ui->ProducerNum->text().isEmpty() || ui->ConsumerNum->text().isEmpty())
    {
        QMessageBox::warning(this, tr("警告"), tr("请将信息填写完整！"), QMessageBox::Ok);
    }
    else
    {
        QString x1 = ui->ProducerNum->text();
        QString x2 = ui->ConsumerNum->text();
        int m = x1.toInt();
        int n = x2.toInt();
        mutex = CreateSemaphore(NULL, 1, 1, NULL);
        empty = CreateSemaphore(NULL, BUFFER_SIZE - 1, BUFFER_SIZE - 1, NULL);
        full = CreateSemaphore(NULL, 0, BUFFER_SIZE - 1, NULL);
        int producer_num = m; //生产者数量
        int consumer_num = n; //消费者数量
        int thread_num = m+n;

        HANDLE threads[thread_num];
        // 创建生产者线程
        for (int i = 0; i < producer_num; i++)
        {
            threads[i] = CreateThread(NULL, 0, producer_thread, NULL, 0, NULL);//生产者线程
        }
        //创建消费者线程
        for (int i = 0; i < consumer_num; i++)
        {
            threads[i + producer_num] = CreateThread(NULL, 0, consumer_thread, NULL, 0, NULL);//消费者线程
        }
        //QString str1= QString::fromStdString(x1);
        //QString str2= QString::fromStdString(x2);
        //ui->Producerlist->addItem(str1);
        //ui->Producerlist->addItem(str2);

        WaitForMultipleObjects(thread_num, threads, true, INFINITY);
        CloseHandle(mutex);
        for (int i = 0; i < thread_num; i++) {
            CloseHandle(threads[i]);
        }
        CloseHandle(empty);
        CloseHandle(full);
    }
}

void put_buffer() {//生产者将物品放入缓冲区
    ProductID++;
    buffer[in] = ProductID;
    printf("productID:%d, buffer no.%d\n", ProductID, in + 1);
    fflush(stdout);
    std::string str1 = std::to_string(ProductID);
    std::string str2 = std::to_string(in+1);
    x1 = "ProductID:"+ str1 + ",buffer:" + str2;
    in = (in + 1) % BUFFER_SIZE;
}

void remove_buffer() {//消费者把缓冲区的物品取出

    ConsumeID = buffer[out];
    printf("                            consumeID:%d, buffer no.%d\n", ConsumeID, out + 1);
    fflush(stdout);
    std::string str3 = std::to_string(ConsumeID);
    std::string str4 = std::to_string(out+1);
    x2 = "ConsumeID:"+ str3 + ",buffer:" + str4;
    out = (out + 1) % BUFFER_SIZE;
}

DWORD WINAPI producer_thread(LPVOID p) //生产者线程
{
    while (1) {
        P(empty);
        P(mutex);
        put_buffer();
        Sleep(2000);
        V(mutex);
        V(full);
    }
    return 0;
}
DWORD WINAPI consumer_thread(LPVOID p) //消费者线程
{
    while (1) {
        P(full);
        P(mutex);
        remove_buffer();
        Sleep(2000);
        V(mutex);
        V(empty);
    }
    return 0;
}
