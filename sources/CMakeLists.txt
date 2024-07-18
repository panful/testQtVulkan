set(target_name TestQtVulkan)

find_package(Qt6 COMPONENTS Widgets)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC OFF)
set(CMAKE_AUTOUIC OFF)

set(SRCS 
    ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp 
    ${CMAKE_CURRENT_SOURCE_DIR}/MyWindow.cpp
)

add_executable(${target_name} ${SRCS})

target_link_libraries(${target_name} PRIVATE Qt6::Widgets)
