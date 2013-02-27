
#include <iostream>
#include <math.h>


using namespace std;

int main(){

int myInteger;

cout << "enter an integer between 0 and 20: ";
cin >> myInteger;
if ((myInteger >= 0) && (myInteger <= 20)) {
	cout << "success!" << endl; }
	else { cout << "fail!" << endl; }
}
