#include "unistd.h"
#include "mainwindow.h"
#include <QApplication>
#include <QSplashScreen>
#include <QLabel>
#include <QMovie>
#include <QTranslator>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTranslator translator;
    translator.load(NULL);
    a.installTranslator(&translator);
    QPixmap pixmap(":/myImage/images/loading.gif");
        QSplashScreen splash(pixmap);
        QLabel label(&splash);
        QMovie mv(":/myImage/images/loading.gif");
        label.setMovie(&mv);
        mv.start();
        splash.show();
        splash.setCursor(Qt::BlankCursor);
        for(int i=0; i<5000; i+=mv.speed())
        {
            QCoreApplication::processEvents();
            usleep(500*static_cast<useconds_t>(mv.speed()));
        }
        MainWindow w;
        w.setWindowTitle(QObject::tr("图像视频处理工具"));
        w.show();
        splash.finish(&w);
    return a.exec();
}
