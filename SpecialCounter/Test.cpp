#include <iostream> 
#include "SpecialCounter.h"
#include <string.h>

using namespace std;

int main()
{
	SpecialCounter counter;
	char choice;

	do {
		cout << endl << "Make a choice:\n" << endl;
		cout << "A - Change Begin Value" << endl;
		cout << "B - Change End Value" << endl;
		cout << "C - Change Increment" << endl;
		cout << "D - Change Decrement" << endl;
		cout << "E - Count Up" << endl;
		cout << "F - Count Down" << endl << endl;
		cout << "Q - EXIT" << endl;
		
		cin >> choice;

		switch (choice)
		{
		case 'A' :
			counter.start();
			break;
		case 'B':
			counter.stop();
			break;
		case 'C':
			int newInc;
			cout << "Enter increment value : ";		
			cin >> newInc;
			counter.stepInc(newInc);
			break;
		case 'D':
			int newDec;
			cout << "Enter decrement value : ";		
			cin >> newDec;
			counter.stepDec(newDec);
			break;
		case 'E':
			counter++;
			break;
		case 'F':
			counter--;
			break;
		default:
			cout << "Invalid input" << endl;

		}
	} while (choice != 'Q');
}
