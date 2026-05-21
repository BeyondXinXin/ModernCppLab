#include "03_enum_class.h"

#include <iostream>

namespace cpp11::lesson01 {

// ==============================================================
// 3. enum class
// 解决：enum 定义的名字会污染全局作用域，并且可以隐式转 int。
// ==============================================================

enum class State
{
    Idle = 11,
    Moving,
    Error
};

const char* to_string(State state)
{
    switch (state) {
    case State::Idle: {
        return "Idle";
    }
    case State::Moving: {
        return "Moving";
    }
    case State::Error: {
        return "Error";
    }
    }

    return "Unknown";
}

void demo_enum_class()
{
    std::cout << "\n[enum class]\n";

    State state = State::Moving;
    std::cout << "state: " << to_string(state) << "\n";

    // int value = state; // 错误：enum class 不会隐式转 int
    int value = static_cast<int>(state);
    std::cout << "state int value: " << value << "\n";
}

} // namespace cpp11::lesson01
