#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QMessageBox>
#include <stdio.h>
#include <stdlib.h>
extern int PAGES;

extern int pages[15]; //页面引用串
extern int ans[10][15]; //结果数组
extern int pnum; //物理块数
extern char judge[15]; //判断缺页数组
extern int lps;   //缺页次数
extern double lpp;   //缺页率
typedef struct{
    int num; //该块所存页面号
}PBlock; //物理块结构体

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
    void on_addBtn_clicked();

    void on_deleteBtn_clicked();

    void on_fifoBtn_clicked();

    void on_lruBtn_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
