//============================================================================
// Name        : 10.cpp
// Author      : Fakhir Shaheen
// Version     :
// Copyright   : 
// Description : Problem 10 of Project Euler
//============================================================================

#include <iostream>
#include <ctime>
#include <math.h>
#include <string>

using namespace std;

bool IsPrime(unsigned int num){
	if(num < 4) return true;

	for(int i = 3; i < sqrt(num)+1; i+=2){
		if(num % i == 0)
			return false;
	}
	return true;
}

unsigned long SumOfPrimesBelowN(unsigned long N){
	unsigned long sum = 2;

	for(int i = 3; i < N; i+=2){
		if(IsPrime(i))
			sum += i;
	}

	return sum;
}

int main(int argc, char ** args) {

	clock_t begin = clock();

	cout << SumOfPrimesBelowN(2000000) << endl;

	clock_t end = clock();
	double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;

	cout << "Time elapsed: " << elapsed_secs << " seconds" << endl;

	return 0;
}
