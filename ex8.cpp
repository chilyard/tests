
// exercise 8

#include <iostream>
#include <math.h>

using namespace std;


// read an integer from the user.  compare that integer to the criterium in the following list
int main() {

int userNumb, totalNumb;

cout << "enter an integer [exit]: ";
cin >> userNumb;
cout << "factoring " << userNumb << endl;

switch (userNumb) { 
	case 0  	: cout << "integer is now 1" << endl;break; 
	case 1  	: cout << "integer is still 1" << endl;break; 
	case 'exit' : break;
	default 	: cout << "default: integer is now ";
	totalNumb = (userNumb) + (userNumb - 1); 
	cout << totalNumb << endl;break; 
	}
}
