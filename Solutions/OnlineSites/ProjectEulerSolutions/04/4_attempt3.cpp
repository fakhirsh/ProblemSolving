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


unsigned long GetLargestPalindome(int numDigits){
	unsigned long max = 0;
	unsigned long product = 0;

	unsigned long LOWER_LIMIT = pow(10, numDigits - 1);
	unsigned long UPPER_LIMIT = pow(10, numDigits) - 1;

	for(unsigned long i = UPPER_LIMIT; i >= LOWER_LIMIT; i--){
		for(unsigned long j = i; j >= LOWER_LIMIT; j--){
			product = i * j;

			if(product <= max)
				break;

			if(IsPalindrome(product)){
				max = product;
			}

		}
	}
	return max;
}

int main(int argc, char ** args) {

	clock_t begin = clock();

	cout << GetLargestPalindome(3) << endl;

	clock_t end = clock();
	double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;

	cout << "Time elapsed: " << elapsed_secs << " seconds" << endl;

	return 0;
}
