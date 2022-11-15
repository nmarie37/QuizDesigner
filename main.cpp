#include "stdafx.h"
#include "quizdesignerlatest.h"
#include <QtWidgets/QApplication>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //IntroDialog t;
    //t.activateWindow();
    QuizDesignerLatest w;
    w.show();

    return a.exec();
}
