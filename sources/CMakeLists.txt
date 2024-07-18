set(target_name TestQtVulkan)

find_package(Qt6 COMPONENTS Widgets)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC OFF)
set(CMAKE_AUTOUIC OFF)

add_executable(${target_name} ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)

target_link_libraries(${target_name} PRIVATE Qt6::Widgets)
