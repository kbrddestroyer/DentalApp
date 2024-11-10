#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_DentalApp.h"

class DentalApp : public QMainWindow
{
    Q_OBJECT

public:
    DentalApp(QWidget *parent = nullptr);
    ~DentalApp();

private:
    Ui::DentalAppClass ui;
};
