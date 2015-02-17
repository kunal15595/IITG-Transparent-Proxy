#ifndef ALLPROXY_H
#define ALLPROXY_H

#include <QMainWindow>
#include <QDir>
#include <QFileDialog>
#include <QFileSystemModel>
#include <QString>
#include <QToolBox>

#include "constants.h"

namespace Ui {
class AllProxy;
}

class AllProxy : public QMainWindow
{
    Q_OBJECT

public:
    explicit AllProxy(QWidget *parent = 0);
    ~AllProxy();

private slots:
    void on_in_button_browse_clicked();

    void on_in_text_proxy_server_textChanged(const QString &arg1);

    void on_in_text_proxy_username_textChanged(const QString &arg1);

    void on_in_text_proxy_gateway_textChanged(const QString &arg1);

    void on_in_text_proxy_port_textChanged(const QString &arg1);

    void on_in_text_proxy_password_textChanged(const QString &arg1);

    void on_in_button_save_proxy_clicked();

    void on_in_button_save_vpn_clicked();

    void on_link_proxy_clicked();

    void on_link_vpn_clicked();

    void on_link_tproxy_clicked();

private:
    Ui::AllProxy *ui;
    QToolBox *box;
    QFileSystemModel *dirmodel;
    QFileSystemModel *filemodel;
    QString module_name,project_path;
    QStringList files_list;
    QString project_config_file_name;
    void load_configuration();

    void display_error(QString error);
};

#endif // ALLPROXY_H
