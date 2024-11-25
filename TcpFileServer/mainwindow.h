#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTabWidget>
#include "tcpfilesender.h"
#include "tcpfileserver.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QTabWidget *tabWidget;       // 用于切换发送和接收功能
    TcpFileSender *fileSender;   // 发送文件模块
    TcpFileServer *fileServer;   // 接收文件模块
};

#endif // MAINWINDOW_H
