set(widgets_SRCS
        widgets.cpp
        widgets.hpp
        nav.cpp
        nav.hpp process.cpp process.hpp)
add_library(widgets STATIC ${widgets_SRCS})

target_link_libraries(widgets PRIVATE Qt6::Widgets)