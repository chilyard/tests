
#include <iostream>

//test

using namespace std;

int main() {

cout << "hello" << endl; 
cout << "enter 10 integers, i'll add them for you" << endl; 

int holdEm = 0, temp_holdEm = 0, x;

for (x=1; x<=10; x++) {
	cout << "integer number " << x << ": ";
	cin >> temp_holdEm;
		if (holdEm += temp_holdEm) {
			} else {
				x = x; }
			
	}

cout << "the total is: " << holdEm << endl;

}
