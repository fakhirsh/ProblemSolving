//============================================================================
// Name        : 12.cpp
// Author      : Fakhir Shaheen
// Version     :
// Copyright   : 
// Description : Problem 12 of Project Euler
//============================================================================

#include <iostream>
#include <ctime>
#include <math.h>
#include <string>

using namespace std;

unsigned long GetNthTriangleNo(int N){
	return N*(N+1)/2;
}

int NumberOfFactors(unsigned long num){
	int count = 0;
	for(unsigned long i = 1; i <= num; i++){
		if(num % i == 0)
			count++;
	}
	return count;
}

// WAAYYYY TOO SLOPPY
//  GETS STUCK FOR LARGE VALUES
//  SUCH AS 300....
// FIND A BETTER ALGO PLEASE

unsigned long FirstTriNumWithOverKFactors(int k){
	for(int i = 1; ; i++){
		unsigned long tnum = GetNthTriangleNo(i);
		if(NumberOfFactors(tnum) > k)
			return tnum;
	}
	return -1;
}

int main(int argc, char ** args) {

	clock_t begin = clock();


// TOOOOOOOOOOOOOOO  SLLLOOOOOOOOOOOOOOWWWWWWWWWWWWWWWW

	cout << FirstTriNumWithOverKFactors(500) << endl;


	clock_t end = clock();
	double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;

	cout << "Time elapsed: " << elapsed_secs << " seconds" << endl;

	return 0;
}
