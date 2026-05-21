#include "04_override_final.h"

#include <iostream>
#include <string>

namespace cpp11::lesson01 {

// ==============================================================
// 4. override / final
// 解决：虚函数覆写靠人工判断，函数名、参数、const 写错也不一定发现；
// final 可以禁止继承或覆写。
// ==============================================================

class Device
{
public:
    ~Device() = default;

    void start()
    {
        std::cout << "Device::start\n";
    }

    virtual void stop()
    {
        std::cout << "Device::stop\n";
    }

    virtual std::string name() const
    {
        return "Device";
    }

    int value = 99;
};

class RobotDevice final : public Device
{
public:
    void start()
    {
        std::cout << "value = " << value
                  << ", robotValue = " << robotValue
                  << "\n";
    }

    void stop()
    {
        std::cout << "RobotDevice::stop\n";
    }

    std::string name() const override
    {
        return "RobotDevice";
    }

    // void stop1() override { }

    int robotValue = 888;
};

void demo_override_final()
{
    std::cout << "\n[override / final]\n";

    RobotDevice robot;
    robot.start();
    robot.stop();
    std::cout << "robot name: " << robot.name() << "\n";

    // Device * device = &robot;
    Device* device = static_cast<Device*>(&robot);
    device->start();
    device->stop();
    std::cout << "device name: " << device->name() << "\n";

    {
        Device* device = new Device;
        RobotDevice* robot = static_cast<RobotDevice*>(device);
        robot->value = 199;
        if (robot) {
            robot->start();
            // undefined behavior: device is not RobotDevice, but we treat it as RobotDevice and call start()
        } else {
            std::cout << "device is not RobotDevice\n";
        }
    }

    {
        Device* device = new Device;
        RobotDevice* robot = dynamic_cast<RobotDevice*>(device);
        if (robot) {
            robot->start();
        } else {
            std::cout << "device is not RobotDevice\n";
        }
    }
}

} // namespace cpp11::lesson01
