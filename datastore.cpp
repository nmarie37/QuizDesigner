#include "stdafx.h"
#include "datastore.h"
#include <iostream>

using namespace std;

datastore::datastore() {
	struct quiz {
		string name = "";
		vector<string> questions;
	};

}

datastore::~datastore() {};

string datastore::getName() {
	return Quiz.name;
}

void datastore::setName(string name) {
	Quiz.name = name;
	//quizzes.assign(i, name);
}
