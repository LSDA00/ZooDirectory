#ifndef ANIMALS
#define ANIMALS 
#endif
#include <iostream> 
#include<stdlib.h>

using namespace std; 

//All MEMBERS FOR ALL CLASSES ARE PUBLIC

class animal //pure virtual class
{
public: 
	virtual string type()=0; //pure virtual functions 
	virtual string animal_name()=0;
};

class Tiger: public animal
{
public:
	string type()			//returns type of animal
	{
		return "Tiger"; 
	}
	string animal_name()	//returns name of animal
	{
		return "Francisco";
	}


};

class Penguin: public animal
{
public:
	string type()
	{
		return "Penguin"; 
	}
	string animal_name()
	{
		return "Bernard"; 
	}
	
};

class Giraffe: public animal
{
public:
	string type()
	{
		return "Giraffe"; 
	}
	string animal_name()
	{
		return "Britney";
	}
	
};

class Elephant: public animal
{
public:
	string type()
	{
		return "Elephant";
	}
	string animal_name()
	{
		return "Peanut";
	}
	
};