add_library(mylib window.cpp)

target_compile_features(mylib PUBLIC cxx_std_20)

target_include_directories(mylib PUBLIC ../glad/include ../stb/include ../include)

target_link_libraries(mylib PUBLIC glad stb glfw3 GL X11)
