add_subdirectory(cpp11)
add_subdirectory(cpp14)
add_subdirectory(cpp17)
add_subdirectory(cpp20)

option(MCL_BUILD_QT "Build Qt examples" ON)

if(MCL_BUILD_QT)
    add_subdirectory(qt)
endif()
