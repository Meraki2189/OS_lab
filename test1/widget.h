#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <stdio.h>
#include <queue>
#include <stack>
#include <QDebug>
#include <stdlib.h>
#include <QTableWidgetItem>

typedef struct PCB{
    char id;
    int arr_time;
    int ser_time;
    int fin_time;
    int run_time;
    double avg_run_time;
    char state;//状态
    int lef_time; // 剩余时间
    int use_time; //已使用时间
}pcb;

extern pcb pcb1[10];
extern int ready[10]; // 按照到达时间顺序的进程在pcb1中的位置
extern int order[10]; // 记录到达时间的排序
extern int ready_t[10];
extern int order_t[10];
extern int num;


namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_fcfsBtn_clicked();

    void on_sjfBtn_clicked();

    void on_rrBtn_clicked();

    void on_hrnBtn_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
