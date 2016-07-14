//============================================================================
// Name        : 5.cpp
// Author      : Fakhir Shaheen
// Version     :
// Copyright   : 
// Description : Problem 5 of Project Euler
//============================================================================

#include <iostream>
#include <ctime>
#include <math.h>

using namespace std;

bool CheckDivision(unsigned long num, int k){
	for(int i = 1; i <= k; i++){
		if(num % i != 0)
			return false;
	}
	return true;
}

int main(int argc, char ** args) {

	clock_t begin = clock();

	for(unsigned long i = 1; ; i++){
		if(CheckDivision(i, 20)){
			cout << i << endl;
			break;
		}
	}

	clock_t end = clock();
	double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;

	cout << "Time elapsed: " << elapsed_secs << " seconds" << endl;

	return 0;
}

