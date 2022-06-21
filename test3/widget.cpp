#include "widget.h"
#include "ui_widget.h"
#define PRO 5
#define RES 3
int avai[RES]; //available数组
int max1[PRO][RES]; //max矩阵
int allo[PRO][RES]; //allocation矩阵
int need[PRO][RES]; //need矩阵
int sec[PRO] = {0}; //安全序列
int work1[PRO][RES]; //work
int wa[PRO][RES]; //work+allocate

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

int safe()
{
    int work[RES]={0}; //work数组
    int finish[PRO]={0}; //finish数组
    int i=0,j=0,m=0,n=0;
    for(int r = 0;r < RES;r++) //将可用资源数目赋给work
            work[r] = avai[r];
    while(i < PRO) {
        if(finish[i] == 0){
            //满足条件释放资源，并从头开始扫描进程集合
            while(j < RES && need[i][j] <= work[j] )
                j++;
                if(j == RES) {
                    for(int k = 0;k < RES;k++){
                        work1[i][k] = work[k];
                        work[k] = work[k]+allo[i][k];
                        wa[i][k] = work[k];
                    }
                    finish[i]=1;
                    sec[m]=i+1;  //保存安全序列sec
                    i=-1;m++;
            }
         }
         j=0;i++;
    }
    for(int p = 0;p < PRO;p++){
        if(finish[p] == 1)
            n++;   //记录'true'的个数
    }
    return n;
}

int banker(int *request, int p)
{
    p--; //进程
    //两个判断
    for(int m = 0;m < RES;m++) {
            if(request[m] > need[p][m]){
                printf("resourece needed > max!\n");
                fflush(stdout);
                return 0;
            } else if(request[m] > avai[m]) {
                printf("no enough resource!\n");
                fflush(stdout);
                return 0;
            }
    }

    //为进程分配资源
    for(int j = 0;j < RES;j++) {
            avai[j] = avai[j] - request[j];
            allo[p][j] = allo[p][j] + request[j];
            need[p][j] = need[p][j] - request[j];
    }

    //执行安全性算法
    int n = safe();

    if(n == PRO) {//有5个'true'返回1，表示此时安全
        printf("safe!\n");
        fflush(stdout);
    }else {
            //不安全时，把给进程分配过的资源还给系统
            for(int j = 0;j < RES;j++) {
                    avai[j] = avai[j] + request[j];
                    allo[p][j] = allo[p][j] - request[j];
                    need[p][j] = need[p][j] + request[j];
            }
            printf("unsafe!\n");
            fflush(stdout);
    }
    return n;
}


void Widget::on_pushButton_clicked()
{
    int ch[100]={0},m=0;
    string fileName01 = "C:\\Users\\18031\\os_test\\test3\\anli1.txt";
    ifstream ifm(fileName01);
    int tmp;
    if (ifm.is_open())
    {
        while (!ifm.eof())
        {
            ifm >> tmp;
            printf("%d ",tmp);
            fflush(stdout);
            ch[m++] = tmp;
        }
    }
    for(int i=0;i<RES;i++)
    {
        avai[i] = 0;
        for(int j=0;j<PRO;j++)
        {
            max1[j][i]=0;
            allo[j][i]=0;
            need[j][i]=0;
            work1[j][i]=0;
            wa[j][i]=0;
        }
    }
    int k=0;
    while(k<m) //提取序列
    {
        if(k<RES)
        {
            for(int j=0;j<3;j++)
            {
                avai[j] = ch[k];
                k++;
            }
        }
        else if(k<(1+PRO)*RES)
        {
            for(int i=0;i<PRO;i++)
            {
                for(int j=0;j<RES;j++)
                {
                    max1[i][j] = ch[k];
                    k++;
                }
            }
        }
        else
        {
            for(int i=0;i<PRO;i++)
            {
                for(int j=0;j<RES;j++)
                {
                    allo[i][j] = ch[k];
                    k++;
                }
            }
        }

    }
    for(int i=0;i<PRO;i++)
    {
        for(int j=0;j<RES;j++)
        {
            need[i][j] = max1[i][j]-allo[i][j];
            printf("%d ",max1[i][j]);
            fflush(stdout);
        }
    }
    ui->tableWidget->setRowCount(PRO);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    for(int i=0;i<PRO;i++){
        int tem;
        ui->tableWidget->setItem(i,0,new QTableWidgetItem(QString::number(i+1) ));
        ui->tableWidget->repaint();
        for(tem=1;tem<RES+1;tem++)
        {
            ui->tableWidget->setItem(i,tem,new QTableWidgetItem(QString::number(max1[i][tem-1]) ));
            ui->tableWidget->repaint();
        }
        for(;tem<2*RES+1;tem++)
        {
            ui->tableWidget->setItem(i,tem,new QTableWidgetItem(QString::number(need[i][tem-RES-1]) ));
            ui->tableWidget->repaint();
        }
        for(;tem<3*RES+1;tem++)
        {
            ui->tableWidget->setItem(i,tem,new QTableWidgetItem(QString::number(allo[i][tem-2*RES-1]) ));
            ui->tableWidget->repaint();
        }
    }
    int request[RES] = {0}; //初始态，request数列为空
    int p=0;
    int num = banker(request,p);
    ui->tableWidget_2->setRowCount(PRO);
    ui->tableWidget_2->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    for(int i=0;i<PRO;i++){
        int tem;
        ui->tableWidget_2->setItem(i,0,new QTableWidgetItem(QString::number(sec[i]) ));
        ui->tableWidget_2->repaint();
        for(tem=1;tem<RES+1;tem++)
        {
            ui->tableWidget_2->setItem(i,tem,new QTableWidgetItem(QString::number(work1[sec[i]-1][tem-1]) ));
            ui->tableWidget_2->repaint();
        }
        for(;tem<2*RES+1;tem++)
        {
            ui->tableWidget_2->setItem(i,tem,new QTableWidgetItem(QString::number(need[sec[i]-1][tem-RES-1]) ));
            ui->tableWidget_2->repaint();
        }
        for(;tem<3*RES+1;tem++)
        {
            ui->tableWidget_2->setItem(i,tem,new QTableWidgetItem(QString::number(allo[sec[i]-1][tem-2*RES-1]) ));
            ui->tableWidget_2->repaint();
        }
        for(;tem<4*RES+1;tem++)
        {
            ui->tableWidget_2->setItem(i,tem,new QTableWidgetItem(QString::number(wa[sec[i]-1][tem-3*RES-1]) ));
            ui->tableWidget_2->repaint();
        }
    }
    if(num==PRO)
    {
        QMessageBox::warning(this, tr("成功"), tr("有安全序列！"), QMessageBox::Ok);
        ui->showLabel->setText(QString::number(sec[0]));
        ui->showLabel_2->setText(QString::number(sec[1]));
        ui->showLabel_3->setText(QString::number(sec[2]));
        ui->showLabel_4->setText(QString::number(sec[3]));
        ui->showLabel_5->setText(QString::number(sec[4]));
    }
    else
    {
        ui->showLabel->clear();
        ui->showLabel_2->clear();
        ui->showLabel_3->clear();
        ui->showLabel_4->clear();
        ui->showLabel_5->clear();
        QMessageBox::warning(this, tr("警告"), tr("无安全序列！"), QMessageBox::Ok);
    }

}


void Widget::on_pushButton_3_clicked()
{
    if(ui->aEdit->text().isEmpty()||ui->bEdit->text().isEmpty()||ui->cEdit->text().isEmpty())
    {
        QMessageBox::warning(this, tr("警告"), tr("请将信息填写完整！"), QMessageBox::Ok);
    }
    else{
        int n[3] = {0};
        QString x1 = ui->aEdit->text();
        n[0] = x1.toInt();
        QString x2 = ui->bEdit->text();
        n[1] = x2.toInt();
        QString x3 = ui->cEdit->text();
        n[2] = x3.toInt();
        QString x4 = ui->nEdit->text();
        int p = x4.toInt();
        int request[RES];
        for(int i=0;i<RES;i++)
            request[i] = n[i];
        int num = banker(request,p);
        ui->tableWidget_2->setRowCount(PRO);
        ui->tableWidget_2->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        for(int i=0;i<PRO;i++){
            int tem;
            ui->tableWidget_2->setItem(i,0,new QTableWidgetItem(QString::number(sec[i]) ));
            ui->tableWidget_2->repaint();
            for(tem=1;tem<RES+1;tem++)
            {
                ui->tableWidget_2->setItem(i,tem,new QTableWidgetItem(QString::number(work1[sec[i]-1][tem-1]) ));
                ui->tableWidget_2->repaint();
            }
            for(;tem<2*RES+1;tem++)
            {
                ui->tableWidget_2->setItem(i,tem,new QTableWidgetItem(QString::number(need[sec[i]-1][tem-RES-1]) ));
                ui->tableWidget_2->repaint();
                ui->tableWidget->setItem(i,tem,new QTableWidgetItem(QString::number(need[i][tem-RES-1]) ));
                ui->tableWidget->repaint();
            }
            for(;tem<3*RES+1;tem++)
            {
                ui->tableWidget_2->setItem(i,tem,new QTableWidgetItem(QString::number(allo[sec[i]-1][tem-2*RES-1]) ));
                ui->tableWidget_2->repaint();
                ui->tableWidget->setItem(i,tem,new QTableWidgetItem(QString::number(allo[i][tem-2*RES-1]) ));
                ui->tableWidget->repaint();
            }
            for(;tem<4*RES+1;tem++)
            {
                ui->tableWidget_2->setItem(i,tem,new QTableWidgetItem(QString::number(wa[sec[i]-1][tem-3*RES-1]) ));
                ui->tableWidget_2->repaint();
            }
        }
        if(num==PRO)
        {
            ui->showLabel->setText(QString::number(sec[0]));
            ui->showLabel_2->setText(QString::number(sec[1]));
            ui->showLabel_3->setText(QString::number(sec[2]));
            ui->showLabel_4->setText(QString::number(sec[3]));
            ui->showLabel_5->setText(QString::number(sec[4]));
            QMessageBox::warning(this, tr("成功"), tr("有安全序列！"), QMessageBox::Ok);
        }
        else
        {
            ui->showLabel->clear();
            ui->showLabel_2->clear();
            ui->showLabel_3->clear();
            ui->showLabel_4->clear();
            ui->showLabel_5->clear();
            QMessageBox::warning(this, tr("警告"), tr("无安全序列！"), QMessageBox::Ok);
        }
    }
}
