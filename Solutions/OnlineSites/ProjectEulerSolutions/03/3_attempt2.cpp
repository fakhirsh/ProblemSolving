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

	// Start from an odd number and increment by 2
	for(int i = 3; i < sqrt(num)+1; i+=2){
		if(num % i == 0)
			return false;
	}

	return true;
}

int main(int argc, char ** args) {

	clock_t begin = clock();

	unsigned long PNUM = 600851475143;

	unsigned long k = 2;
	unsigned long maxPrimeFact = 0;


// Now this algorithm is more like it !!!

	while(PNUM > 1){

		if(IsPrime(k)){
			while(PNUM % k == 0){
				PNUM /= k;
			}
			maxPrimeFact = k;
		}
		k++;
	}

	cout << maxPrimeFact << endl;

	clock_t end = clock();
	double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;

	cout << "Time elapsed: " << elapsed_secs << " seconds" << endl;

	return 0;
}
