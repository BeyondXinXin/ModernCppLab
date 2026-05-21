#include "09_noexcept.h"

#include <iostream>
#include <type_traits>

namespace cpp11::lesson01 {

// ============================================================
// 9. noexcept
// 解决：明确表达函数不会抛异常，便于优化，也便于容器选择移动操作。
// ============================================================

void safe_function() noexcept
{
    std::cout << "safe_function called\n";
}

void normal_function()
{
    std::cout << "normal_function called\n";
}

class MoveOnlyBuffer
{
public:
    MoveOnlyBuffer() = default;

    MoveOnlyBuffer(const MoveOnlyBuffer&) = delete;
    MoveOnlyBuffer& operator=(const MoveOnlyBuffer&) = delete;

    MoveOnlyBuffer(MoveOnlyBuffer&&) noexcept = default;
    MoveOnlyBuffer& operator=(MoveOnlyBuffer&&) noexcept = default;
};

void demo_noexcept()
{
    std::cout << "\n[noexcept]\n";

    safe_function();
    normal_function();

    std::cout << std::boolalpha;

    std::cout << "safe_function noexcept: "
              << noexcept(safe_function()) << '\n';

    std::cout << "normal_function noexcept: "
              << noexcept(normal_function()) << '\n';

    std::cout << "MoveOnlyBuffer move construct noexcept: "
              << std::is_nothrow_move_constructible<MoveOnlyBuffer>::value
              << '\n';
}

} // namespace cpp11::lesson01
