#pragma once

#include <QtWidgets/QWidget>
#include "ui_quizdesigner.h"


class QuizDesigner : public QWidget
{
    Q_OBJECT

private slots:
    void on_createButton_clicked();
    void on_addQuestButton_clicked();
    void on_saveButton_clicked(int numQuest);
    void on_quizList_currentItemChanged();
    

public:
    QuizDesigner(QWidget *parent = nullptr);
    ~QuizDesigner();

private:
    Ui::QuizDesignerClass ui;
};
