TEMPLATE = lib
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt
DEFINES += BASE_EXPORTS

INCLUDEPATH += Include

HEADERS += \
    Include/Decl.h \
    Include/Defines.h \
    Include/String.h

SOURCES += \
