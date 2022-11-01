#include "stdafx.h"
#include "quizdesigner.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QuizDesigner w;
    w.show();
    return a.exec();
}
