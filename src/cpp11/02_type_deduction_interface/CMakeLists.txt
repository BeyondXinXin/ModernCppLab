add_executable(cpp11_02_type_deduction_interface
    main.cpp
    01_auto.h
    01_auto.cpp
    02_decltype.h
    02_decltype.cpp
    03_using_alias.h
    03_using_alias.cpp
    04_lambda.h
    04_lambda.cpp
)

target_compile_features(cpp11_02_type_deduction_interface PRIVATE cxx_std_20)
