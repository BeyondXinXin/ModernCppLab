#include "08_list_initialization.h"

#include <iostream>
#include <string>
#include <vector>

namespace cpp11::lesson01 {

// ============================================================
// 8. 列表初始化
// 解决：初始化写法统一，并且能阻止窄化转换。
// ============================================================

struct Pose2D
{
    double x;
    double y;
    double angle;
};

void demo_list_initialization()
{
    std::cout << "\n[list initialization]\n";

    int value { 42 };
    std::string text { "Hello, C++11!" };
    std::vector<int> numbers { 1, 2, 3, 4, 5 };

    Pose2D pose { 10.0, 20.0, 90.0 };

    std::cout << "value: " << value << '\n';
    std::cout << "text: " << text << '\n';

    std::cout << "numbers: ";
    for (const int number : numbers) {
        std::cout << number << ' ';
    }
    std::cout << '\n';

    std::cout << "pose: x=" << pose.x
              << ", y=" << pose.y
              << ", angle=" << pose.angle << '\n';
}

} // namespace cpp11::lesson01
