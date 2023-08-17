add_executable(split-viewport split-viewport.cpp)
target_compile_features(split-viewport PRIVATE cxx_std_20)

target_link_libraries(split-viewport PRIVATE mylib glad GL X11)
