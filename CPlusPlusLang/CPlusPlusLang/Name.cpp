#include "Name.h"



Name::Name(const char* pn) {
	pname = new char[strlen(pn) + 1];
	strcpy_s(pname, strlen(pn) + 1, pn);
}


Name::~Name()
{
	cout << "descontructor:" << pname << endl;
	delete[] pname;
}
