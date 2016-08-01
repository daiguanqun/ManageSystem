#include "managesystem.h"
#include "LoginDialog.h"
#include <QtWidgets/QApplication>
#include <QDialog>
#include <QTextCodec>

int main(int argc, char *argv[])
{
	QCoreApplication::addLibraryPath("./");
	QApplication a(argc, argv);

	LoginDialog dlg;
	if (dlg.exec() == QDialog::Accepted){
		ManageSystem w;
		w.showMaximized();
		a.exec();
	}
	return 0;
}
