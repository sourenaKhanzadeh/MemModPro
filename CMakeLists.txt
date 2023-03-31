cmake_minimum_required(VERSION 3.5)
project(MemModPro VERSION 1.0.0)


set(CMAKE_CXX_STANDARD 23)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_PREFIX_PATH "~/Qt/6.4.2/macos/lib/cmake")
find_package(Qt6 REQUIRED COMPONENTS Widgets Core Gui)

add_subdirectory(src)

add_executable(${PROJECT_NAME}
        main.cpp
        )

target_link_libraries(${PROJECT_NAME} PRIVATE Qt6::Widgets Qt6::Core Qt6::Gui
    widgets)

target_include_directories(${PROJECT_NAME} PRIVATE
    src
    )

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/res DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
