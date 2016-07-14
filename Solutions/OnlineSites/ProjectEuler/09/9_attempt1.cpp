//============================================================================
// Name        : 9.cpp
// Author      : Fakhir Shaheen
// Version     :
// Copyright   : 
// Description : Problem 9 of Project Euler
//============================================================================

#include <iostream>
#include <ctime>
#include <math.h>
#include <string>

using namespace std;

// THIS IS ABSOLUTE CRAP ALGORITHM. 
//  CRAP CRAP CRAP CRAP CRAP CRAP 
//   PLEASE IMPROVE FOR LARGE 'NUM'

long ProductOfTriplet(int NUM){
	for(int i = 1; i < NUM; i++){
		for(int j = i; j < NUM; j++){
			for(int k = j; k < NUM; k++){
				if(i + j + k == NUM){
					if(i*i + j*j == k*k){
						return i * j * k;
					}
				}
			}
		}
	}
}

int main(int argc, char ** args) {

	clock_t begin = clock();

	cout << ProductOfTriplet(1000) << endl;

	clock_t end = clock();
	double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;

	cout << "Time elapsed: " << elapsed_secs << " seconds" << endl;

	return 0;
}
