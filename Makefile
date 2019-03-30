all:main
main:main.cc course.cc
	g++ main.cc course.cc -o main -g
