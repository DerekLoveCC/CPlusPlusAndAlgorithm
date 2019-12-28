#include "SEHTester.h"



SEHTester::SEHTester()
{
}


SEHTester::~SEHTester()
{
}

void SEHTester::Test() {
	int i;  cin >> i;
	try {
		if (i < 0) throw i;
		if (i > 0) throw "hello";
		cout << "i = " << i << endl;
	}
	catch (int) {
		cout << "it is integer" << endl;
	}
	catch (const char*) {
		cout << "it is char array" << endl;
	}

	cout << "the end of program" << endl;
}