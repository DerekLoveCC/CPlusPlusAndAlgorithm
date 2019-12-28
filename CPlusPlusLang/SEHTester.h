#pragma once
#include <iostream>
using namespace std;
//Structure Exception Handle test class
class SEHTester
{
public:
    SEHTester();
    ~SEHTester();
    void Test();
    void TestCustomizedExceptionClass();
    void TestSpecifyExceptionTypes() noexcept;
    void TestThrowExceptionInCtor();
};

