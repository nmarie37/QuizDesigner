#pragma once
#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

class datastore {
private:
//	struct quiz
	//{	
		string name;
		vector<string> questions;
	//}; 
	//struct quiz Quiz;
	//{
	//	string name;
//		vector<string> questions;
	//};

	
public:
	string getName();
	void setName(string name);
	void setQuestion(string quest);
	string getQuestion(int i);

	datastore();
	~datastore();
};