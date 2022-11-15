#include "stdafx.h"
#include "quizdesignerlatest.h"
#include "addquestdialog.h"

QuizDesignerLatest::QuizDesignerLatest(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}

QuizDesignerLatest::~QuizDesignerLatest()
{}


void QuizDesignerLatest::on_questButton_clicked() {
    AddQuestDialog dialog(this);
   
    if (dialog.exec()) {
        QString ques = dialog.quesLineEdit->text();

        if (!ques.isEmpty()) {
            QListWidgetItem* item = new QListWidgetItem("Question: " + ques, ui.qlistWidget); // enter question number from counter here, i.e. "Question 1:"
            item->setData(Qt::UserRole, ques);
            ui.qlistWidget->setCurrentItem(item);
        }
    }
}

void QuizDesignerLatest::on_qlistWidget_currentItemChanged() {
    QListWidgetItem* curItem = ui.qlistWidget->currentItem();

    if (curItem) {
        ui.label->setText(curItem->data(Qt::UserRole).toString());
    }
    else {
        ui.label->setText("<No question selected>");
    }
}

void QuizDesignerLatest::on_deleteButton_clicked() {
    QListWidgetItem* curItem = ui.qlistWidget->currentItem();

    if (curItem) {
        int row = ui.qlistWidget->row(curItem);
        ui.qlistWidget->takeItem(row);
        delete curItem;

        if (ui.qlistWidget->count() > 0) {
            ui.qlistWidget->setCurrentRow(0);
        }
        else {
            on_qlistWidget_currentItemChanged();
        }

    }
}