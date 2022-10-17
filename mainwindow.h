#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVBoxLayout>
#include <QHBoxLayout>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QVBoxLayout *rootLayout;
    QHBoxLayout *iconFieldLayout;
    QHBoxLayout *buttonFieldLayout;
    QHBoxLayout *closeButtonFieldLayout;
    QVBoxLayout *leftFieldLayout;
    QVBoxLayout *rightFieldLayout;
    void setLabel();
    void setButton();
    bool isButton1Clicked = false;
    bool isButton2Clicked = false;
    bool isButton3Clicked = false;

private slots:
    void button1Clicked();
    void button2Clicked();
    void button3Clicked();
};
#endif // MAINWINDOW_H
