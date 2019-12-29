#include "TemplateTest.h"


template<class T>
TemplateTest<T>::TemplateTest()
{
}


template<class T>
TemplateTest<T>::~TemplateTest()
{
}

template<class T>
void TemplateTest<T>::Swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}