#ifndef COURSE_DEFINED
#define COURSE_DEFINED 1

class course{
	public:
		course (const char* name,int credit, int sTime, int eTime, const char* date);
		int sT,eT,c;
		const char* d;
		const char* n;
};

#endif 
