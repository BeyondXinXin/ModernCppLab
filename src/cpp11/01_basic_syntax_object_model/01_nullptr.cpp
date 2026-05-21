#include "01_nullptr.h"

#include <iostream>

namespace cpp11::lesson01 {

// ============================================================
// 1. nullptr
// 解决：NULL / 0 既能表示整数，又能表示空指针，语义不清。
// ============================================================

void print_pointer(int* p)
{
    if (p == nullptr) {
        std::cout << "pointer is null\n";
    } else {
        std::cout << "pointer value: " << *p << "\n";
    }
}

void demo_nullptr()
{
    std::cout << "\n[nullptr]\n";

    int value = 10;
    int* p1 = &value;
    int* p2 = nullptr;

    print_pointer(p1);
    print_pointer(p2);

    // 推荐：
    // int* p = nullptr;
    //
    // 不推荐：
    // int* p = NULL;
    // int* p = 0;
}

} // namespace cpp11::lesson01
