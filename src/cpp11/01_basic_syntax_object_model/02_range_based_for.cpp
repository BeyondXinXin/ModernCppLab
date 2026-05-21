#include "02_range_based_for.h"

#include <iostream>
#include <string>
#include <vector>

namespace cpp11::lesson01 {

// ==============================================================
// 2. range-based for
// 解决：下标遍历、迭代器遍历样板代码太多，容易写错边界。
// ==============================================================

void demo_range_based_for()
{
    std::cout << "\n[range-based for]\n";

    std::vector<int> values = { 1, 2, 3, 4, 5 };

    std::cout << "read values: ";
    for (int value : values) {
        std::cout << value << " ";
    }
    std::cout << "\n";

    for (int& value : values) {
        value *= 10;
    }

    std::cout << "modified values: ";
    for (int value : values) {
        std::cout << value << " ";
    }
    std::cout << "\n";

    std::vector<std::string> names { "Alice", "Bob", "Charlie" };
    std::cout << "names: ";
    for (const std::string& name : names) {
        std::cout << name << " ";
    }
    std::cout << "\n";
}

} // namespace cpp11::lesson01
