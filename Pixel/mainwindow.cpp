#include "mainwindow.h"
#include "ui_mainwindow.h"

int tamanoX=650;
int tamanoY=500;
QImage lienzo = QImage(tamanoX,tamanoY,QImage::Format_RGB32);

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


void MainWindow::on_pushButton_clicked()
{
    /*for (int x=0;x<tamanoX ; x++) {
        for (int y=0;y<tamanoY ;y++ ) {
            lienzo.setPixel(x,y,qRgb(255,255,255));//cambia el fondo del lienzo a color blanco (por defecto es negro)
        }
    }*/
    int i;
    for (i=0;i<tamanoX;i++ )
    {
        lienzo.setPixel(i,20,qRgb(255,0,0));
    }
    QGraphicsScene *graphic = new QGraphicsScene(this);
    graphic->addPixmap(QPixmap::fromImage(lienzo));
    ui->graphicsView->setScene(graphic);
}

