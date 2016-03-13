#include "SpecialCounter.h"
#include <iostream> 

using namespace std;



SpecialCounter::SpecialCounter()
{
	startCounter = 0;
	stopCounter = 225;
	increment = 1;
	decrement = 1;
	currValue = startCounter;

}

SpecialCounter::SpecialCounter(int begin, int end, int incr, int decr)
{
	startCounter = begin;
	stopCounter = end;
	increment = incr;
	decrement = decr;
	currValue = begin;
}

void SpecialCounter::start()
{
	cout << "Enter number to Begin : ";
	cin >> startCounter;				
	currValue = startCounter;			
}

void SpecialCounter::stop()
{
	cout << "Enter number to Stop : ";
	cin >> stopCounter;					 
}

void SpecialCounter::stepInc(int stepSize)	 
{
	increment = stepSize;
}

void SpecialCounter::stepDec(int stepSize)	 
{
	decrement = stepSize;
}

void SpecialCounter::operator--()					
{
	currValue = currValue - decrement;
	cout << endl << "The current value is : " << currValue << endl;		 
}

void SpecialCounter::operator++()					 
{
	if ((currValue + increment) > stopCounter) {			
		cout << "Counter has reached end value." << endl;
	}
	else {
		currValue = currValue + increment;
		cout << endl << "The current value is : " << currValue << endl;	 
	}
}

SpecialCounter::~SpecialCounter()
{
}
