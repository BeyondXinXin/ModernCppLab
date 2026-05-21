#include "07_inheriting_constructor.h"

#include <iostream>

namespace cpp11::lesson01 {

// ============================================================
// 7. 继承构造
// 解决：派生类只是转发基类构造函数时，不用写重复代码。
// ============================================================

class Widget
{
public:
    Widget(int width, int height)
        : m_width(width)
        , m_height(height)
    {
        std::cout << "Widget Create\n";
    }

    void print_size() const
    {
        std::cout << "size: " << m_width << " x " << m_height << "\n";
    }

protected:
    int m_width = 0;
    int m_height = 0;
};

class Button : public Widget
{
public:
    using Widget::Widget;

    void click()
    {
        std::cout << "button clicked\n";
    }
};

void demo_inheriting_constructor()
{
    std::cout << "\n[inheriting constructor]\n";

    Button button { 120, 32 };

    button.print_size();
    button.click();
}

} // namespace cpp11::lesson01
