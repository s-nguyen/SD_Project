QT += core
QT -= gui

CONFIG += c++11

TARGET = BetaFish
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += \
    main.c \
    LeptonSPI.c \
    TCP_Server.c

HEADERS += \
    LeptonSPI.h \
    TCP_Server.h
