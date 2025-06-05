cmake_minimum_required(VERSION 3.5)

project(Html 
	VERSION 1.0.0
	DESCRIPTION "C++ library with class Html for work with html code."
	LANGUAGES CXX)

file(GLOB
	public_headers "*.h"
	sources "*.cpp")

add_library(${PROJECT_NAME}_lib
			${sources} 
			${public_headers})
