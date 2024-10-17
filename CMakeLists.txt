cmake_minimum_required(VERSION 3.16)

project(task1 LANGUAGES C)

add_executable(task1 main.c)

include(GNUInstallDirs)
install(TARGETS task1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
