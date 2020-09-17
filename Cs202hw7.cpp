/*Name: Lucas Allen, 5004607031, assignment #7 
Description: This program uses multi-file inheritance, abstract classes, and interfaces to simulate some functions of a small zoo directory.
Input: The user will input y or n to indicate yes or no, as well as the numbers 3 and 4. 
Output: A zoo directory with, the names of animals and what kind of animal they are, how many hours it has been since they were fed and whether or not they need to be fed, each animals cage and keeper name and ID#, 
	how many cages there are in total, and a small dialouge that walks the user through switching the cages of two animals. 
*/

#include <iostream>
#include<stdlib.h>
#include <iomanip>
#include<time.h>
//header files
#ifndef KEEPERS
#include "keepers.h"
#endif
#ifndef ANIMALS
#include "animals.h"
#endif
#ifndef HUNGRY
#include "hungry.h"
#endif


using namespace std; 

int main()
{
	int arrSize=5;				//setting the size of the array
	int hourArray[arrSize];		//declaring an array of hours with the previously declared arraySize
	srand(time(0));				// seeding rand(). No pseudorandom here!

	for(int i=0; i<arrSize; i++){
		hourArray[i]=rand()%24+1;	// setting each element of the array to a random number between 1 and 24

	}

	
	int population=4; 			//the current population of the zoo

	//class object declarations//
	//Animal class object declarations
	Tiger t; 					
	Penguin p; 					
	Giraffe g; 					
	Elephant e;	
	//Food class object declarations	
	Food f; 
	Food *animal1= &f; 
	Food *animal2= &f; 
	Food *animal3= &f; 
	Food *animal4= &f;
	//Keeper class object declarations
	keeper k;
	keeper_1 k1;
	keeper_2 k2;
	keeper_3 k3; 
	keeper_4 k4; 
	keeper *apple=&k1;
	keeper *butter=&k2;
	keeper *charlie=&k3; 
	keeper *duff=&k4;
	grandChild gc;
	//misc. variables for functionality
	char option=' ';			//Y/N option
	bool contloop=true;			//continue loop?
	bool askAgain=true;			//ask Again?

	while(contloop==true){
	cout<<endl;
	cout<<setfill('*')<<setw(10)<<('*')<<" ZOO DIRECTORY "<<setfill('*')<<setw(10)<<('*')<<endl;
	cout<<" Current zoo population: "<<population<<endl;
	gc.showCages();				//Tells how many cages
	cout<<endl;
	cout<<setfill('*')<<setw(10)<<('*')<<" POPULATION DATA "<<setfill('*')<<setw(10)<<('*')<<endl;

	cout<<"Animal #1"<<endl; 
	cout<<" Type of animal: "<<t.type()<<endl;
	cout<<" Animal name: "<<t.animal_name()<<endl;
	cout<<" ** FEEDING: **"<<endl;
	cout<<" Hours since fed: "<<hourArray[0]<<endl;
	if(hourArray[0]>12)
	{
		animal1->feedEm();		//if the animal has not been fed in more than 12 hours call feedEm function//cout<< "ATTENTION: This animal needs to be fed."
	}
	else {
		animal1->noFood();		//cout<<" This animal does not need to be fed."<<endl;
	}	
	cout<<" ** HABITAT: **"<<endl;
	k1.printCages();			//calls the print cages function for animal1
	apple->id();				//calls the id function for keeper1

	
	
	cout<<endl;

	cout<<"Animal #2"<<endl; 
	cout<<" Type of animal: "<<p.type()<<endl;
	cout<<" Animal name: "<<p.animal_name()<<endl;
	cout<<" ** FEEDING: **"<<endl;
	cout<<" Hours since fed: "<<hourArray[1]<<endl;
	if(hourArray[1]>12)
	{
		animal2->feedEm();
	}else {
		animal1->noFood();
	}
	cout<<" ** HABITAT: **"<<endl;
	k2.printCages();			//calls the print cages function for animal2
	butter->id();				//calls the id function for keeper2
	
	
	cout<<endl;

	cout<<"Animal #3"<<endl; 
	cout<<" Type of animal: "<<g.type()<<endl;
	cout<<" Animal name: "<<g.animal_name()<<endl;
	cout<<" ** FEEDING: **"<<endl;
	cout<<" Hours since fed: "<<hourArray[2]<<endl;
	if(hourArray[2]>12)
	{
		animal3->feedEm();
	}else{
		animal1->noFood();
	}
	cout<<" ** HABITAT: **"<<endl;
	k3.printCages();			//calls the print cages function for animal3
	charlie->id();				//calls the id function for keeper3
	
	cout<<endl;

	cout<<"Animal #4"<<endl; 
	cout<<" Type of animal: "<<e.type()<<endl;
	cout<<" Animal name: "<<e.animal_name()<<endl;
	cout<<" ** FEEDING: **"<<endl;
	cout<<" Hours since fed: "<<hourArray[3]<<endl;
	if(hourArray[3]>12)
	{
		animal4->feedEm();
	}else{
		animal1->noFood();
	}
	cout<<" ** HABITAT: **"<<endl;
	k4.printCages();			//calls the print cages function for animal3
	duff->id(); 				//calls the id function for keeper3
	
	cout<<endl;
	 
	if(askAgain==false)
	{
		contloop=false;
	}
	if(askAgain==true){
	cout<<" ***RECORDS INDICATE ANIMALS 3 AND 4 ARE BOTH HERBIVORES AND THUS CAN SWITCH CAGES***"<<endl;
	cout<<" Would you like to switch the cages of two animals? (y/n): ";
	cin>>option;
	int first=0; 
	int second=0; 
	if(option=='y'){
	gc.getx();					//gets the value of first(x)
	gc.gety();					//gets the value of second(y)
	k4.cage4=gc.first;			//sets the value of cage 4 to first
	k3.cage3=gc.second;			//sets the value of cage 3 to second
	cout<<" Cages switched."<<endl;
	cout<<endl;
	
	}
	askAgain=false;
	}
	
	}if(option=='n'){
		contloop=false;
		cout<<"Goodbye."<<endl;
	}
	if(option!='y' && option!= 'n')
	{
		contloop=false;
		cout<<option<<"Is an Invalid Entry. Goodbye."<<endl; 
	}
	
	cout<<endl;
	cout<<"End of Zoo Directory. Have a nice day!"<<endl;
	cout<<endl;


}