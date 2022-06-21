#include "widget.h"
#include "ui_widget.h"
#include "sstf.h"
#include "scan.h"

int list[20] = {0};
int list_res[20] = {0};
int disk_num;
int dis_list[20] = {0};
int len = 0;

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

void Widget::on_sstfBtn_clicked()
{
    if(ui->lineEdit->text().isEmpty())
    {
        QMessageBox::warning(this, tr("警告"), tr("请将信息填写完整！"), QMessageBox::Ok);
    }
    else{
        QString x1 = ui->lineEdit->text();
        QByteArray ba1 = x1.toLatin1();
        char *ch = ba1.data();
        QString x2 = ui->start->text();
        int start = x2.toInt();
        int num = sstf(ch,start);
        ui->tableWidget->setRowCount(num);
        ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        for(int i=0;i<num;i++){
            ui->tableWidget->setItem(i,0,new QTableWidgetItem(QString::number(list_res[i])));
            ui->tableWidget->repaint();
            ui->tableWidget->setItem(i,1,new QTableWidgetItem(QString::number(dis_list[i])) );
            ui->tableWidget->repaint();
        }
        ui->text_label->setText(QString::number(len));
    }
}

void Widget::on_scanBtn_clicked()
{
    if(ui->lineEdit->text().isEmpty())
    {
        QMessageBox::warning(this, tr("警告"), tr("请将信息填写完整！"), QMessageBox::Ok);
    }
    else{
        QString x1 = ui->lineEdit->text();
        QByteArray ba1 = x1.toLatin1();
        char *ch = ba1.data();
        QString x2 = ui->start->text();
        int start = x2.toInt();
        int num = scan(ch,start);
        ui->tableWidget->setRowCount(num);
        ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        for(int i=0;i<num;i++){
            ui->tableWidget->setItem(i,0,new QTableWidgetItem(QString::number(list_res[i])));
            ui->tableWidget->repaint();
            ui->tableWidget->setItem(i,1,new QTableWidgetItem(QString::number(dis_list[i])) );
            ui->tableWidget->repaint();
        }
        ui->text_label->setText(QString::number(len));
    }
}
