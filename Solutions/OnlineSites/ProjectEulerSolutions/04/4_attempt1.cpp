//============================================================================
// Name        : 4.cpp
// Author      : Fakhir Shaheen
// Version     :
// Copyright   : 
// Description : Problem 4 of Project Euler
//============================================================================

#include <iostream>
#include <ctime>
#include <math.h>

using namespace std;

bool IsPalindrome(unsigned long num){

	unsigned int originalNum = num;
	unsigned int revNum = 0;

	while(num > 0){
		revNum = revNum*10 + num % 10;
		num = num / 10;
	}

	if(revNum == originalNum)
		return true;
	else
		return false;
}

int main(int argc, char ** args) {

	clock_t begin = clock();

	unsigned long max = 0;
	unsigned long product = 0;

	for(unsigned long i = 100; i < 999; i++){
		for(unsigned long j = i; j < 999; j++){
			product = i * j;
			if(product > max){
				if(IsPalindrome(product))
					max = product;
			}
		}
	}

	cout << max << endl;

	clock_t end = clock();
	double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;

	cout << "Time elapsed: " << elapsed_secs << " seconds" << endl;

	return 0;
}

