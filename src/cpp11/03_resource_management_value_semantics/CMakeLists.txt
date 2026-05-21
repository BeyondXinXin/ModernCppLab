add_executable(cpp11_03_resource_management_value_semantics
    main.cpp
    01_unique_ptr.h
    01_unique_ptr.cpp
    02_shared_ptr.h
    02_shared_ptr.cpp
    03_weak_ptr.h
    03_weak_ptr.cpp
    04_rvalue_reference.h
    04_rvalue_reference.cpp
    05_move_semantics.h
    05_move_semantics.cpp
    06_std_move.h
    06_std_move.cpp
    07_std_forward.h
    07_std_forward.cpp
)

target_compile_features(cpp11_03_resource_management_value_semantics PRIVATE cxx_std_20)
