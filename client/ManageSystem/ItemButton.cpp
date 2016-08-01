#include "ItemButton.h"

ItemButton::ItemButton(QWidget *parent)
	: QPushButton(parent), m_nItemValue(-1)
{
	connect(this, SIGNAL(clicked()), this, SLOT(OnItemClicked()));
}

ItemButton::~ItemButton()
{

}

void ItemButton::setItem(const QString& strText, const int nValue)
{
	setText(strText);
	m_nItemValue = nValue;
}

void ItemButton::OnItemClicked()
{
	emit itemClicked(m_nItemValue);
}
