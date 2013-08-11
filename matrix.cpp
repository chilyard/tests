
#include <iostream>
#include <boost/random/mersenne_twister.hpp>
#include <boost/random/uniofrm_int_distribution.hpp>

using namespace std;


int main() {
	boost::random::mt19937 boost_rnd;
	boost::random::uniform_int_distribution<> onetwoseven(0,127);
	int randomNumber = onetwoseven(boost_rnd);
	cout << "ascii char is: " << (char)randomNumber << endl;
}
