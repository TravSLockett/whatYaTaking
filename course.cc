#include <stdio.h>
#include "course.h"

course::course(int sTime, int eTime, const char* date){
	this->sT=sTime;
	this->eT=eTime;
	this->d=date;
}
