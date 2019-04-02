//copyrights reserved
//get all solutions

#include <array>
#include <stdio.h>
#include "course.h"

// see if two course have time conflict
bool goodCourse(course* c1, course* c2){
	if (c1->sT < c2->sT){
		if(c1->eT > c2->sT && c1->d == c2->d){
			return false;
		}else{
			return true;
		}
	}else if(c1->sT > c2->sT){
		if(c2->eT > c1->sT && c1->d == c2->d){
			return false;
		}else{
			return true;
		}
	}else if(c1->sT == c2->sT && c1->d == c2->d){
		return false;
	}
	return 0;	
};

void printMenu(){
	printf("Yo Yo Yo what you taking next semester?\n");
}


course* buildCourse(int i){
	int idx=i;
	const char* n;
	int c;
	int sT;
	int eT;
	const char* d;

	printf("Please enter your course%d name\n",idx);
	scanf("%s",&n);
	printf("Please enter your course%d credits\n",idx);
	scanf("%d",&c);
	printf("Please enter your course%d start time\n",idx);
	scanf("%d",&sT);
	printf("Please enter your course%d end time\n",idx);
	scanf("%d",&eT);
	printf("Please enter your course%d dates\n",idx);
	scanf("%s",&d);

	course* cor= new course(n,c,sT,eT,d);

	return cor;

}





int main(){
	printMenu();
	course* c1=buildCourse(2);	
	c1->printCourse();
	

}
/*

	int cInc=1;
	int cor=0;
	int fSec=0;
	int sSec=0;
	int secSize []={2,2,2,2,2,2};
	bool breakout=false;
	int counter=0;
	int corCount=sizeof(secSize)/sizeof(secSize[0]);

//working courses
	course* s0=new course("C0", 4, 1115, 1240, "MW");
	course* s1=new course("C1", 3, 1330, 1755, "MW");
	course* s2=new course("C2", 4, 1830, 2120, "MW");
	course* s3=new course("C3", 4, 910, 1100, "TR");
	course* s4=new course("C4", 3, 1245, 1410, "TR");
	course* s5=new course("C5", 3, 1420, 1535, "TR");

	course* s6=new course("C0", 4, 1115, 1130, "MW");
	course* s7=new course("C1", 3, 1120, 1755, "MW");
	course* s8=new course("C2", 4, 1630, 2120, "MW");
	course* s9=new course("C3", 4, 810, 1000, "TR");
	course* s10=new course("C4", 3, 945, 1410, "TR");
	course* s11=new course("C5", 3, 1320, 1535, "TR");


	course* corArr [6][2]={{s6,s0},{s7,s1},{s2,s8},{s9,s3},{s10,s4},{s5,s11}};



	for(cor=0;cor<corCount;cor++){
		if(cor==corCount-1){
			printf("here is the schedule\n");
			break;
		}
 		while(cInc<corCount-cor){
			while(fSec<=secSize[cor]){
				if(fSec >= secSize[cor]){
					break;
				}
				while(sSec <= secSize[cor+cInc]-1){
					if(goodCourse(corArr[cor][fSec], corArr[cor+cInc][sSec])==false){
						counter++;
						printf("%d,%d and %d,%d are not good %d \n",cor,fSec,cor+cInc,sSec,counter);
						sSec++;
					}else if(goodCourse(corArr[cor][fSec], corArr[cor+cInc][sSec])==true){
						counter++;
						printf("%d,%d and %d,%d are good %d \n",cor,fSec,cor+cInc,sSec,counter);
						sSec++;
					}
				}
				fSec++;
				sSec=0;
			}
			fSec=0;
			cInc++;
		}
		cInc=1;

	}
}	
	

*/	
