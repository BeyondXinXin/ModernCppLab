add_executable(cpp11_04_compile_time_template_basic
    main.cpp
)

target_compile_features(cpp11_04_compile_time_template_basic PRIVATE cxx_std_20)
