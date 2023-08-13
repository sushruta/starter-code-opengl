add_executable(app main.cpp)
target_compile_features(app PRIVATE cxx_std_20)

#include_directories(app PUBLIC ../glad/include ../stb/include)

target_link_libraries(app PRIVATE glad stb glfw3 GL X11)
