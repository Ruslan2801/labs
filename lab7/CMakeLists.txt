cmake_minimum_required(VERSION 3.5)

project(Project7)

set(SOURCES
	main.cpp
	func.cpp
	reader.cpp
	writer.cpp
)

set(HEADERS
	func.h
	reader.h
	writer.h
)

add_executable(project7 ${SOURCES} ${HEADERS})

set_target_properties(
	project PROPERTIES
	CXX_STANDART 11
	CXX_STANDART_REQUIRED ON
)