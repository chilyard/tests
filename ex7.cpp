
// test 7

#include <iostream>
#include <math.h>

using namespace std;

// u function
int u(int n) {
	if(n==0){
		return 3;
	}
	return 3 * u(n-1) + 4;
}


// main function
int main() {
	int input;

	while(input != -1) {
		cout << "Enter an integer or -1 to exit:";
		cin >> input;
		cout << "U(" << input << ")=" << u(input) << endl;
	}
	return 0;

}
