#include <iostream>
#include <vector>

namespace cpp11::lesson01 {

// ============================================================
// 1. nullptr
// 解决：NULL / 0 既能表示整数，又能表示空指针，语义不清。
// ============================================================

void print_pointer(int * p)
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
    int * p1 = &value;
    int * p2 = nullptr;

    print_pointer(p1);
    print_pointer(p2);

    // 推荐：
    // int* p = nullptr;
    //
    // 不推荐：
    // int* p = NULL;
    // int* p = 0;
}

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

    for (int & value : values) {
        value *= 10;
    }

    std::cout << "modified values: ";
    for (int value : values) {
        std::cout << value << " ";
    }
    std::cout << "\n";

    std::vector<std::string> names { "Alice", "Bob", "Charlie" };
    std::cout << "names: ";
    for (const std::string & name : names) {
        std::cout << name << " ";
    }
    std::cout << "\n";
}

void demo_enum_class()
{
}

void demo_override_final()
{
}

void demo_default_delete()
{
}

void demo_delegating_constructor()
{
}

void demo_inheriting_constructor()
{
}

void demo_list_initialization()
{
}

void demo_noexcept()
{
}

} // namespace cpp11::lesson01

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
