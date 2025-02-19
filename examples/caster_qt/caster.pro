TARGET = caster_qt
TEMPLATE = app
QT += core widgets gui 3dextras
CONFIG += c++17 precompile_header
DEFINES += QT_DEPRECATED_WARNINGS
PRECOMPILED_HEADER = pch.h

# ensure to unpack the appropriate libs from the zip file into this folder
LIBPATH = $$PWD/../../lib
INCLUDEPATH += $$PWD/../../include
LIBS += -L$$LIBPATH/ -lcast

SOURCES += main.cpp caster.cpp display.cpp 3d.cpp
HEADERS += caster.h display.h 3d.h
FORMS += caster.ui

RESOURCES += \
    caster.qrc
