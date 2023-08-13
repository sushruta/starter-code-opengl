add_executable(app main.cpp)
target_compile_features(app PUBLIC cxx_std_20)

target_include_directories(app PUBLIC ../glad/include ../stb/include ../include)

target_link_libraries(app PUBLIC glad stb glfw3 GL X11)
