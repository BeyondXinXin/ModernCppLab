#include "05_default_delete.h"

#include <iostream>

namespace cpp11::lesson01 {

// ============================================================
// 5. =default / =delete
// 解决：特殊成员函数是否允许生成、是否禁止，表达更直接。
// ============================================================

class NonCopyableDevice
{
public:
    NonCopyableDevice() = default;
    ~NonCopyableDevice() = default;

    NonCopyableDevice(const NonCopyableDevice&) = delete;
    NonCopyableDevice& operator=(const NonCopyableDevice&) = delete;

    void run()
    {
        std::cout << "NonCopyableDevice::run\n";
    }
};

class ValuePoint
{
public:
    // ValuePoint() = default;
    ValuePoint(int x, int y)
        : m_x(x)
        , m_y(y)
    {
    }

    void print() const
    {
        std::cout << "point: (" << m_x << ", " << m_y << ")\n";
    }

private:
    int m_x = 0;
    int m_y = 0;
};

void demo_default_delete()
{
    std::cout << "\n[=default / =delete]\n";

    NonCopyableDevice device;
    device.run();

    // NonCopyableDevice copy = device;
    // 编译失败，因为拷贝构造函数被 delete 了。

    // ValuePoint p1;
    // p1.print();
    // 编译失败，因为默认构造函数被禁用了

    ValuePoint p2(3, 4);
    p2.print();
}

} // namespace cpp11::lesson01
