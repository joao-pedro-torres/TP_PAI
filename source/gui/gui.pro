QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17
QMAKE_CXXFLAGS += -std=c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    csv_utils.cpp \
    effnetwindow.cpp \
    main.cpp \
    gui.cpp \
    nn_utils.cpp \
    opencv_utils.cpp \
    xgboostwindow.cpp

HEADERS += \
    effnetwindow.h \
    gui.h \
    xgboostwindow.h

FORMS += \
    effnetwindow.ui \
    gui.ui \
    xgboostwindow.ui

TRANSLATIONS += \
    gui_pt_BR.ts

CONFIG += lrelease
CONFIG += embed_translations
CONFIG += link_pkgconf

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

INCLUDEPATH += /usr/include/opencv4

LIBS += /usr/lib/libopencv_calib3d.so
LIBS += /usr/lib/libopencv_core.so
LIBS += /usr/lib/libopencv_features2d.so
LIBS += /usr/lib/libopencv_highgui.so
LIBS += /usr/lib/libopencv_imgcodecs.so
LIBS += /usr/lib/libopencv_imgproc.so

INCLUDEPATH += /usr/include/onnxruntime
# LIBS += /usr/lib/libonnxruntime_providers_cuda.so
# LIBS += /usr/lib/libonnxruntime_providers_dnnl.so
# LIBS += /usr/lib/libonnxruntime_providers_shared.so
LIBS += /usr/lib/libonnxruntime.so
# LIBS += /usr/lib/libonnxruntime.so.1.18.0

RESOURCES += \
    resources.qrc
