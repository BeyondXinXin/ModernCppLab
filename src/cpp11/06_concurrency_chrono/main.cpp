#include <iostream>

#include "01_thread.h"
#include "02_mutex.h"
#include "03_lock_guard.h"
#include "04_unique_lock.h"
#include "05_condition_variable.h"
#include "06_future.h"
#include "07_promise.h"
#include "08_async.h"
#include "09_atomic.h"
#include "10_chrono.h"

int main()
{
    std::cout << "C++11 06 Concurrency and Chrono\n";

    cpp11::lesson06::demo_thread();
    cpp11::lesson06::demo_mutex();
    cpp11::lesson06::demo_lock_guard();
    cpp11::lesson06::demo_unique_lock();
    cpp11::lesson06::demo_condition_variable();
    cpp11::lesson06::demo_future();
    cpp11::lesson06::demo_promise();
    cpp11::lesson06::demo_async();
    cpp11::lesson06::demo_atomic();
    cpp11::lesson06::demo_chrono();

    return 0;
}
