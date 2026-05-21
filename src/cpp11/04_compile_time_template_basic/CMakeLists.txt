add_executable(cpp11_04_compile_time_template_basic
    main.cpp
    01_constexpr.h
    01_constexpr.cpp
    02_static_assert.h
    02_static_assert.cpp
    03_variadic_templates.h
    03_variadic_templates.cpp
    04_type_traits.h
    04_type_traits.cpp
)

target_compile_features(cpp11_04_compile_time_template_basic PRIVATE cxx_std_20)
