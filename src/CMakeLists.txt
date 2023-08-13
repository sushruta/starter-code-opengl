## set(HEADER_LIST "${04-template_SOURCE_DIR}/include/shader.h" "${04-template_SOURCE_DIR}/include/camera.h")

## this might be needed for visual studio
## commenting it for now and will add after
## some investigation
## source_group(
##   TREE "${PROJECT_SOURCE_DIR}/include"
##   PREFIX "Header Files"
##   FILES ${HEADER_LIST}
## )

add_executable(app main.cpp)
target_compile_features(app PUBLIC cxx_std_20)

target_include_directories(app PUBLIC ../glad/include ../stb/include ../include)

target_link_libraries(app PUBLIC glad stb glfw3 GL X11)
