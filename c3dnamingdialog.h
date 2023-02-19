//
// Created by michael.brunner on 19/02/2023.
//

#ifndef INC_3DNAMING_C3DNAMINGDIALOG_H
#define INC_3DNAMING_C3DNAMINGDIALOG_H

#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class C3dNamingDialog; }
QT_END_NAMESPACE

class C3dNamingDialog : public QMainWindow
{
Q_OBJECT

public:
	explicit C3dNamingDialog(QWidget* parent = nullptr);

	~C3dNamingDialog() override;

private:
	Ui::C3dNamingDialog* ui;
};


#endif //INC_3DNAMING_C3DNAMINGDIALOG_H
