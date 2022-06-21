#include "widget.h"
#include "ui_widget.h"
#include "fifo.h"
#include "lru.h"
int pages[15] = {0};
int ans[10][15];
int pnum;
char judge[15]; //判断矩阵
int lps=0;   //缺页次数
double lpp = 0;   //缺页率
int PAGES=0;

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

void Widget::on_addBtn_clicked()
{
    int rowIndex = ui->tableWidget->rowCount();
    ui->tableWidget->insertRow(rowIndex);
    pnum = rowIndex+1;
    printf("page num:%d\n",pnum);
    fflush(stdout);
}

void Widget::on_deleteBtn_clicked()
{
    int rowIndex = ui->tableWidget->rowCount();
    if (rowIndex!=-1)
    {
        ui->tableWidget->removeRow(rowIndex-1);
        pnum = rowIndex-1;
        printf("page num:%d\n",pnum);
        fflush(stdout);
    }
}

void Widget::on_fifoBtn_clicked()
{
    if(ui->lineEdit->text().isEmpty())
    {
        QMessageBox::warning(this, tr("警告"), tr("请将信息填写完整！"), QMessageBox::Ok);
    }
    else{
        char nu = 'X';
        QString x = ui->lineEdit->text();
        QByteArray ba = x.toLatin1();
        char *ch = ba.data();
        PBlock pb[pnum];
        for(int i=0;i<pnum+1;i++){
            pb[i].num = 0;
            for(int j=0;j<15;j++){
              ans[i][j] = 0;
            }
        }
        for(int i=0;i<15;i++){
            pages[i]=0;
            judge[i] = 0;
        }
        fifo(ch,pb);
        ui->tableWidget->setColumnCount(PAGES);
        ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        for(int i=0;i<pnum;i++){
            for(int j=0;j<PAGES;j++)
            {
                ui->tableWidget->setItem(i,j,new QTableWidgetItem(QString::number(ans[i][j])));
                ui->tableWidget->repaint();
            }
        }
        ui->tableWidget_2->setColumnCount(PAGES);
        ui->tableWidget_2->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        for(int i=0;i<PAGES;i++)
        {
            ui->tableWidget_2->setItem(0,i,new QTableWidgetItem(QString(judge[i])));
            ui->tableWidget_2->repaint();
        }
        ui->tableWidget_3->setColumnCount(PAGES);
        ui->tableWidget_3->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        for(int i=0;i<PAGES;i++)
        {
            if(judge[i]=='F')
            {
                int ts=1;
                for(int j=0;j<pnum;j++)
                {
                    if(i == 0 || ans[j][i-1] == 0)
                    {
                        ts = 0;
                        break;
                    }
                }
                if(ts){
                    ui->tableWidget_3->setItem(0,i,new QTableWidgetItem(QString::number(ans[pnum-1][i-1])));
                    ui->tableWidget_3->repaint();
                }
                else{
                    ui->tableWidget_3->setItem(0,i,new QTableWidgetItem(QString(nu)));
                    ui->tableWidget_3->repaint();
                }
            }
            else{
                ui->tableWidget_3->setItem(0,i,new QTableWidgetItem(QString(nu)));
                ui->tableWidget_3->repaint();
            }

        }
        ui->lackTime->setText(QString::number(lps));
        ui->lackRate->setText(QString::number(lpp));
    }
}

void Widget::on_lruBtn_clicked()
{
    if(ui->lineEdit->text().isEmpty())
    {
        QMessageBox::warning(this, tr("警告"), tr("请将信息填写完整！"), QMessageBox::Ok);
    }
    else{
        char nu = 'X';
        QString x = ui->lineEdit->text();
        QByteArray ba = x.toLatin1();
        char *ch = ba.data();
        PBlock pb[pnum];
        for(int i=0;i<pnum+1;i++){
            pb[i].num = 0;
            for(int j=0;j<15;j++){
              ans[i][j] = 0;
            }
        }
        for(int i=0;i<15;i++){
            pages[i]=0;
            judge[i] = 0;
        }
        lru(ch,pb);
        ui->tableWidget->setColumnCount(PAGES);
        ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        for(int i=0;i<pnum;i++){
            for(int j=0;j<PAGES;j++)
            {
                ui->tableWidget->setItem(i,j,new QTableWidgetItem(QString::number(ans[i][j])));
                ui->tableWidget->repaint();
            }
        }
        ui->tableWidget_2->setColumnCount(PAGES);
        ui->tableWidget_2->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        for(int i=0;i<PAGES;i++)
        {
            ui->tableWidget_2->setItem(0,i,new QTableWidgetItem(QString(judge[i])));
            ui->tableWidget_2->repaint();
        }
        ui->tableWidget_3->setColumnCount(PAGES);
        ui->tableWidget_3->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        for(int i=0;i<PAGES;i++)
        {
            if(judge[i]=='F')
            {
                int ts=1;
                for(int j=0;j<pnum;j++)
                {
                    if(i == 0 || ans[j][i-1] == 0)
                    {
                        ts = 0;
                        break;
                    }
                }
                if(ts){
                    ui->tableWidget_3->setItem(0,i,new QTableWidgetItem(QString::number(ans[pnum-1][i-1])));
                    ui->tableWidget_3->repaint();
                }
                else{
                    ui->tableWidget_3->setItem(0,i,new QTableWidgetItem(QString(nu)));
                    ui->tableWidget_3->repaint();
                }
            }
            else{
                ui->tableWidget_3->setItem(0,i,new QTableWidgetItem(QString(nu)));
                ui->tableWidget_3->repaint();
            }

        }
        ui->lackTime->setText(QString::number(lps));
        ui->lackRate->setText(QString::number(lpp));
    }
}
