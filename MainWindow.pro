#-------------------------------------------------
#
# Project created by QtCreator 2020-11-09T15:29:38
#
#-------------------------------------------------

QT       += core gui


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = picture
TEMPLATE = app



SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS  += \
    mainwindow.h
FORMS    += mainwindow.ui

INCLUDEPATH += E:\opencv-built\install\include

LIBS += E:\opencv-built\lib\libopencv_*.a


RESOURCES += \
    myimage.qrc

RC_ICONS = picture.ico

TRANSLATIONS += en_tr.ts zh_tr.ts

DISTFILES += \
    en_tr.qm \
    zh_tr.qm \
    myico.ico \
    en_tr.ts \
    zh_tr.ts \
    images/fyf.png \
    images/1.png \
    images/center.png \
    images/images.png \
    images/images11.png \
    images/left.png \
    images/name1.png \
    images/right.png \
    images/signed_images.png \
    opencv_ffmpeg2410_64.dll \
    picture.ico \
    images/huawei.mp4 \
    en_tr.qm \
    zh_tr.qm \
    opencv_ffmpeg2410.dll \
    opencv_ffmpeg2410_64.dll \
    images/1.bmp \
    images/filenew.bmp \
    images/fyf.bmp \
    images/fyf1.bmp \
    images/loading.gif \
    images/111.jpg \
    images/1111.jpg \
    images/bg.jpg \
    images/bg1.jpg \
    images/bg2.jpg \
    images/bg3.jpg \
    images/1.png \
    images/1111.png \
    images/about.png \
    images/background.png \
    images/bianyuan.png \
    images/center.png \
    images/cool-background1.png \
    images/filenew.png \
    images/fileopen.png \
    images/filesave.png \
    images/filesaveas.png \
    images/find.png \
    images/fuhe.png \
    images/gamma.png \
    images/gray.png \
    images/help.png \
    images/images.png \
    images/images11.png \
    images/junzhi.png \
    images/left.png \
    images/name1.png \
    images/next.png \
    images/picture.png \
    images/prev.png \
    images/right.png \
    images/save.png \
    images/signed_images.png \
    images/start.png \
    images/stop.png \
    images/video.png \
    images/zh-en.png \
    images/zoom-in.png \
    myico.ico \
    picture.ico \
    en_tr.ts \
    zh_tr.ts

SUBDIRS += \
    MainWindow.pro
