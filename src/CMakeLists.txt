set(HEADER_LIST "${04-template_SOURCE_DIR}/include/shader.h" "${04-template_SOURCE_DIR}/include/camera.h")

add_library(applib glad.c ${HEADER_LIST})

target_include_directories(applib PUBLIC ../include)

target_compile_features(applib PUBLIC cxx_std_20)

source_group(
  TREE "${PROJECT_SOURCE_DIR}/include"
  PREFIX "Header Files"
  FILES ${HEADER_LIST}
)
