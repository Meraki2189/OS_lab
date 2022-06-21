#include "widget.h"
#include "ui_widget.h"

bool bitTable[500] = {false}; //判断块是否空闲，false为空闲
int indexTable[500][5]; //索引表
vector<NewFile> fileTable; //存放50个文件的索引块号
NewFile ansTable[5]; //存放新增5个文件的索引块号
double size[5] = {7, 5, 2, 9, 3.5}; //五个新增文件大小
int block[5] = {0}; //记录五个文件的
FreeBlock f[500];

void initFile();
void deleteFile();
void createFile();

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

void Widget::on_pushButton_2_clicked() //步骤1，2
{
    initFile();
    deleteFile();
    for(int i=0; i<500;i++)
    {
        f[i].start_id = -1;
        f[i].size = 0;
    }
    int j=0;
    for(int i=0;i<500;i++)
    {
        if(bitTable[i])
        {
            f[j].start_id = i;
            f[j].size = 1;
            while(bitTable[i+1])
            {
                i++;
                f[j].size++;
            }
            j++;
        }
    }
    ui->tableWidget_2->setRowCount(j);
    ui->tableWidget_2->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    for(int i=0;i<j;i++){

        ui->tableWidget_2->setItem(i,0,new QTableWidgetItem(QString::number(f[i].start_id) ));
        ui->tableWidget_2->repaint();
        ui->tableWidget_2->setItem(i,1,new QTableWidgetItem(QString::number(f[i].size)) );
        ui->tableWidget_2->repaint();
    }
}

void Widget::on_pushButton_3_clicked() //步骤3
{
    createFile();
    int j=0;
    for(int i=0;i<500;i++)
    {
        if(bitTable[i])
        {
            f[j].start_id = i;
            f[j].size = 1;
            while(bitTable[i+1])
            {
                i++;
                f[j].size++;
            }
            j++;
        }
    }
    ui->tableWidget_2->setRowCount(j);
    ui->tableWidget_2->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    for(int i=0;i<j;i++){

        ui->tableWidget_2->setItem(i,0,new QTableWidgetItem(QString::number(f[i].start_id) ));
        ui->tableWidget_2->repaint();
        ui->tableWidget_2->setItem(i,1,new QTableWidgetItem(QString::number(f[i].size)) );
        ui->tableWidget_2->repaint();
    }
    ui->tableWidget->setRowCount(5);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    for(int i=0;i<5;i++){
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(QString::number(ansTable[i].start_id) ));
        ui->tableWidget->repaint();
        ui->tableWidget->setItem(i,2,new QTableWidgetItem(QString::number(block[i])) );
        ui->tableWidget->repaint();
    }
}

void initFile() //随机生成50个文件
{
    for(int i=0;i<500;i++)
        for(int j=0;j<5;j++)
            indexTable[i][j]=0;
    for(int i=0;i<50;i++)
    {
        NewFile temp;
        stringstream ss;
        ss << (i+1);
        string str=ss.str();
        temp.name = str+".txt";
        for(int j=0;j<500;j++)
        {
            // 存放索引表与位表
            if(!bitTable[j])
            {
                temp.start_id = j;
                bitTable[j] = true;
                int blocks = (rand()%5)+1;
                for(int k=1;k<=blocks;k++)
                {
                    indexTable[j][k-1] = j+k;
                    bitTable[j+k-1] = true; //
                }
                break;
            }
        }
        fileTable.push_back(temp);
    }
}

void deleteFile() //删除奇数文件
{
    vector<NewFile> :: iterator it = fileTable.begin();
    for(int i=0;i<50;i+=2,it++)
    {
        bitTable[it->start_id] = false;
        for(int j=0;j<5;j++)
        {
            int t = indexTable[it->start_id][j];
            if(t){
                bitTable[t-1] = false; //
                indexTable[it->start_id][j] = 0;
            }
            else
                break;
        }
        it = fileTable.erase(it);
    }
}

void createFile() //新建五个文件
{

    for(int i=0;i<5;i++)
    {
        NewFile temp;
        char alpha = "ABCDE"[i];
        stringstream ss;
        ss << alpha;
        string str=ss.str();
        temp.name = str+".txt";
        for(int j=0;j<500;j++)
        {
            if(!bitTable[j])
            {
                temp.start_id = j;
                bitTable[j] = true;
                for(int k=1;k<size[i]+1;k++)
                {
                    for(int l=j+1;l<500;l++)
                    {
                        if(!bitTable[l]){
                            bitTable[l] = true;
                            indexTable[j][k-1]=1;
                            break;
                        }
                    }

                }
                break;
            }
        }
        ansTable[i] = temp;
        if(fmod(size[i],2))
            block[i] = 1+size[i]/2;
        else
            block[i] = size[i]/2;
    }
}
