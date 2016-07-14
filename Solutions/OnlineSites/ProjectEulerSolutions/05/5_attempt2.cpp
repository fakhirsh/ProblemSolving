//============================================================================
// Name        : 5.cpp
// Author      : Fakhir Shaheen
// Version     :
// Copyright   :
// Description : Problem 5 of Project Euler
//============================================================================

#include <iostream>
#include <ctime>
#include <vector>
#include <math.h>


using namespace std;

// The table method:
// https://en.wikipedia.org/wiki/Least_common_multiple

unsigned int FindLCM(int maxNum){
	unsigned int lcm = 1;
	vector<int> numList;
	// First create an array of all numbers up to 'maxNum'
	for(int i = 1; i <= maxNum; i++){
		numList.push_back(i);
	}

	int k = 2;

	while(k <= maxNum){
		bool atleastOneDivisible = false;

		for(int i = 0; i < numList.size(); i++){
			if(numList[i] % k == 0){
				numList[i] /= k;
				atleastOneDivisible = true;
			}
		}
		if(atleastOneDivisible)
			lcm *= k;

		if(!atleastOneDivisible){
			k++;
		}
	}

	return lcm;
}

int main(int argc, char ** args) {

	clock_t begin = clock();

	cout << FindLCM(10000) << endl;

	clock_t end = clock();
	double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;

	cout << "Time elapsed: " << elapsed_secs << " seconds" << endl;

	return 0;
}
