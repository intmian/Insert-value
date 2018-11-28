#pragma once
#include "Insertvalue.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Insertvalue w;
	w.show();
	return a.exec();
}