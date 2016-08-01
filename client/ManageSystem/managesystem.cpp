#include <QPair>
#include <QList>
#include "managesystem.h"
#include "MenuItem.h"
#include "Const.h"
#include "UserCheckWidget.h"
#include "UserCreateWidget.h"
#include "InstrumentWidget.h"
#include "HardwareWidget.h"
#include "SoftwareWidget.h"
#include "SystemMgr.h"

ManageSystem::ManageSystem(QWidget *parent)
	: QMainWindow(parent), m_pCurrentWidget(NULL)
{
	Qt::WindowFlags flag = windowFlags();
	setWindowFlags(flag | Qt::FramelessWindowHint);
	ui.setupUi(this);
	connect(ui.exitButton, SIGNAL(clicked()), this, SLOT(OnExit()));

	init();
}

ManageSystem::~ManageSystem()
{

}

void ManageSystem::init()
{
	QMap<QString, QList<QPair<QString, int>>> m_mapItem;
	QList<QPair<QString, QList<QPair<QString, int>>>> listItem;
	if (SystemMgr::GetInstance()->GetCurrentUser()->HasInstrumentPrivilege())
		listItem.append(QPair < QString, QList<QPair<QString, int>>>(INSTRUMENTITEM,
			QList<QPair<QString, int>>()
			<< QPair<QString, int>(INSTRUMENTMODELSUBITEM, INSTRUMENTMODELVALUE)
			<< QPair<QString, int>(INSTRUMENTHARDWARESUBITEM, INSTRUMENTHARDWAREVALUE)
			<< QPair<QString, int>(INSTRUMENTSOFTWARESUBITEM, INSTRUMENTSOFTWAREVALUE)
			));

	if (SystemMgr::GetInstance()->GetCurrentUser()->HasInstrumentProductionPrivilege())
		listItem.append(QPair < QString, QList<QPair<QString, int>>>(INSTRUMENTPRODUCTIONITEM,
			QList<QPair<QString, int>>()
			));
	if (SystemMgr::GetInstance()->GetCurrentUser()->HasReagentPrivilege())
		listItem.append(QPair < QString, QList<QPair<QString, int>>>(REAGENTITEM,
			QList<QPair<QString, int>>()
			));
	if (SystemMgr::GetInstance()->GetCurrentUser()->HasReagentProductionPrivilege())
		listItem.append(QPair < QString, QList<QPair<QString, int>>>(REAGENTPRODUCTIONITEM,
			QList<QPair<QString, int>>()
			));
	if (SystemMgr::GetInstance()->GetCurrentUser()->HasHospitalPrivilege())
		listItem.append(QPair < QString, QList<QPair<QString, int>>>(HOSPITALITEM,
			QList<QPair<QString, int>>()
			));

	if (SystemMgr::GetInstance()->GetCurrentUser()->HasAccountPrivilege())
		listItem.append(QPair < QString, QList<QPair<QString, int>>>(ACCOUNTITEM,
			QList<QPair<QString, int>>()
			<< QPair<QString, int>(ACCOUNTCHECKSUBITEM, ACCOUNTCHECKVALUE)
			<< QPair<QString, int>(ACCOUNTCREATESUBITEM, ACCOUNTCREATEVALUE)
			));

	for (auto it = listItem.begin(); it != listItem.end(); ++it) {
		MenuItem* item = new MenuItem(this);
		item->SetItemText((*it).first);
		for (auto listIt = (*it).second.begin(); listIt != (*it).second.end(); ++listIt) {
			item->AddSubItem((*listIt).first, (*listIt).second);
		}
		connect(item, SIGNAL(itemClicked(int)), this, SLOT(OnShowWidget(int)));
		ui.verticalLayout->addWidget(item);
		item->show();
	}

	ui.verticalLayout->addItem(new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding));
}

void ManageSystem::OnShowWidget(const int nItemValue)
{
	if (m_pCurrentWidget)
	{
		m_pCurrentWidget->setVisible(false);
	}

	if (m_mapWidget.contains(nItemValue))
	{
		QWidget* pWidget = m_mapWidget[nItemValue];
		if (pWidget)
		{
			pWidget->setVisible(true);
			m_pCurrentWidget = pWidget;
			return;
		}
	}

	//new widget
	QWidget* pWidget = NULL;
	switch (nItemValue)
	{
	case INSTRUMENTMODELVALUE:
		pWidget = new InstrumentWidget(this);
		break;
	case INSTRUMENTHARDWAREVALUE:
		pWidget = new HardwareWidget(this);
		break;
	case INSTRUMENTSOFTWAREVALUE:
		pWidget = new SoftwareWidget(this);
		break;
	case ACCOUNTCHECKVALUE:
		pWidget = new UserCheckWidget(this);
		break;
	case ACCOUNTCREATEVALUE:
		pWidget = new UserCreateWidget(this);
		break;
	default:
		if (m_pCurrentWidget)
			m_pCurrentWidget->setVisible(true);
		return;
	}

	ui.mainHorizontalLayout->addWidget(pWidget);
	pWidget->setVisible(true);
	m_pCurrentWidget = pWidget;
	m_mapWidget[nItemValue] = pWidget;
}

void ManageSystem::OnExit()
{
	close();
}