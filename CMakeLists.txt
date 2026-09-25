cmake_minimum_required(VERSION 3.20)
project(Homeworks CXX)

set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE SOURCE_FILES "*.cpp")

foreach(FILE_PATH ${SOURCE_FILES})
    get_filename_component(FILE_NAME ${FILE_PATH} NAME_WE)

    get_filename_component(DIR_PATH ${FILE_PATH} DIRECTORY)
    get_filename_component(DIR_NAME ${DIR_PATH} NAME)

    set(TARGET_NAME "${DIR_NAME}_${FILE_NAME}")

    add_executable(${TARGET_NAME} ${FILE_PATH})
endforeach()
