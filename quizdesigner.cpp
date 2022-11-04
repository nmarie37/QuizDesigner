#include "stdafx.h"
#include "quizdesigner.h"
#include "adddialog.h"
#include "addquestions.h"
#include<iostream>
#include<QDebug>

using namespace std;


QuizDesigner::QuizDesigner(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
    
}

QuizDesigner::~QuizDesigner()
{}

void QuizDesigner::on_createButton_clicked() {
    AddDialog dialog(this);
    
    if (dialog.exec()) {
        int numQuestions = 0;
        QString name = dialog.nameEdit->text();
        string name_s = name.toLocal8Bit().constData();
        //cout << "Name of quiz!!: " << name_s << endl;
        qDebug() << "Name of quiz: " << name << '\n';
       // QuizDesigner::on_addQuestButton_clicked();
        
        dialog.numQuestLabel->setNum(numQuestions);
        //dialog.exec();

        if (!name.isEmpty()) {
            QListWidgetItem* item = new QListWidgetItem(name, ui.quizList);
            //item->setData(Qt::UserRole, numQuestions);
            //ui.quizList->setCurrentItem(item);
        }


       // QString numQuestions = dialog.numQuestEdit->text();
        
        //int cb = dialog.numQuestcomboBox->currentIndex();
        //qDebug() << "Number of questions: " << cb;
        //cout << cb << endl;
        
        

    }

    //QuizDesigner::on_addQuestButton_clicked();

}

void QuizDesigner::on_addQuestButton_clicked() {
    AddQuestions dialog2(this);
    dialog2.exec();
}

void QuizDesigner::on_saveButton_clicked(int numQuest) {
    numQuest++;
}

void QuizDesigner::on_quizList_currentItemChanged() {
    QListWidgetItem* curItem = ui.quizList->currentItem();
    if (curItem) {
        ui.nameLabel->setText("Name: " + curItem->text());
    }
    else {
        ui.nameLabel->setText("<No item select>");
    }

}



