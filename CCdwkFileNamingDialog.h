//
// Created by michael.brunner on 19/02/2023.
//

#ifndef INC_3DNAMING_CCDWKFILENAMINGDIALOG_H
#define INC_3DNAMING_CCDWKFILENAMINGDIALOG_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class CCdwkFileNamingDialog; }
QT_END_NAMESPACE

class CCdwkFileNamingDialog : public QMainWindow
{
Q_OBJECT

public:
	explicit CCdwkFileNamingDialog(QWidget* parent = nullptr);

	~CCdwkFileNamingDialog() override;

private:
	Ui::CCdwkFileNamingDialog* ui;
};


#endif //INC_3DNAMING_CCDWKFILENAMINGDIALOG_H
