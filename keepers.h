#ifndef KEEPERS	
#define KEEPERS 
#endif
#include <iostream> 
#include<stdlib.h>

using namespace std; 

//All MEMBERS FOR ALL CLASSES ARE PUBLIC

class keeper{
public: 
	
	virtual void id(){		//"default" virtual function
		cout<<" DATA NEEDED: Keeper name and ID # not on file. "<<endl;
	}
		
	
	void printCages(){};
};

class keeper_1: virtual public keeper{
public: 
	int cage1;
	keeper_1(){			    //constructor to initalize cage#

		cage1=1;
	}
	void printCages()		//uses previously initalized cage variable to output cage
	{
		cout<<" This animal is in cage: "<<cage1<<endl;
	}
	void id()				//non-default virtual function that outputs keeper name and ID#
	{	
		cout<<" Keeper Name: Steve Irwin ";
		cout<<" ID #: 05472 "<<endl;
		
	}
	
};
class keeper_2: virtual public keeper{		//This class does not call id() function
public: 
	int cage2;
	keeper_2()				
	{
		cage2=2;
	}
	void printCages()
	{
		cout<<" This animal is in cage: "<<cage2<<endl;
	}
	
};
class keeper_3: virtual public keeper{
public: 
	int cage3; 
	keeper_3()
	{
		cage3=3;
	}
	void id(){
	cout<<" Keeper Name: Michael Scott ";
	cout<<" ID #: 42069 "<<endl;
	}
	void printCages()
	{
		cout<<" This animal is in cage: "<<cage3<<endl;
	}
};
class keeper_4: virtual public keeper{
public: 
	int cage4; 
	keeper_4()
	{
		cage4=4; 
	}
	void id(){
		cout<<" Keeper Name: Bill Gates ";
		cout<<" ID #: 10000 "<<endl;
	}
	void printCages()
	{
		cout<<" This animal is in cage: "<<cage4<<endl;
	}
};
class grandChild: public keeper_4, public keeper_3, public keeper_2,  public keeper_1
{
public: 
	void id()
	{
		cout<<"\n";
	}
	int x; 
	int y; 
	int first; 
	int second; 
	int setx(int x)
	{
		return first;
	}
	void getx() 
	{	
		cout<<" PLEASE CONFIRM DECISION BY TYPING \"3\" TO INDICATE CAGE 3: "; 
		cin>>x;
		if(x!=3){
			cout<<" Invalid input. Goodbye. "<<endl;
			exit(0);		//If invalid input the program exits

		}
		first=x;
	}
	
	int sety(int y)
	{
		return second;
	}
	void gety() 
	{
		cout<<" PLEASE CONFIRM DECISION BY TYPE \"4\" TO INDICATE CAGE 4: ";
		cin>>y;
		if(y!=4){
			cout<<" Invalid input. Goodbye. "<<endl;
			exit(0);

		}
		second=y;
	}
	void showCages()	//outputs total cages
	{
		cout<<" Total Cages: "<<cage1<<", "<<cage2<<", "<<cage3<<", "<<cage4<<endl;
	}
	
	


	
	
};



