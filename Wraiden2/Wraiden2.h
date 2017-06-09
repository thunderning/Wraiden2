#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Wraiden2.h"

class Wraiden2 : public QMainWindow
{
	Q_OBJECT

public:
	Wraiden2(QWidget *parent = Q_NULLPTR);

private:
	Ui::Wraiden2Class ui;
};
