#include <iostream>

#include "01_nullptr.h"
#include "02_range_based_for.h"
#include "03_enum_class.h"
#include "04_override_final.h"
#include "05_default_delete.h"
#include "06_delegating_constructor.h"
#include "07_inheriting_constructor.h"
#include "08_list_initialization.h"
#include "09_noexcept.h"

int main()
{
    std::cout << "C++11 01 Basic Syntax and Object Model\n";

    cpp11::lesson01::demo_nullptr();
    cpp11::lesson01::demo_range_based_for();
    cpp11::lesson01::demo_enum_class();
    cpp11::lesson01::demo_override_final();
    cpp11::lesson01::demo_default_delete();
    cpp11::lesson01::demo_delegating_constructor();
    cpp11::lesson01::demo_inheriting_constructor();
    cpp11::lesson01::demo_list_initialization();
    cpp11::lesson01::demo_noexcept();

    return 0;
}
