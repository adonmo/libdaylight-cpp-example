cmake_minimum_required(VERSION 3.14 FATAL_ERROR)
project(myproj VERSION 0.0.1)


# ---- Including libdaylight as dependency using CPM ----
# For more info on CPM dependecies, see https://github.com/TheLartians/CPM.cmake

include(cmake/CPM.cmake)

CPMAddPackage(
  NAME libdaylight
  GITHUB_REPOSITORY adonmo/daylight
  GIT_TAG 0.1.3
)

# ---- Build example application ----

add_executable(myproj "${CMAKE_CURRENT_SOURCE_DIR}/source/main.cpp")
target_link_libraries(myproj libdaylight)
