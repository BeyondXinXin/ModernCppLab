add_executable(cpp11_06_concurrency_chrono
    main.cpp
    01_thread.h
    01_thread.cpp
    02_mutex.h
    02_mutex.cpp
    03_lock_guard.h
    03_lock_guard.cpp
    04_unique_lock.h
    04_unique_lock.cpp
    05_condition_variable.h
    05_condition_variable.cpp
    06_future.h
    06_future.cpp
    07_promise.h
    07_promise.cpp
    08_async.h
    08_async.cpp
    09_atomic.h
    09_atomic.cpp
    10_chrono.h
    10_chrono.cpp
)

target_compile_features(cpp11_06_concurrency_chrono PRIVATE cxx_std_20)
