#include "OperateWidget.h"

OperateWidget::OperateWidget(const int nId, QWidget *parent)
	: QWidget(parent), m_nItemId(nId)
{
	ui.setupUi(this);
	connect(ui.modifyButton, SIGNAL(clicked()), this, SLOT(OnModifyBtnClicked()));
	connect(ui.deleteButton, SIGNAL(clicked()), this, SLOT(OnDeleteBtnClicked()));
}

OperateWidget::~OperateWidget()
{

}

void OperateWidget::OnModifyBtnClicked()
{
	emit modifyItem(m_nItemId);
}

void OperateWidget::OnDeleteBtnClicked()
{
	emit deleteItem(m_nItemId);
}