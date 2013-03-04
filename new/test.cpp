
// test.cpp

#include <iostream>

void showInt(int *x) {
	std::cout << "int x: " << *x << std::endl;
};

int main() {

int myInt=8;
showInt(&myInt);

}
