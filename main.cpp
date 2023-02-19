#include <QApplication>
#include <QPushButton>
#include "c3dnamingdialog.h"

int main(int argc, char* argv[])
{
	QApplication a(argc, argv);
	auto lMainDlg = new C3dNamingDialog;
	lMainDlg->show();
	return QApplication::exec();
}
