#include "stdafx.h"
#include "quizdesigner.h"
#include "adddialog.h"

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
        QString name = dialog.nameEdit->text();
       // QString numQuestions = dialog.numQuestEdit->text();

        if (!name.isEmpty()) {
            QListWidgetItem* item = new QListWidgetItem(name, ui.quizList);
            //item->setData(Qt::UserRole, numQuestions);
            //ui.quizList->setCurrentItem(item);
        }
    }
}
