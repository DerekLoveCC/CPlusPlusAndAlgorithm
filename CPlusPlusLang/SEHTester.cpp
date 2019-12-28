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

void SEHTester::TestSpecifyExceptionTypes() noexcept {
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
        throw;
        cout << "it is integer:" << e << endl;
    }
    catch (const char* s) {
        cout << "it is char array:" << s << endl;
    }

    cout << "the end of program" << endl;
}

class DevidedByZero { };

void SEHTester::TestCustomizedExceptionClass() {
    double a, b; cin >> a >> b;
    try
    {
        if (b == 0)  throw DevidedByZero();
        cout << a / b << endl;
    }
    catch (DevidedByZero&) {
        cout << "Devided by zero" << endl;
    }
}

class ThrowExceptionInCtor {
public:
    ThrowExceptionInCtor()
    {
        throw 0;
    }
    ~ThrowExceptionInCtor() {
        cout << "In ThrowExceptionInCtor deconstructor" << endl;
    }
};

void SEHTester::TestThrowExceptionInCtor() {
    try
    {
        ThrowExceptionInCtor t;
    }
    catch (int)
    {
        cout << "Catch int exception" << endl;
    }
}