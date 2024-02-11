#pragma once
#include "Lines.h"
#include "iostream"
using namespace std;

class FileReader
{
public:
	static Lines read(string path);
};

