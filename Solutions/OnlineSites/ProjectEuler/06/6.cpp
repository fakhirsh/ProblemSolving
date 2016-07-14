//============================================================================
// Name        : 6.cpp
// Author      : Fakhir Shaheen
// Version     :
// Copyright   :
// Description : Problem 6 of Project Euler
//============================================================================

#include <iostream>
#include <ctime>
#include <math.h>

using namespace std;

unsigned long SumOfSquares(int k){
// Find an Optimal Math formula for this one as well !!!
	unsigned long sum = 0;
	for(int i = 1; i <= k; i++){
		sum = sum + i * i;
	}
	return sum;
}

unsigned long SquareOfSums(int k){
	unsigned long sum = k*(k+1)/2;
	return sum * sum;
}

int main(int argc, char ** args) {

	clock_t begin = clock();

	const int NUM = 100;
	cout << SquareOfSums(NUM) - SumOfSquares(NUM) << endl;

	clock_t end = clock();
	double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;

	cout << "Time elapsed: " << elapsed_secs << " seconds" << endl;

	return 0;
}

