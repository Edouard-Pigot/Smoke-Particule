// Basé sur :
// CC-BY Edouard.Thiel@univ-amu.fr - 22/01/2019

#ifndef PRINC_H
#define PRINC_H

#include "ui_princ.h"

class Princ : public QMainWindow, private Ui::Princ
{
    Q_OBJECT

public:
    explicit Princ(QWidget *parent = nullptr);
private slots:
    void on_colorButton_clicked();
    void on_TI_valueChanged(double arg1);
    void on_TTL_valueChanged(double arg1);
};

#endif // PRINC_H
