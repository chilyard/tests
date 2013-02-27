
#include <iostream>


using namespace std;

int main()
{
	// variable declaration
	int i = 8, num;
	
	// for loop
	while(i >= 8 && i <= 23) {
		cout << "enter number [" << i << "]:";
		cin >> num;
			if (num == i) 
				i++; 
			else  
				cout << "try again";
	}
}
