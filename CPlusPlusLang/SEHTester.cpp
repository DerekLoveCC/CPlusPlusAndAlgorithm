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
        cout << "NO EXCEPTION i = " << i << endl;
    }
    catch (long l) {
        cout << "it is long:" << l << endl;
    }
    catch (int e) {
        cout << "it is integer:" << e << endl;
    }
    catch (const char* s) {
        cout << "it is char array:" << s << endl;
    }

    cout << "the end of program" << endl;
}