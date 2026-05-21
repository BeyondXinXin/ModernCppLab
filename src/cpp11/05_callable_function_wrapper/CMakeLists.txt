add_executable(cpp11_05_callable_function_wrapper
    main.cpp
    01_std_function.h
    01_std_function.cpp
    02_std_bind.h
    02_std_bind.cpp
)

target_compile_features(cpp11_05_callable_function_wrapper PRIVATE cxx_std_20)
