#pragma once
#include <QString>

static const QString APPNAME = QString::fromLocal8Bit("XX管理系统");
static const QString SUCCESS = QString::fromLocal8Bit("成功");
static const QString FAILED = QString::fromLocal8Bit("失败");
static const QString USERNAME = QString::fromLocal8Bit("用户账号");
static const QString PASSWORD = QString::fromLocal8Bit("密码");
static const QString LOGINWRONGUSERNAMEORPASSWORD = QString::fromLocal8Bit("登录失败：错误的用户名或密码！");

//仪器管理
static const QString INSTRUMENTITEM = QString::fromLocal8Bit("仪器研发管理");
static const QString INSTRUMENTMODELSUBITEM = QString::fromLocal8Bit("仪器型号管理");
static const QString INSTRUMENTHARDWARESUBITEM = QString::fromLocal8Bit("仪器硬件管理");
static const QString INSTRUMENTSOFTWARESUBITEM = QString::fromLocal8Bit("仪器软件管理");

static const int INSTRUMENTMODELVALUE = 1;
static const int INSTRUMENTHARDWAREVALUE = 2;
static const int INSTRUMENTSOFTWAREVALUE = 3;

//others
static const QString INSTRUMENTPRODUCTIONITEM = QString::fromLocal8Bit("仪器生产管理");
static const QString REAGENTITEM = QString::fromLocal8Bit("试剂研发管理");
static const QString REAGENTPRODUCTIONITEM = QString::fromLocal8Bit("试剂生产管理");
static const QString HOSPITALITEM = QString::fromLocal8Bit("医院管理");

//账号管理
static const QString ACCOUNTITEM = QString::fromLocal8Bit("账号管理");
static const QString ACCOUNTCHECKSUBITEM = QString::fromLocal8Bit("查看账号");
static const QString ACCOUNTCREATESUBITEM = QString::fromLocal8Bit("创建账号");

static const int ACCOUNTCHECKVALUE = 51;
static const int ACCOUNTCREATEVALUE = 52;

