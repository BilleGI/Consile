cmake_minimum_required(VERSION 3.22)

project("Console" LANGUAGES CXX VERSION 1.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)

set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

find_package(Qt6 REQUIRED COMPONENTS Core Widgets)

add_subdirectory(src)

target_link_libraries(console PRIVATE Qt6::Core Qt6::Widgets)

set_target_properties(console PROPERTIES
    WIN32_EXECUTABLE ON
    MACOSX_BUNDLE ON
)

install(TARGETS console
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
