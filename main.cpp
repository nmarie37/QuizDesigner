#include "stdafx.h"
#include "datastore.h"
#include "quizdesigner.h"
#include <QtWidgets/QApplication>
#include <QDebug>
#include <iostream>

//datastore d;
//extern datastore d;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QuizDesigner w;
    w.show();

 
    //qDebug("name d is: %s", d.name);
    //std::cout << "name1 d is: " << d.names[0] << "\n";
 
    
    return a.exec();

}
