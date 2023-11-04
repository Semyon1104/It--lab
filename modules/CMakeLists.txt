file(GLOB_RECURSE ALL_SOURCES_FILES *.cpp *.hpp)
add_library(header STATIC ${ALL_SOURCES_FILES})