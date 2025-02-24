#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_count_clicked()
{
    qDebug() << "Count pressed";
    QString str = ui->numNayt->text();
    int num =str.toInt();
    num++;
    QString ustr = QString::number(num);
    ui->numNayt->setText(ustr);
}


void MainWindow::on_reset_clicked(bool checked)
{
    qDebug() << "Reset pressed";
    QString str = ui->numNayt->text();
    int num =str.toInt();
    num = 0;
    QString ustr = QString::number(num);
    ui->numNayt->setText(ustr);
}


