#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QLabel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    rootLayout = new QVBoxLayout;
    iconFieldLayout = new QHBoxLayout;
    setLabel(":/assets/assets/boy.png");
    setLabel(":/assets/assets/alien.png");

    iconFieldLayout->setAlignment(Qt::AlignTop | Qt::AlignCenter);
    rootLayout->addLayout(iconFieldLayout);
    setFixedSize(800, 500);

    ui->setupUi(this);
    ui->centralwidget->setLayout(rootLayout);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setLabel(const char* imagePath){
    QLabel *label = new QLabel();
    QPixmap *image = new QPixmap(imagePath);

    label->setPixmap(*image);
    label->setFixedSize(80, 80);
    label->setScaledContents(true);

    iconFieldLayout->addWidget(label);
}
