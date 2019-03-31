#include <stdio.h>
#include "course.h"

// see if two course have time conflict
bool goodCourse(course* c1, course* c2){
	if (c1->sT<c2->sT){
		if(c1->eT>c2->sT && c1->d==c2->d){
			return false;
		}else{
			return true;
		}
	}else if(c1->sT>c2->sT){
		if(c2->eT>c1->sT && c1->d==c2->d){
			return false;
		}else{
			return true;
		}
	}
	
};

int main(){
	int cInc=1;
	int cor=0;
	int fSec=0;
	int sSec=0;
	bool bad=false;
	int secSize []={1,1,1,1,1,1};
	bool breakout=false;
	bool breakout2=false;

	course* s0=new course("C0", 4, 1115, 1240, "MW");
	course* s1=new course("C1", 3, 1330, 1755, "MW");
	course* s2=new course("C2", 4, 1830, 2120, "MW");
	course* s3=new course("C3", 4, 910, 1100, "TR");
	course* s4=new course("C4", 3, 1245, 1410, "TR");
	course* s5=new course("C5", 3, 1420, 1535, "TR");
	
	course* corArr [6][1]={{s0},{s1},{s2},{s3},{s4},{s5}};



	for(cor=0;cor<6;cor++){
		if(cor==5 && bad != true){
			printf("good\n");
			break;
		}else if(bad ==true){
		       printf("Dont break\n");
		       break;
		}
 		while(cInc<6-cor){
			if(breakout==true){
				break;
			}
			while(fSec<=secSize[cor]){
				if(fSec >= secSize[cor]){
					bad=true;
					breakout=true;
					break;
				}else if(breakout2==true){
					break;
				}
				while(sSec <= secSize[cor+cInc]-1){
					if(goodCourse(corArr[cor][fSec], corArr[cor+cInc][sSec])==false){
						printf("%d,%d and %d,%d are not good \n",cor,fSec,cor+cInc,sSec);
						sSec++;
					}else if(goodCourse(corArr[cor][fSec], corArr[cor+cInc][sSec])==true){
						printf("%d,%d and %d,%d are good \n",cor,fSec,cor+cInc,sSec);
						breakout2=true;
						sSec=0;
						break;
					}
				}
				if(breakout2==true){
					break;
				}else{
					fSec++;
					sSec=0;
				}
			}
			fSec=0;
			cInc++;
			breakout2=false;
		}
		cInc=1;
	}



}
	
	
	
	
	
	
	
	
	
	/*
	course* s0=new course("C0", 4, 1115, 1240, "MW");
	course* s1=new course("C1", 3, 1630, 1755, "MW");
	course* s2=new course("C2", 4, 1830, 2120, "MW");
	course* s3=new course("C3", 4, 910, 1100, "TR");
	course* s4=new course("C4", 3, 1245, 1410, "TR");
	course*


	int counterArr []={0,1,2,3,4,5,0};
	int cArrCounter=0;
	int  sch []={0,0,0,0,0,0};

	int next=1;

	int schBreak=false;
	while(schBreak==false){
		if(goodCourse(cArr[counterArr[cArrCounter]], cArr[counterArr[cArrCounter+next]])==true && cArrCounter<7){
			sch [cArrCounter]=1;
			cArrCounter++;
		}else if(goodCourse(cArr[counterArr[cArrCounter]], cArr[counterArr[cArrCounter+next]])==false && cArrCounter<7){
			printf("%d and %d don't work together \n",cArrCounter, cArrCounter+next);
			cArrCounter--;
		}else if(cArrCounter==7 || cArrCounter>7){
			printf("end of the search\n");
			schBreak=true;
		}else{
			printf("no solution found \n");
			schBreak=true;
		}
	};

	for(int i=0;i<6;i++){
		printf("%d\n",sch[i]);
	}
	*/
//}
	//Hash Table instead of array??

/*	course* c1arr []={c1,c2,c3,c4,c5,c6};
	course* c2arr []={c7,c8,c9,c10,c11,c12};
	course* c3arr []={c13,c14,c15,c16,c17,c18};
	course* c4arr []={c19,c20,c21,c22,c23,c24};
	course* c5arr []={c25,c26,c27,c28,c29,c30};
	course* c6arr []={c31,c32,c33,c34,c35,c36};
	
	course** arr[]={c1arr,c2arr,c3arr,c4arr,c5arr,c6arr};
*/

	
