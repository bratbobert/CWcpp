#pragma once
#include "iostream"
using namespace std;

class Lines
{
private:
	string* array;
	int countString;
public:
	Lines();
	Lines(string str, char sep);
	void push_back(string str);
	int getCountString();
		string* getArray();
};


