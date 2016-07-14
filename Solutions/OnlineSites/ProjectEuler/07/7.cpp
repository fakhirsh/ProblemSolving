//============================================================================
// Name        : 7.cpp
// Author      : Fakhir Shaheen
// Version     :
// Copyright   : 
// Description : Problem 7 of Project Euler
//============================================================================

#include <iostream>
#include <ctime>
#include <math.h>

using namespace std;

bool IsPrime(long num){
	for(int i = 2; i < sqrt(num)+1; i++){
		if(num % i == 0)
			return false;
	}
	return true;
}

long GetNthPrime(int N){

	long prime = 0;
	int i = N;
	int k = 1;
	while(i > 0){
		if(IsPrime(k)){
			i--;
			prime = k;
		}
		k+=2;
	}

	return prime;
}

int main(int argc, char ** args) {

	clock_t begin = clock();

	cout << GetNthPrime(10001) << endl;

	clock_t end = clock();
	double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;

	cout << "Time elapsed: " << elapsed_secs << " seconds" << endl;

	return 0;
}

