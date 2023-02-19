//
// Created by michael.brunner on 19/02/2023.
//


#include "CCdwkFileNamingDialog.h"
#include "ui_CCdwkFileNamingDialog.h"


CCdwkFileNamingDialog::CCdwkFileNamingDialog(QWidget* parent) :
		QMainWindow(parent), ui(new Ui::CCdwkFileNamingDialog)
{
	ui->setupUi(this);
}

CCdwkFileNamingDialog::~CCdwkFileNamingDialog()
{
	delete ui;
}
