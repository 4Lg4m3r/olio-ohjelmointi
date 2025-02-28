#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->setText("Select playtime and start game");
}

MainWindow::~MainWindow()
{
    if (timer) {
        timer->stop();
        delete timer;
        timer = nullptr;
    }
    delete ui;
}

void MainWindow::on_button120s_clicked()
{
    gameTime = 120;
    ui->label->setText("Gametime 120s, ready to play");
}

void MainWindow::on_button5min_clicked()
{
    gameTime = 300;
     ui->label->setText("Gametime 5min, ready to play");
}

void MainWindow::on_startButton_clicked()
{
    ui->label->setText("Game ongoing");

    //gameTime = 10;
    p1Time = gameTime;
    p2Time = gameTime;
    currentPlayer = 1;

    // ui:n alustukset
    ui->progressBarP1->setRange(0,gameTime);
    ui->progressBarP2->setRange(0,gameTime);
    ui->progressBarP1->setValue(gameTime);
    ui->progressBarP2->setValue(gameTime);

    // käynnistetään ajastin
    timer = new QTimer(this);
    connect(timer,&QTimer::timeout,this,&MainWindow::updateProgressBar);
    timer->setInterval(1000); // 1000ms = 1s
    timer->start();
}

void MainWindow::updateProgressBar()
{
    if (currentPlayer == 1) {
        p2Time = gameTime+1;
        p1Time = p1Time-1;
        ui->progressBarP1->setValue(p1Time);
        if (gameTime == 0) {
            timer->stop();
            delete timer;
            timer = nullptr;
            ui->label->setText("Player 2 won!");
        }
    }
    else if (currentPlayer == 2) {
        p1Time = gameTime+1;
        p2Time = p2Time-1;
        ui->progressBarP2->setValue(p2Time);
        if (gameTime == 0) {
            timer->stop();
            delete timer;
            timer = nullptr;
            ui->label->setText("Player 1 won!");
        }
    }

}


void MainWindow::on_endP1_clicked()
{
    currentPlayer = 2;
}


void MainWindow::on_endP2_clicked()
{
    currentPlayer = 1;
}


void MainWindow::on_stopButton_clicked()
{
    timer->stop();
    delete timer;
    timer = nullptr;
    ui->progressBarP1->setValue(gameTime);
    ui->progressBarP2->setValue(gameTime);
    ui->label->setText("Press start for new game");
}







