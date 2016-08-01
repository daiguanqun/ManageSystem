#include "MenuItem.h"
#include "ItemButton.h"

MenuItem::MenuItem(QWidget *parent)
	: QWidget(parent), m_bSubItemShow(true),
	m_IconUp(QStringLiteral(":/ManageSystem/images/up.png")),
	m_IconDown(QStringLiteral(":/ManageSystem/images/down.png"))
{
	ui.setupUi(this);
	connect(ui.expandButton, SIGNAL(clicked()), this, SLOT(OnExpandButtonClicked()));
	ui.expandButton->setIcon(m_IconUp);
}

MenuItem::MenuItem(bool bSubItemShow, QWidget *parent)
	: QWidget(parent), m_bSubItemShow(bSubItemShow)
{
	ui.setupUi(this);
	connect(ui.expandButton, SIGNAL(clicked()), this, SLOT(OnExpandButtonClicked()));
	ui.subItemWidget->setVisible(m_bSubItemShow);
}

MenuItem::~MenuItem()
{

}

void MenuItem::SetItemText(const QString& strItemText)
{
	ui.expandButton->setText(strItemText);
}

void MenuItem::AddSubItem(const QString& strItemText, const int nItemValue)
{
	ItemButton *btnItem = new ItemButton(this);
	btnItem->setItem(strItemText, nItemValue);
	connect(btnItem, SIGNAL(itemClicked(int)), this, SIGNAL(itemClicked(int)));
	ui.verticalLayout_2->addWidget(btnItem);
}

void MenuItem::OnExpandButtonClicked()
{
	ui.subItemWidget->setVisible(!m_bSubItemShow);
	m_bSubItemShow = !m_bSubItemShow;

	if (m_bSubItemShow)
		ui.expandButton->setIcon(m_IconUp);
	else
		ui.expandButton->setIcon(m_IconDown);
}
