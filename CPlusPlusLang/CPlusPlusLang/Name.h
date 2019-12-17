#pragma once
#include <iostream>
#include <string.h>
using namespace std;

class Name
{
private:
	char* pname;
	int size;

public:
	Name(const char* pn);
	~Name();
};

