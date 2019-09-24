#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QDebug>
#include <cstring>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    right = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    // 随机字母操作
    srand((unsigned int)time(NULL));
    for(int i = 0; i < 20; i++)
    {
        arr[i] = rand() % 26 + 'a';
    }
    // 重置界面
    ui->textEdit->setText("");
    ui->label_2->setText("");
    ui->label->setText(arr);

    start_time = time(NULL);
    // 重置计数器
    right = 0;
}


void MainWindow::on_pushButton_2_clicked()
{
    end_time = time(NULL);
    // 获取文本内容
    QString txt = ui->textEdit->toPlainText();
    qDebug()<< txt;
    char temp[30];
    strncpy_s(temp, txt.toStdString().c_str(),20);
    right = 0;


    int i = 0;
    while(*(temp+i) && arr[i])
    {
        if(*(temp+i) == arr[i])
        {
            right ++;
        }
        i++;
    }

    QString res;
    res.sprintf("Right : %5.2lf  Time : %lld",right / 20.0 * 100,end_time-start_time);
    ui->label_2->setText(res);
}

