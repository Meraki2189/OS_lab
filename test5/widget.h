#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <stdio.h>
#include <QMessageBox>

extern int list[20]; //序列
extern int list_res[20]; //结果序列
extern int disk_num; //磁盘数
extern int dis_list[20]; //移动距离
extern int len; //移臂总量

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
    void on_sstfBtn_clicked();

    void on_scanBtn_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
