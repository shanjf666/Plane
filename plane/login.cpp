#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
}

Login::~Login()
{
    delete ui;
}

void Login::on_loginButton_clicked()
{
    account = ui->usernameEdit->text();
    QString password = ui->passwordEdit->text();
    if(!ui->agreement->isChecked())
    {
        QMessageBox::warning(this, "登录失败", "请同意隐私协议");
        return;
    }
    // QSqlDatabase dbcon;
    // dbcon = QSqlDatabase::addDatabase("QODBC");  // ODBC 驱动
    // dbcon.setHostName("127.0.0.1");                // MySQL 服务器ip地址，本机
    // dbcon.setPort(3306);                          // 端口号，默认
    // dbcon.setDatabaseName("persondb");           // ODBC 数据源名称
    // bool ok = dbcon.open();
    // if(!ok)
    //     qDebug() << "Error,  persondatabase 数据库文件打开失败！";
    // else
    //     qDebug() << "Sucess, persondatabase 数据库文件打开成功！";
    if(account[0]=='#')//管理员
    {
        QString sql = "SELECT nickname FROM users WHERE account = '" + account + "' AND password = '" + password + "'";
        QSqlQuery sqlquery;
        // sqlquery.prepare("SELECT * FROM users WHERE account = :account AND password = :password");
        // sqlquery.bindValue(":account", account);
        // sqlquery.bindValue(":password", password);

        if (sqlquery.exec(sql)) {
            if (sqlquery.next()) {
                QString nickname = sqlquery.value(0).toString();
                managerSearchFlight* manager = new managerSearchFlight(nickname); // 管理员登录成功
                manager->show();
                emit exit_clicked();
            } else {
                QMessageBox::warning(this, "登录失败", "用户名或密码错误！");
            }
        } else {
            qDebug() << "Error executing query: " << sqlquery.lastError().text();
        }
    }
    else//用户
    {
        QString sql = "SELECT * FROM users WHERE account = '" + account + "' AND password = '" + password + "'";
        QSqlQuery sqlquery;
        // sqlquery.prepare("SELECT * FROM users WHERE account = :account AND password = :password");
        // sqlquery.bindValue(":account", account);
        // sqlquery.bindValue(":password", password);

        if (sqlquery.exec(sql)) {
            if (sqlquery.next()) {
                emit loginSuccessful();  // 触发登录成功信号
            } else {
                QMessageBox::warning(this, "登录失败", "用户名或密码错误！");
            }
        } else {
            qDebug() << "Error executing query: " << sqlquery.lastError().text();
        }
    }

    // dbcon.close();
}


void Login::on_exitButton_clicked()
{
    emit exit_clicked();
}


void Login::on_registerButton_clicked()
{
    emit Register();
}


// void Login::on_commandLinkButton_clicked()
// {
//     qDebug()<<"已点击链接按钮";
//     QDesktopServices::openUrl(QUrl("https://www.baidu.com"));
// }

void Login::on_privacyButton_clicked()
{
    QDialog *privacyDialog = new QDialog(this);
    privacyDialog->setWindowTitle("隐私政策");

    QVBoxLayout *dialogLayout = new QVBoxLayout();

    QTextEdit *privacyTextEdit = new QTextEdit(privacyDialog);
    privacyTextEdit->setText(R"(
        隐私政策

生效日期： 2024年11月28日

欢迎您使用我们的航空信息系统。本隐私政策旨在帮助您了解我们如何收集、使用、保护和共享您的个人信息。请在使用我们的系统前仔细阅读本隐私政策。

1. 我们收集的个人信息
我们可能会收集以下类型的个人信息：

个人识别信息： 包括您的姓名、身份证号码、护照号码、出生日期、性别等。
联系方式： 包括您的电话号码、电子邮件地址、通讯地址等。
航班信息： 包括您预定的航班号、航程、航班日期、座位偏好等。
支付信息： 包括您用于支付的信用卡或其他支付方式信息。
设备信息： 包括您使用的设备类型、操作系统、IP地址、浏览器类型等。
位置数据： 如果您启用了设备位置服务，我们可能会收集与您当前位置相关的数据。
2. 我们如何使用您的个人信息
我们收集您的个人信息主要用于以下目的：

航班预订与管理： 处理您的航班预定、改签、退票等相关事宜。
用户支持与服务： 提供客户服务，处理您的问题、投诉及其他请求。
支付与结算： 处理与您的支付相关的事务，如机票费用、附加服务费用等。
个性化体验： 基于您的偏好和历史行为提供个性化的航班推荐和服务。
法律与安全： 遵守适用法律法规的要求，防范欺诈活动，保护您的个人信息安全。
市场推广： 如果您同意，我们可能会通过电子邮件、短信等方式向您发送航班促销信息或其他服务信息。
3. 我们如何保护您的个人信息
我们采取一系列合理的技术和管理措施来保护您的个人信息免受未经授权的访问、披露、修改或销毁。包括：

使用加密技术保护您的支付信息和敏感数据。
定期进行安全审核和漏洞扫描，以识别潜在的安全风险。
仅允许授权员工访问您的个人信息，并要求他们遵守严格的保密义务。
4. 我们如何分享您的个人信息
我们不会将您的个人信息出售给第三方。我们可能会在以下情况下与第三方共享您的信息：

服务提供商： 为了提供和维护我们的航空信息系统服务，我们可能会与第三方服务提供商（如支付处理机构、航班信息提供商等）共享您的信息，但这些服务提供商只能根据我们的指示使用您的信息。
法律要求： 当法律要求或应政府部门的请求时，我们可能会披露您的个人信息。
业务转让： 如果我们的公司进行合并、收购或资产转让，您的个人信息可能作为转让资产的一部分被转移。
5. 您的权利与选择
根据适用的隐私法律，您可能拥有以下权利：

访问与更正： 您可以请求访问我们所持有的关于您的个人信息，并且可以要求我们更正任何不准确的信息。
删除： 在某些情况下，您可以请求删除我们持有的关于您的个人信息。
撤销同意： 如果我们是基于您的同意来处理您的信息，您可以随时撤销您的同意。
选择退出营销信息： 您可以选择退出接收我们的促销邮件或短信。
要行使您的这些权利，您可以通过以下联系方式与我们联系。

6. 儿童隐私保护
我们的航空信息系统并不面向13岁以下的儿童，我们不会故意收集儿童的个人信息。如果我们发现收集了13岁以下儿童的个人信息，我们将采取措施尽快删除相关数据。

7. 国际数据传输
如果您位于某些国家/地区，您的个人信息可能会被传输到其他国家/地区（例如，服务器可能位于不同的国家）。我们将确保在进行国际数据传输时，您的信息将按照本隐私政策进行保护，并符合适用的法律要求。

8. 隐私政策的更新
我们可能会不时更新本隐私政策，以反映我们的数据收集和使用实践的变化。我们会通过在本页面发布修订后的隐私政策来通知您。如果隐私政策的更新涉及到您的权利或义务的重大变化，我们会采取适当的措施向您进行特别通知。

9. 联系我们
如果您对本隐私政策有任何疑问、意见或请求，或者您希望行使您的权利，您可以通过以下方式联系我们：

电子邮件： privacy@airlinesystem.com
电话： +86 123 456 7890
地址： 北京市海淀区某某街道123号，航空信息系统公司
免责声明：
本隐私政策为模板示例，可能不完全适用于所有航空信息系统。在实际应用中，您可能需要根据具体业务需求、法规要求、地理位置等进一步修改、完善该隐私政策。
根据《个人信息保护法》《通用数据保护条例（GDPR）》等法律法规要求，隐私政策的内容应根据实际情况进行相应调整，并考虑具体的用户数据保护要求。
        )");
    privacyTextEdit->setReadOnly(true);  // 设置为只读，不能编辑

    QScrollArea *scrollArea = new QScrollArea();
    scrollArea->setWidget(privacyTextEdit);
    scrollArea->setWidgetResizable(true);

    QPushButton *closeButton = new QPushButton("关闭", privacyDialog);
    connect(closeButton, &QPushButton::clicked, privacyDialog, &QDialog::accept); // 点击关闭按钮关闭对话框

    dialogLayout->addWidget(scrollArea);
    dialogLayout->addWidget(closeButton);

    privacyDialog->setLayout(dialogLayout);
    privacyDialog->exec();  // 执行对话框
}


void Login::on_pushButton_clicked()
{
    emit forget_clicked();
}

