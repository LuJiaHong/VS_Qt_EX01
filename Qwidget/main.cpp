#include "qwidget.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Qwidget w;
	w.show();
	return a.exec();
}
