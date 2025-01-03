cmake_minimum_required(VERSION 3.10)
project(FastLogger)
add_compile_options(-Wall -Wextra -Wpedantic -march=native)
# Add the library target
add_library(${PROJECT_NAME}
logging.cpp
)
option(BUILD_SHARED_LIBS "Build as a shared library" OFF)
target_include_directories(${PROJECT_NAME}
    INTERFACE
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}> 
        $<INSTALL_INTERFACE:include>                   
    PRIVATE   
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>  
)


# Optional: Install the library and headers
install(TARGETS ${PROJECT_NAME}
    EXPORT ${PROJECT_NAME}Targets
    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib
    RUNTIME DESTINATION bin
)

# Install public headers
install(FILES
    "${CMAKE_CURRENT_SOURCE_DIR}/logging.hpp"
    DESTINATION include
)

# Install the export set for use with find_package
install(EXPORT ${PROJECT_NAME}Targets
    FILE ${PROJECT_NAME}Config.cmake
    DESTINATION lib/cmake/${PROJECT_NAME}
)

