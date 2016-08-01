#include "PrivilegeWidget.h"
#include "PrivilegeCode.h"

PrivilegeWidget::PrivilegeWidget(QWidget *parent)
	: QWidget(parent), m_nItemId(-1), m_nPrivilegeCode(0)
{
	ui.setupUi(this);
	connect(ui.instrumentCheckBox, SIGNAL(stateChanged(int)), this, SIGNAL(valueChanged()));
	connect(ui.instrumentProductionCheckBox, SIGNAL(stateChanged(int)), this, SIGNAL(valueChanged()));
	connect(ui.reagentCheckBox, SIGNAL(stateChanged(int)), this, SIGNAL(valueChanged()));
	connect(ui.reagentProductionCheckBox, SIGNAL(stateChanged(int)), this, SIGNAL(valueChanged()));
	connect(ui.hospitalCheckBox, SIGNAL(stateChanged(int)), this, SIGNAL(valueChanged()));
	connect(ui.accountCheckBox, SIGNAL(stateChanged(int)), this, SIGNAL(valueChanged()));
	init();
}

PrivilegeWidget::PrivilegeWidget(const int nId, const int nPrivilegeCode, QWidget *parent)
	: QWidget(parent), m_nItemId(nId), m_nPrivilegeCode(nPrivilegeCode)
{
	ui.setupUi(this);
	connect(ui.instrumentCheckBox, SIGNAL(stateChanged(int)), this, SIGNAL(valueChanged()));
	connect(ui.instrumentProductionCheckBox, SIGNAL(stateChanged(int)), this, SIGNAL(valueChanged()));
	connect(ui.reagentCheckBox, SIGNAL(stateChanged(int)), this, SIGNAL(valueChanged()));
	connect(ui.reagentProductionCheckBox, SIGNAL(stateChanged(int)), this, SIGNAL(valueChanged()));
	connect(ui.hospitalCheckBox, SIGNAL(stateChanged(int)), this, SIGNAL(valueChanged()));
	connect(ui.accountCheckBox, SIGNAL(stateChanged(int)), this, SIGNAL(valueChanged()));
	init();
}

PrivilegeWidget::~PrivilegeWidget()
{
}

void PrivilegeWidget::init()
{
	ui.instrumentCheckBox->setCheckState(m_nPrivilegeCode & INSTRUMENTCODE ? Qt::Checked : Qt::Unchecked);
	ui.instrumentProductionCheckBox->setCheckState(m_nPrivilegeCode & INSTRUMENTPRODUCTIONCODE ? Qt::Checked : Qt::Unchecked);
	ui.reagentCheckBox->setCheckState(m_nPrivilegeCode & REAGENTCODE ? Qt::Checked : Qt::Unchecked);
	ui.reagentProductionCheckBox->setCheckState(m_nPrivilegeCode & REAGENTPRODUCTIONCODE ? Qt::Checked : Qt::Unchecked);
	ui.hospitalCheckBox->setCheckState(m_nPrivilegeCode & HOSPITALCODE ? Qt::Checked : Qt::Unchecked);
	ui.accountCheckBox->setCheckState(m_nPrivilegeCode & ACCOUNTCODE ? Qt::Checked : Qt::Unchecked);
}

void PrivilegeWidget::SetAvailable(bool bAvailable)
{
	ui.instrumentCheckBox->setCheckable(false);
	ui.instrumentProductionCheckBox->setCheckable(false);
	ui.reagentCheckBox->setCheckable(false);
	ui.reagentProductionCheckBox->setCheckable(false);
	ui.hospitalCheckBox->setCheckable(false);
	ui.accountCheckBox->setCheckable(false);
}

int PrivilegeWidget::GetPrivilegeCode()
{
	int nPrivilegeCode = 0;

	if (ui.instrumentCheckBox->checkState() == Qt::Checked) {
		nPrivilegeCode = nPrivilegeCode | INSTRUMENTCODE;
	}

	if (ui.instrumentProductionCheckBox->checkState() == Qt::Checked) {
		nPrivilegeCode = nPrivilegeCode | INSTRUMENTPRODUCTIONCODE;
	}

	if (ui.reagentCheckBox->checkState() == Qt::Checked) {
		nPrivilegeCode = nPrivilegeCode | REAGENTCODE;
	}

	if (ui.reagentProductionCheckBox->checkState() == Qt::Checked) {
		nPrivilegeCode = nPrivilegeCode | REAGENTPRODUCTIONCODE;
	}

	if (ui.hospitalCheckBox->checkState() == Qt::Checked) {
		nPrivilegeCode = nPrivilegeCode | HOSPITALCODE;
	}

	if (ui.accountCheckBox->checkState() == Qt::Checked) {
		nPrivilegeCode = nPrivilegeCode | ACCOUNTCODE;
	}
	m_nPrivilegeCode = nPrivilegeCode;
	return m_nPrivilegeCode;
}
