
#include <iostream>


using namespace std;

int main()
{
	// variable declaration
	int i, num;
	
	// for loop
	for(i = 8; i <= 23; i++) {
		cout << "Enter number [" << i << "]:"; 
		cin >> num;
		if (num==i) {
			cout << num << endl;
		} else {
			cout << "wrong number, try again" << endl;
			i--; }
		
	}
}
