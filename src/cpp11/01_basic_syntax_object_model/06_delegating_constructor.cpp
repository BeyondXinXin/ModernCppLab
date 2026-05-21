#include "06_delegating_constructor.h"

#include <iostream>
#include <string>
#include <utility>

namespace cpp11::lesson01 {

// ============================================================
// 6. 委托构造
// 解决：多个构造函数里重复初始化逻辑。
// ============================================================

class User
{
public:
    User()
        : User("default name", 0)
    {
    }

    explicit User(std::string name)
        : User(std::move(name), 0)
    {
    }

    User(std::string name, int age)
        : m_name(std::move(name))
        , m_age(age)
    {
    }

    void print() const
    {
        std::cout << "user name: " << m_name
                  << ", age: " << m_age << "\n";
    }

private:
    std::string m_name;
    int m_age = 0;
};

void demo_delegating_constructor()
{
    std::cout << "\n[delegating constructor]\n";

    User u1;
    User u2("Alice");
    User u3("Bob", 30);

    u1.print();
    u2.print();
    u3.print();
}

} // namespace cpp11::lesson01
