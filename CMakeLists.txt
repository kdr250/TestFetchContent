cmake_minimum_required (VERSION 3.8)

project(TestFetchContent VERSION 1.0)

include(FetchContent)

FetchContent_Declare(
	SampleFetchContent
	GIT_REPOSITORY https://github.com/kdr250/SampleFetchContent.git
	GIT_TAG 225b3642ef8923138fdf2786fcc44fafe89e2a05
)
FetchContent_MakeAvailable(SampleFetchContent)

add_executable(TestFetchContent "src/main.cpp")

target_link_libraries(TestFetchContent PRIVATE SampleFetchContent)
