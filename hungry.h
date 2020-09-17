
#ifndef HUNGRY
#define HUNGRY
#endif
#include <iostream> 
#include<stdlib.h>

using namespace std; 

//All MEMBERS FOR ALL CLASSES ARE PUBLIC

//function that outputs text when called
class Food{				
public:
	void noFood(){
		cout<<" This animal doesn't need to be fed."<<endl;
	}
	void feedEm(){
			cout<<" ATTENTION: This animal needs to be fed!"<<endl;
		}
};


 
	
