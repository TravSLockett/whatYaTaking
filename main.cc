#include <stdio.h>
#include "course.h"

using namespace std;


bool goodCourse(course* c1, course* c2){
	if(c1->eT>c2->sT && c1->d==c2->d){
		return false;
	}else{
		return true;
	}
}
//algo error

int main(){
	/*std::ifstream  data("tempfile.csv");
    	std::string line;
   	std::vector<std::vector<std::string> > parsedCsv;
   	while(std::getline(data,line)){

        std::stringstream lineStream(line);
        std::string cell;
        std::vector<std::string> parsedRow;
        while(std::getline(lineStream,cell,',')){
            parsedRow.push_back(cell);
        }
	parsedCsv.push_back(parsedRow);
    	}		
}

*/
	course* c1arr []={c1,c2,c3,c4,c5,c6};
	for(int i=0;i<sizeof(dataArr)/sizeof(char*);i++){
		course* c1=new course(sT,eT,d);
		c1arr[i]=c1;

	}	


	course* c1arr []={c1,c2,c3,c4,c5,c6};
	course* c2arr []={c7,c8,c9,c10,c11,c12};
	course* c3arr []={c13,c14,c15,c16,c17,c18};
	course* c4arr []={c19,c20,c21,c22,c23,c24};
	course* c5arr []={c25,c26,c27,c28,c29,c30};
	course* c6arr []={c31,c32,c33,c34,c35,c36};
	
	course** arr[]={c1arr,c2arr,c3arr,c4arr,c5arr,c6arr};

	int course=0;
	int section=0;
	bool bCont=true;
	while(bCont==true){
		if(goodCourse(arr[course][section], arr[course+1][section])==true){
			printf("%d",1);
			if(course<4){
			course++;
		}else if(course==4){	
			printf("%d",2);
			bCont=false;
		}else if(course>4){
			printf("Not working");
			course--;
			bool bTrack=false;
			while(bTrack==false){
				if(goodCourse( arr[course][section+1],  arr[course+1][section])==true){
						course++;
						bTrack=true;
				}else{
					section++;
				}
			}
			
		}
		}
		

	}
}

