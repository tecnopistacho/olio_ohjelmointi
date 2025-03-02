#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->startButton->setStyleSheet("background-color: pink;");
    ui->stopButton->setStyleSheet("background-color: pink;");
    ui->switchButton_1->setStyleSheet("background-color: pink;");
    ui->switchButton_2->setStyleSheet("background-color: pink;");
    ui->timeButton_120->setStyleSheet("background-color: pink;");
    ui->timeButton_5min->setStyleSheet("background-color: pink;");

    gameTime = 0;
    player1Time = 0;
    player2Time = 0;
    currentPlayer = 1;

    pQTimer = new QTimer(this);
    connect(pQTimer, &QTimer::timeout, this, &MainWindow::timeout);

    connect(ui->timeButton_120, &QPushButton::clicked, this, &MainWindow::setGameTime120);
    connect(ui->timeButton_5min, &QPushButton::clicked, this, &MainWindow::setGameTime5min);
    connect(ui->startButton, &QPushButton::clicked, this, &MainWindow::startGame);
    connect(ui->stopButton, &QPushButton::clicked, this, &MainWindow::stopGame);
    connect(ui->switchButton_1, &QPushButton::clicked, this, &MainWindow::switchPlayer);
    connect(ui->switchButton_2, &QPushButton::clicked, this, &MainWindow::switchPlayer);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::timeout()
{
    if(currentPlayer==1)
    {
        if (player1Time > 0) player1Time--;
        else
        {
            pQTimer->stop();
            setGameInfoText("Player 1 ran out of time, WINNER IS PLAYER 2!!!!", 18);
        }
    }
    else
    {
        if (player2Time > 0) player2Time--;
        else
        {
            pQTimer->stop();
            setGameInfoText("Player 2 ran out of time, WINNER IS PLAYER 1!!!!", 18);
        }
    }
    updateProgressBar();
}

void MainWindow::updateProgressBar()
{
    if (gameTime > 0)
    {
        ui->progressBar_1->setValue((player1Time * 100) / gameTime);
        ui->progressBar_2->setValue((player2Time * 100) / gameTime);
    }
}

void MainWindow::setGameInfoText(QString text, short fontSize)
{
    ui->label->setText(text);
    ui->label->setStyleSheet(QString("font-size: %1px;").arg(fontSize));
}

void MainWindow::startGame()
{
    if (gameTime == 0)
    {
        setGameInfoText("Please select a game time first.", 14);
        return;
    }
    pQTimer->start(1000);
    setGameInfoText("Game started! Player 1's turn, Have Fun!", 14);
}

void MainWindow::stopGame()
{
    pQTimer->stop();
    setGameInfoText("Game stopped. You can select a playtime and start a new game.", 14);
}

void MainWindow::switchPlayer()
{
    if(currentPlayer==1)
    {
        currentPlayer = 2;
        setGameInfoText("Player 2's turn.", 16);
    }
    else
    {
        currentPlayer = 1;
        setGameInfoText("Player 1's turn.", 16);
    }
}

void MainWindow::setGameTime120()
{
    gameTime = 120;
    player1Time = gameTime;
    player2Time = gameTime;
    updateProgressBar();
    setGameInfoText("Game time set to 120 seconds.", 14);
}

void MainWindow::setGameTime5min()
{
    gameTime = 300;
    player1Time = gameTime;
    player2Time = gameTime;
    updateProgressBar();
    setGameInfoText("Game time set to 5 minutes.", 14);
}



