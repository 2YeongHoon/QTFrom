#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QTForm.h"

class QTForm : public QMainWindow
{
    Q_OBJECT

public:
    QTForm(QWidget *parent = Q_NULLPTR);

private:
    Ui::QTFormClass ui;
};
