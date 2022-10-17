#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "human.h"
#include "alien-adapter.h"

#include <QLabel>
#include <QPushButton>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    rootLayout = new QVBoxLayout;
    leftFieldLayout = new QVBoxLayout;
    rightFieldLayout = new QVBoxLayout;
    iconFieldLayout = new QHBoxLayout;
    closeButtonFieldLayout = new QHBoxLayout;
    setLabel();
    setButton();

    rootLayout->setAlignment(Qt::AlignCenter);
    rootLayout->addLayout(iconFieldLayout);
    rootLayout->addLayout(closeButtonFieldLayout);

    setFixedSize(800, 500);

    ui->setupUi(this);
    ui->centralwidget->setLayout(rootLayout);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setButton(){
    QPushButton *button1 = new QPushButton("&こんにちは", this);
    connect(button1, SIGNAL(clicked()), this, SLOT(button1Clicked()));

    QPushButton *button2 = new QPushButton("&こんにちは", this);
    connect(button2, SIGNAL(clicked()), this, SLOT(button2Clicked()));

    QPushButton *button3 = new QPushButton("&エイリアンと仲良くする", this);
    connect(button3, SIGNAL(clicked()), this, SLOT(button3Clicked()));

    leftFieldLayout->addWidget(button1);
    rightFieldLayout->addWidget(button2);
    closeButtonFieldLayout->addWidget(button3);
}

void MainWindow::button1Clicked(){
    if(isButton1Clicked){
        return;
    }
    Human *human = new Human();
    QLabel *label = new QLabel(human->sayHello().c_str());
    leftFieldLayout->insertWidget(0, label);
    isButton1Clicked = true;
}

void MainWindow::button2Clicked(){
    if(isButton3Clicked && !isButton2Clicked){
        AlienAdapter *alien = new AlienAdapter();
        QLabel *label = new QLabel(alien->sayHello().c_str());
        rightFieldLayout->insertWidget(0, label);
        isButton2Clicked = true;
    }
}

void MainWindow::button3Clicked(){
    if(!isButton3Clicked){
        isButton3Clicked = true;
    }
}

void MainWindow::setLabel(){
    QString imagePaths[2] = {":/assets/assets/boy.png", ":/assets/assets/alien.png"};

    for(int i=0; i<2; i++){
        QLabel *label = new QLabel();
        QPixmap *image = new QPixmap(imagePaths[i]);

        label->setPixmap(*image);
        label->setFixedSize(80, 80);
        label->setScaledContents(true);

       if(i == 0){
            leftFieldLayout->addWidget(label, 0, Qt::AlignCenter);
        } else {
            rightFieldLayout->addWidget(label, 0, Qt::AlignCenter);
        }
    }

    iconFieldLayout->addLayout(leftFieldLayout);
    iconFieldLayout->addLayout(rightFieldLayout);
}
