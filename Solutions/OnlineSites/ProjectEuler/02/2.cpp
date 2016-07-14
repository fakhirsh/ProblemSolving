//============================================================================
// Name        : 2.cpp
// Author      : Fakhir Shaheen
// Version     :
// Copyright   : 
// Description : Problem 2 of Project Euler
//============================================================================

#include <iostream>
using namespace std;

int main(int argc, char ** args) {

	unsigned int sum = 0;

	unsigned int prevT = 1;
	unsigned int nextT = 2;

	sum = nextT;  // The first even Fib number

	bool quit = false;

	while(!quit){

		unsigned int fnum = prevT + nextT;

		if(fnum >= 4000000){
			quit = true;
			continue;
		}

		if(fnum % 2 == 0){
			sum = sum + fnum;
		}

		prevT = nextT;
		nextT = fnum;

	}

	cout << sum << endl;
	return 0;
}
