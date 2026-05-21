#include <iostream>

#include "01_auto.h"
#include "02_decltype.h"
#include "03_using_alias.h"
#include "04_lambda.h"

int main()
{
    std::cout << "C++11 02 Type Deduction and Interface\n";

    cpp11::lesson02::demo_auto();
    cpp11::lesson02::demo_decltype();
    cpp11::lesson02::demo_using_alias();
    cpp11::lesson02::demo_lambda();

    return 0;
}
