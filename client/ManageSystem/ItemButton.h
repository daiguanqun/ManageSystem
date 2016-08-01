#ifndef ITEMBUTTON_H
#define ITEMBUTTON_H

#include <QPushButton>

class ItemButton : public QPushButton
{
	Q_OBJECT

public:
	ItemButton(QWidget *parent);
	~ItemButton();

	void setItem(const QString& strText, const int nValue);
signals:
	void itemClicked(int);
	private slots:
	void OnItemClicked();
private:
	int m_nItemValue;
};

#endif // ITEMBUTTON_H
