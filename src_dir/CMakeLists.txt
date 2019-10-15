cmake_minimum_required(VERSION 3.12.1)
link_directories(
        ${GTKMM_LIBRARY_DIRS}  )

include_directories(
        ${GTKMM_INCLUDE_DIRS}  )

add_executable(gtkmm_calc # name of the executable on Windows will be example.exe
        main.cpp main_window.h main_window.cpp)

target_link_libraries(gtkmm_calc
        ${GTKMM_LIBRARIES}  )