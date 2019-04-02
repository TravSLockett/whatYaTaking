#include <stdio.h>
#include "course.h"

course::course(const char* name, int credit, int sTime, int eTime, const char* date){
	this->sT=sTime;
	this->eT=eTime;
	this->d=date;
	this->n=name;
	this->c=credit;
}

void course::printCourse(){
	printf("%s,%d,%d,%d,%s\n",n,c,sT,eT,d);
}
