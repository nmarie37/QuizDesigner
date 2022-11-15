#pragma once

#include <QDialog>
#include "ui_addquestions.h"

class AddQuestions : public QDialog, public Ui::AddQuestionsClass
{
	Q_OBJECT

public:
	AddQuestions(QWidget *parent = nullptr);
	~AddQuestions();

private:
	 
};
