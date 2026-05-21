#include <iostream>

#include "01_unique_ptr.h"
#include "02_shared_ptr.h"
#include "03_weak_ptr.h"
#include "04_rvalue_reference.h"
#include "05_move_semantics.h"
#include "06_std_move.h"
#include "07_std_forward.h"

int main()
{
    std::cout << "C++11 03 Resource Management and Value Semantics\n";

    cpp11::lesson03::demo_unique_ptr();
    cpp11::lesson03::demo_shared_ptr();
    cpp11::lesson03::demo_weak_ptr();
    cpp11::lesson03::demo_rvalue_reference();
    cpp11::lesson03::demo_move_semantics();
    cpp11::lesson03::demo_std_move();
    cpp11::lesson03::demo_std_forward();

    return 0;
}
