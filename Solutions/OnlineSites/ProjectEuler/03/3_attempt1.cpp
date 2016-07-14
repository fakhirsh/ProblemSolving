//============================================================================
// Name        : 3.cpp
// Author      : Fakhir Shaheen
// Version     :
// Copyright   : 
// Description : Problem 3 of Project Euler
//============================================================================

#include <iostream>
#include <ctime>
#include <math.h>

using namespace std;

bool IsPrime(unsigned long num){
	// Preemptive checking of even numbers
	if(num > 2 && num % 2 == 0)
		return false;

	for(int i = 3; i < sqrt(num)+1; i+=2){
		if(num % i == 0)
			return false;
	}

	return true;
}

int main(int argc, char ** args) {

	clock_t begin = clock();

	const unsigned long PNUM = 600851475143;

//
// BAD CODE: NEED to IMPROVE THIS !!!
//   Takes wayyy tooooo long

	for(int i = 3; i < PNUM; i+=2){
		if(IsPrime(i) && PNUM % i == 0)
			cout << i << endl;
	}

	clock_t end = clock();
	double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;

	cout << "Time elapsed: " << elapsed_secs << endl;

	return 0;
}
