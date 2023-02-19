#include <QApplication>
#include <QPushButton>
#include "CCdwkFileNamingDialog.h"

int main(int argc, char* argv[])
{
	QApplication a(argc, argv);
	auto lMainDlg = new CCdwkFileNamingDialog;
	lMainDlg->show();
	return QApplication::exec();
}
