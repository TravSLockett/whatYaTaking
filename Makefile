all:main
main:schedule.cc course.cc
	g++ schedule.cc course.cc -o main -g
