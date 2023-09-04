cmake_minimum_required(VERSION 3.27.2)

project(RPG_Game)

# Find wxWidgets package
find_package(wxWidgets REQUIRED core base)

# Include wxWidgets directories
include(${wxWidgets_USE_FILE})

# Add your source files
set(SOURCE_FILES
    main.cpp
    wxFrames/mainframe.cpp
    # ... any other source files
)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})

# Link your application with wxWidgets libraries
target_link_libraries(${PROJECT_NAME} ${wxWidgets_LIBRARIES})

add_subdirectory(Units)
add_subdirectory(wxFrames)

# Assuming the "units" target is defined within the Units subdirectory
target_link_libraries(${PROJECT_NAME} units)

# Set the output directory for the executable
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/out/bin)
