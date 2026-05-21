add_executable(cpp11_01_basic_syntax_object_model
    main.cpp
    01_nullptr.h
    01_nullptr.cpp
    02_range_based_for.h
    02_range_based_for.cpp
    03_enum_class.h
    03_enum_class.cpp
    04_override_final.h
    04_override_final.cpp
    05_default_delete.h
    05_default_delete.cpp
    06_delegating_constructor.h
    06_delegating_constructor.cpp
    07_inheriting_constructor.h
    07_inheriting_constructor.cpp
    08_list_initialization.h
    08_list_initialization.cpp
    09_noexcept.h
    09_noexcept.cpp
)

target_compile_features(cpp11_01_basic_syntax_object_model PRIVATE cxx_std_20)
