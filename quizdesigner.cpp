#include "stdafx.h"
#include "quizdesigner.h"
#include "datastore.h"
#include "adddialog.h"
#include "addquestions.h"
#include <iostream>
//#include <vector>
#include <QDebug>

using namespace std; 

//extern datastore d;
datastore d;

static int quizIdx = 0;
static int numQuestions = 0;

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
        //int numQuestions = 0;
        QString name = dialog.nameEdit->text();
        string name_s = name.toLocal8Bit().constData();
        QString qinput = dialog.lineEdit->text();
        string qinput_s = qinput.toLocal8Bit().constData();
        int qinput_i = stoi(qinput_s);
        //cout << "Name of quiz!!: " << name_s << endl;
        //qDebug() << "Name of quiz: " << name << '\n';
       // QuizDesigner::on_addQuestButton_clicked();
        d.setName(name_s);
        cout << "quiz name is: " << d.getName() << "\n";
        //i++;
        //qDebug("name d is: %s", d.name);
        //dialog.numQuestionsLabel->setNum(numQuestions);
        //dialog.exec();

        while (numQuestions < qinput_i) {
            QuizDesigner::on_addQuestButton_clicked();
            }

        //if (!name.isEmpty()) {
        //    QListWidgetItem* item = new QListWidgetItem(name, ui.quizList);
            //item->setData(Qt::UserRole, numQuestions);
            //ui.quizList->setCurrentItem(item);
       // }

        cout << "Number of questions entered by user: " << qinput_s << "\n";
       // QString numQuestions = dialog.numQuestEdit->text();
        
        //int cb = dialog.numQuestcomboBox->currentIndex();
        //qDebug() << "Number of questions: " << cb;
        //cout << cb << endl;
        
        

    }

    //QuizDesigner::on_addQuestButton_clicked();
    quizIdx++;

}

void QuizDesigner::on_addQuestButton_clicked() {
    AddQuestions dialog2(this);
    AddDialog dialog3(this);
    
    if (dialog2.exec())
    {
        QString quest = dialog2.qlineEdit->text();
        string quest_s = quest.toLocal8Bit().constData();
        d.setQuestion(quest_s);
        cout << "Entered question is: " << d.getQuestion(0) << "\n";

        if (dialog3.exec()) {

            if (!quest.isEmpty()) {
                QListWidgetItem* item = new QListWidgetItem(quest, dialog3.questList);
                //AddDialog curItem = dialog3
                item->setData(Qt::UserRole, quest);
                dialog3.questList->setCurrentItem(item);

                //dialog3.questList->row(item);
            }
        }
    }


  //  AddDialog dialog3(this);
    
  //  if (dialog3.exec()) {
  //      QString quest = dialog3.questList->text();
 //   }
    
    
    //d.setQuestion = dialog2.questLi
    //QListWidgetItem* curItem = dialog3.
    numQuestions++;
}




//void AddressBook::on_addButton_clicked()
//{
//    AddDialog dialog(this);
//
//    if (dialog.exec())
//    {
//        QString name = dialog.nameEdit->text();
//        QString email = dialog.emailEdit->text();
//
//        if (!name.isEmpty() && !email.isEmpty())
//        {
//            QListWidgetItem* item = new QListWidgetItem(name, ui.addressList);
//            item->setData(Qt::UserRole, email);
//            ui.addressList->setCurrentItem(item);
//        }
//    }
//}






void QuizDesigner::on_saveButton_clicked(int numQuest) {
    numQuest++;
}

/*void QuizDesigner::on_quizList_currentItemChanged() {
    QListWidgetItem* curItem = ui.quizList->currentItem();
    if (curItem) {
        ui.nameLabel->setText("Name: " + curItem->text());
    }
    else {
        ui.nameLabel->setText("<No item select>");
    }

} */

