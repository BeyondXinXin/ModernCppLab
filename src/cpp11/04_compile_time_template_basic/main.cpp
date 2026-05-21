#include <iostream>

#include "01_constexpr.h"
#include "02_static_assert.h"
#include "03_variadic_templates.h"
#include "04_type_traits.h"

int main()
{
    std::cout << "C++11 04 Compile-Time and Template Basics\n";

    cpp11::lesson04::demo_constexpr();
    cpp11::lesson04::demo_static_assert();
    cpp11::lesson04::demo_variadic_templates();
    cpp11::lesson04::demo_type_traits();

    return 0;
}
