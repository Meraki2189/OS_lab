/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QTableWidget *tableWidget;
    QLineEdit *aEdit;
    QLineEdit *bEdit;
    QLineEdit *cEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QTableWidget *tableWidget_2;
    QLabel *showLabel;
    QLabel *showLabel_2;
    QLabel *showLabel_3;
    QLabel *showLabel_4;
    QLabel *showLabel_5;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *nEdit;
    QPushButton *pushButton_4;
    QLabel *label_6;
    QLabel *label_7;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(2100, 1300);
        tableWidget = new QTableWidget(Widget);
        if (tableWidget->columnCount() < 10)
            tableWidget->setColumnCount(10);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(20, 230, 2041, 421));
        aEdit = new QLineEdit(Widget);
        aEdit->setObjectName(QStringLiteral("aEdit"));
        aEdit->setGeometry(QRect(100, 70, 161, 61));
        bEdit = new QLineEdit(Widget);
        bEdit->setObjectName(QStringLiteral("bEdit"));
        bEdit->setGeometry(QRect(350, 70, 161, 61));
        cEdit = new QLineEdit(Widget);
        cEdit->setObjectName(QStringLiteral("cEdit"));
        cEdit->setGeometry(QRect(600, 70, 161, 61));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 10, 181, 51));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(350, 10, 221, 51));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(610, 10, 271, 51));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(90, 1190, 231, 71));
        pushButton_3 = new QPushButton(Widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(460, 1190, 241, 71));
        tableWidget_2 = new QTableWidget(Widget);
        if (tableWidget_2->columnCount() < 13)
            tableWidget_2->setColumnCount(13);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(4, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(5, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(6, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(7, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(8, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(9, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(10, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(11, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(12, __qtablewidgetitem22);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(20, 750, 2041, 421));
        showLabel = new QLabel(Widget);
        showLabel->setObjectName(QStringLiteral("showLabel"));
        showLabel->setGeometry(QRect(1360, 1180, 61, 51));
        showLabel_2 = new QLabel(Widget);
        showLabel_2->setObjectName(QStringLiteral("showLabel_2"));
        showLabel_2->setGeometry(QRect(1450, 1180, 51, 51));
        showLabel_3 = new QLabel(Widget);
        showLabel_3->setObjectName(QStringLiteral("showLabel_3"));
        showLabel_3->setGeometry(QRect(1540, 1180, 51, 51));
        showLabel_4 = new QLabel(Widget);
        showLabel_4->setObjectName(QStringLiteral("showLabel_4"));
        showLabel_4->setGeometry(QRect(1620, 1180, 51, 51));
        showLabel_5 = new QLabel(Widget);
        showLabel_5->setObjectName(QStringLiteral("showLabel_5"));
        showLabel_5->setGeometry(QRect(1700, 1180, 51, 51));
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(1350, 1120, 461, 51));
        label_5 = new QLabel(Widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(890, 10, 271, 51));
        nEdit = new QLineEdit(Widget);
        nEdit->setObjectName(QStringLiteral("nEdit"));
        nEdit->setGeometry(QRect(880, 70, 161, 61));
        pushButton_4 = new QPushButton(Widget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(860, 1190, 241, 71));
        label_6 = new QLabel(Widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 680, 261, 61));
        label_7 = new QLabel(Widget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(40, 150, 261, 61));

        retranslateUi(Widget);
        QObject::connect(pushButton_4, SIGNAL(clicked()), Widget, SLOT(close()));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Widget", "P", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Widget", "MaxA", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Widget", "MaxB", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Widget", "MaxC", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Widget", "NeedA", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("Widget", "NeedB", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("Widget", "NeedC", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("Widget", "AllocationA", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("Widget", "AllocationB", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("Widget", "AllocationC", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "\347\224\263\350\257\267A\350\265\204\346\272\220\346\225\260", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "\347\224\263\350\257\267B\350\265\204\346\272\220\346\225\260", Q_NULLPTR));
        label_3->setText(QApplication::translate("Widget", "\347\224\263\350\257\267C\350\265\204\346\272\220\346\225\260", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Widget", "\346\201\242\345\244\215t0\347\212\266\346\200\201", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Widget", "\350\257\267\346\261\202\350\265\204\346\272\220", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem10->setText(QApplication::translate("Widget", "P", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem11->setText(QApplication::translate("Widget", "WorkA", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem12->setText(QApplication::translate("Widget", "WorkB", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem13->setText(QApplication::translate("Widget", "WorkC", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget_2->horizontalHeaderItem(4);
        ___qtablewidgetitem14->setText(QApplication::translate("Widget", "NeedA", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget_2->horizontalHeaderItem(5);
        ___qtablewidgetitem15->setText(QApplication::translate("Widget", "NeedB", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget_2->horizontalHeaderItem(6);
        ___qtablewidgetitem16->setText(QApplication::translate("Widget", "NeedC", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget_2->horizontalHeaderItem(7);
        ___qtablewidgetitem17->setText(QApplication::translate("Widget", "AllocationA", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget_2->horizontalHeaderItem(8);
        ___qtablewidgetitem18->setText(QApplication::translate("Widget", "AllocationB", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget_2->horizontalHeaderItem(9);
        ___qtablewidgetitem19->setText(QApplication::translate("Widget", "AllocationC", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget_2->horizontalHeaderItem(10);
        ___qtablewidgetitem20->setText(QApplication::translate("Widget", "W+A(A)", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget_2->horizontalHeaderItem(11);
        ___qtablewidgetitem21->setText(QApplication::translate("Widget", "W+A(B)", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget_2->horizontalHeaderItem(12);
        ___qtablewidgetitem22->setText(QApplication::translate("Widget", "W+A(C)", Q_NULLPTR));
        showLabel->setText(QString());
        showLabel_2->setText(QString());
        showLabel_3->setText(QString());
        showLabel_4->setText(QString());
        showLabel_5->setText(QString());
        label_4->setText(QApplication::translate("Widget", "\345\256\211\345\205\250\345\272\217\345\210\227", Q_NULLPTR));
        label_5->setText(QApplication::translate("Widget", "\350\257\267\346\261\202\350\277\233\347\250\213P\357\274\210\350\276\223\345\205\245\346\225\260\345\255\227\357\274\211", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("Widget", "\351\200\200\345\207\272", Q_NULLPTR));
        label_6->setText(QApplication::translate("Widget", "\345\256\211\345\205\250\346\200\247\346\243\200\346\237\245", Q_NULLPTR));
        label_7->setText(QApplication::translate("Widget", "\350\265\204\346\272\220\345\210\206\351\205\215\350\241\250", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
