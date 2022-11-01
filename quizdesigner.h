#pragma once

#include <QtWidgets/QWidget>
#include "ui_quizdesigner.h"

class QuizDesigner : public QWidget
{
    Q_OBJECT

private slots:
    void on_createButton_clicked();


public:
    QuizDesigner(QWidget *parent = nullptr);
    ~QuizDesigner();

private:
    Ui::QuizDesignerClass ui;
};
