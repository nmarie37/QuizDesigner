#include "stdafx.h"
#include "datastore.h"
#include <iostream>

using namespace std;

datastore::datastore() {
	//struct quiz {
		string name = "";
		vector<string> questions;
	//};

}

datastore::~datastore() {};

string datastore::getName() {
	return name;
}

void datastore::setName(string name_s) {
	name = name_s;
	//quizzes.assign(i, name);
}

void datastore::setQuestion(string quest) {
	questions.push_back(quest);
}

string datastore::getQuestion(int i) {
	return questions[i];
}