#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    // 初始化模块
    fileSender = new TcpFileSender(this);
    fileServer = new TcpFileServer(this);

    // 创建 Tab Widget
    tabWidget = new QTabWidget(this);
    tabWidget->addTab(fileSender, "發送文件");
    tabWidget->addTab(fileServer, "接收文件");

    // 设置中心窗口
    setCentralWidget(tabWidget);

    // 设置窗口标题
    setWindowTitle("50915133");
}

MainWindow::~MainWindow()
{
    // Qt 的父子关系会自动管理内存，因此不需要显式删除
}
