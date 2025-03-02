#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void timeout();
    void updateProgressBar();
    void setGameInfoText(QString, short);
    void startGame();
    void stopGame();
    void switchPlayer();
    void setGameTime120();
    void setGameTime5min();

private:
    Ui::MainWindow *ui;
    QTimer *pQTimer;

    short player1Time;
    short player2Time;
    short currentPlayer;
    short gameTime;
};
#endif // MAINWINDOW_H
