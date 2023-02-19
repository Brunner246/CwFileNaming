//
// Created by michael.brunner on 19/02/2023.
//

// You may need to build the project (run Qt uic code generator) to get "ui_C3dNamingDialog.h" resolved

#include "c3dnamingdialog.h"
#include "ui_C3dNamingDialog.h"


C3dNamingDialog::C3dNamingDialog(QWidget* parent) :
		QMainWindow(parent), ui(new Ui::C3dNamingDialog)
{
	ui->setupUi(this);
}

C3dNamingDialog::~C3dNamingDialog()
{
	delete ui;
}
