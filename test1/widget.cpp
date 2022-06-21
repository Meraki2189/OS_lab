#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>
#include <stdio.h>
#include "fcfs.h"
#include "rr.h"
#include "sjf.h"
#include "hrn.h"

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
pcb pcb1[10];
int ready[10] = {0}; // 按照到达时间顺序的进程在pcb1中的位置
int order[10] = {0}; // 记录到达时间的排序
int ready_t[10] = {0};
int order_t[10] = {0};


void Widget::on_fcfsBtn_clicked()
{
    if(ui->lineEdit->text().isEmpty())
    {
        QMessageBox::warning(this, tr("警告"), tr("请将信息填写完整！"), QMessageBox::Ok);
    }
    else{
        QString x = ui->lineEdit->text();
        QByteArray ba = x.toLatin1();
        char *ch = ba.data();
        int num = fcfs(ch);
        ui->tableWidget->setRowCount(num);
        ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        for(int i=0;i<num;i++){
            printf("%d %d %d %d %.1f\n",pcb1[ready[i]].arr_time,pcb1[ready[i]].ser_time, pcb1[ready[i]].fin_time, pcb1[ready[i]].run_time, pcb1[ready[i]].avg_run_time);
            fflush(stdout);
            ui->tableWidget->setItem(i,0,new QTableWidgetItem(QString(pcb1[ready[i]].id) ));
            ui->tableWidget->repaint();
            ui->tableWidget->setItem(i,1,new QTableWidgetItem(QString::number(pcb1[ready[i]].arr_time)) );
            ui->tableWidget->repaint();
            ui->tableWidget->setItem(i,2,new QTableWidgetItem(QString::number(pcb1[ready[i]].ser_time)) );
            ui->tableWidget->repaint();
            ui->tableWidget->setItem(i,3,new QTableWidgetItem(QString::number(pcb1[ready[i]].fin_time)) );
            ui->tableWidget->repaint();
            ui->tableWidget->setItem(i,4,new QTableWidgetItem(QString::number(pcb1[ready[i]].run_time)) );
            ui->tableWidget->repaint();
            ui->tableWidget->setItem(i,5,new QTableWidgetItem(QString::number(pcb1[ready[i]].avg_run_time)) );
            ui->tableWidget->repaint();
        }
    }
}

void Widget::on_rrBtn_clicked()
{
    if(ui->lineEdit->text().isEmpty())
    {
        QMessageBox::warning(this, tr("警告"), tr("请将信息填写完整！"), QMessageBox::Ok);
    }
    else{
        QString x = ui->lineEdit->text();
        QByteArray ba = x.toLatin1();
        char *ch = ba.data();
        int num = rr(ch);
        ui->tableWidget->setRowCount(num);
        ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        for(int i=0;i<num;i++){
            printf("%d %d %d %d %.1f\n",pcb1[ready[i]].arr_time,pcb1[ready[i]].ser_time, pcb1[ready[i]].fin_time, pcb1[ready[i]].run_time, pcb1[ready[i]].avg_run_time);
            fflush(stdout);
            ui->tableWidget->setItem(i,0,new QTableWidgetItem(QString(pcb1[ready[i]].id) ));
            ui->tableWidget->repaint();
            ui->tableWidget->setItem(i,1,new QTableWidgetItem(QString::number(pcb1[ready[i]].arr_time)) );
            ui->tableWidget->repaint();
            ui->tableWidget->setItem(i,2,new QTableWidgetItem(QString::number(pcb1[ready[i]].ser_time)) );
            ui->tableWidget->repaint();
            ui->tableWidget->setItem(i,3,new QTableWidgetItem(QString::number(pcb1[ready[i]].fin_time)) );
            ui->tableWidget->repaint();
            ui->tableWidget->setItem(i,4,new QTableWidgetItem(QString::number(pcb1[ready[i]].run_time)) );
            ui->tableWidget->repaint();
            ui->tableWidget->setItem(i,5,new QTableWidgetItem(QString::number(pcb1[ready[i]].avg_run_time)) );
            ui->tableWidget->repaint();
        }
    }
}

void Widget::on_sjfBtn_clicked()
{
    if(ui->lineEdit->text().isEmpty())
    {
        QMessageBox::warning(this, tr("警告"), tr("请将信息填写完整！"), QMessageBox::Ok);
    }
    else{
        QString x = ui->lineEdit->text();
        QByteArray ba = x.toLatin1();
        char *ch = ba.data();
        int num = sjf(ch);
        ui->tableWidget->setRowCount(num);
        ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        for(int i=0;i<num;i++){
            printf("%d %d %d %d %.1f\n",pcb1[ready_t[i]].arr_time,pcb1[ready_t[i]].ser_time, pcb1[ready_t[i]].fin_time, pcb1[ready_t[i]].run_time, pcb1[ready_t[i]].avg_run_time);
            fflush(stdout);
            ui->tableWidget->setItem(i,0,new QTableWidgetItem(QString(pcb1[ready_t[i]].id) ));
            ui->tableWidget->repaint();
            ui->tableWidget->setItem(i,1,new QTableWidgetItem(QString::number(pcb1[ready_t[i]].arr_time)) );
            ui->tableWidget->repaint();
            ui->tableWidget->setItem(i,2,new QTableWidgetItem(QString::number(pcb1[ready_t[i]].ser_time)) );
            ui->tableWidget->repaint();
            ui->tableWidget->setItem(i,3,new QTableWidgetItem(QString::number(pcb1[ready_t[i]].fin_time)) );
            ui->tableWidget->repaint();
            ui->tableWidget->setItem(i,4,new QTableWidgetItem(QString::number(pcb1[ready_t[i]].run_time)) );
            ui->tableWidget->repaint();
            ui->tableWidget->setItem(i,5,new QTableWidgetItem(QString::number(pcb1[ready_t[i]].avg_run_time)) );
            ui->tableWidget->repaint();
        }
    }
}

void Widget::on_hrnBtn_clicked()
{
    if(ui->lineEdit->text().isEmpty())
    {
        QMessageBox::warning(this, tr("警告"), tr("请将信息填写完整！"), QMessageBox::Ok);
    }
    else{
        QString x = ui->lineEdit->text();
        QByteArray ba = x.toLatin1();
        char *ch = ba.data();
        int num = hrn(ch);
        ui->tableWidget->setRowCount(num);
        ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        for(int i=0;i<num;i++){
            printf("%d %d %d %d %.1f\n",pcb1[ready_t[i]].arr_time,pcb1[ready_t[i]].ser_time, pcb1[ready_t[i]].fin_time, pcb1[ready_t[i]].run_time, pcb1[ready_t[i]].avg_run_time);
            fflush(stdout);
            ui->tableWidget->setItem(i,0,new QTableWidgetItem(QString(pcb1[ready_t[i]].id) ));
            ui->tableWidget->repaint();
            ui->tableWidget->setItem(i,1,new QTableWidgetItem(QString::number(pcb1[ready_t[i]].arr_time)) );
            ui->tableWidget->repaint();
            ui->tableWidget->setItem(i,2,new QTableWidgetItem(QString::number(pcb1[ready_t[i]].ser_time)) );
            ui->tableWidget->repaint();
            ui->tableWidget->setItem(i,3,new QTableWidgetItem(QString::number(pcb1[ready_t[i]].fin_time)) );
            ui->tableWidget->repaint();
            ui->tableWidget->setItem(i,4,new QTableWidgetItem(QString::number(pcb1[ready_t[i]].run_time)) );
            ui->tableWidget->repaint();
            ui->tableWidget->setItem(i,5,new QTableWidgetItem(QString::number(pcb1[ready_t[i]].avg_run_time)) );
            ui->tableWidget->repaint();
        }
    }
}
