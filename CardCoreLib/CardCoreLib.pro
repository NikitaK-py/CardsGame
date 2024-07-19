QT -= gui

TEMPLATE = lib
DEFINES += CARDCORELIB_LIBRARY

CONFIG += c++17

SOURCES += \
    src/Card.cpp \
    src/Deck.cpp


HEADERS += \
    src/Card.h \
    src/Consts.h \
    src/Deck.h

unix {
    target.path = /usr/lib
}
!isEmpty(target.path):
INSTALLS += target
