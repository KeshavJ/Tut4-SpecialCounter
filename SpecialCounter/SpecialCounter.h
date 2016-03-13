#pragma once
#include <iostream>

using namespace std;

class SpecialCounter
{
private: 

	int startCounter;
	int stopCounter;		
	int increment;		
	int decrement;	
	int currValue;	


public:
	SpecialCounter();
	SpecialCounter(int, int, int, int);	
	void start();			
	void stop();			 
	void stepInc(int);		
	void stepDec(int);		
	void operator++();				 
	void operator--();			
	~SpecialCounter();
};

