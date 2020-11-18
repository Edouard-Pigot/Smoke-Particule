// Basé sur :
// CC-BY Edouard.Thiel@univ-amu.fr - 22/01/2019

#include "princ.h"
#include <QDebug>
#include <QColorDialog>

Princ::Princ(QWidget *parent) : QMainWindow(parent)
{
    setupUi(this);
}

void Princ::on_colorButton_clicked()
{
    QColor color = QColorDialog::getColor(Qt::white, this);
    if(color.isValid())
        glarea->smoke->puffColor = QVector3D(color.red()/255.0f, color.green()/255.0f, color.blue()/255.0f);
}

void Princ::on_TI_valueChanged(double arg1)
{
    glarea->smoke->timeInterval = TI->value();
}

void Princ::on_TTL_valueChanged(double arg1)
{
    glarea->smoke->timeToLive = TTL->value();
}
