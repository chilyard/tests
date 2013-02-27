
#include <iostream>

//test

using namespace std;

int main() {

cout << "hello" << endl; 
cout << "enter 10 integers, i'll find the smallest" << endl; 

int holdEm, temp_holdEm, x;

for (x=1; x<=10; x++) {
	cout << "integer number " << x << ": ";
	cin >> temp_holdEm;
		if (holdEm < temp_holdEm) {
			} else {
				holdEm = temp_holdEm; }
			
	}

cout << "the lowest integer is: " << holdEm << endl;

}
