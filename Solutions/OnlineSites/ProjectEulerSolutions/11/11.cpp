//============================================================================
// Name        : 11.cpp
// Author      : Fakhir Shaheen
// Version     :
// Copyright   : 
// Description : Problem 11 of Project Euler
//============================================================================

#include <iostream>
#include <ctime>
#include <math.h>
#include <string>

using namespace std;

const int GRID_SIZE = 20;

int grid[GRID_SIZE][GRID_SIZE] = {
		{8,02,22,97,38,15,0,40,0,75,04,05,07,78,52,12,50,77,91,8},
		{49,49,99,40,17,81,18,57,60,87,17,40,98,43,69,48,04,56,62,0},
		{81,49,31,73,55,79,14,29,93,71,40,67,53,88,30,03,49,13,36,65},
		{52,70,95,23,04,60,11,42,69,24,68,56,01,32,56,71,37,02,36,91},
		{22,31,16,71,51,67,63,89,41,92,36,54,22,40,40,28,66,33,13,80},
		{24,47,32,60,99,03,45,02,44,75,33,53,78,36,84,20,35,17,12,50},
		{32,98,81,28,64,23,67,10,26,38,40,67,59,54,70,66,18,38,64,70},
		{67,26,20,68,02,62,12,20,95,63,94,39,63,8,40,91,66,49,94,21},
		{24,55,58,05,66,73,99,26,97,17,78,78,96,83,14,88,34,89,63,72},
		{21,36,23,9,75,0,76,44,20,45,35,14,0,61,33,97,34,31,33,95},
		{78,17,53,28,22,75,31,67,15,94,03,80,04,62,16,14,9,53,56,92},
		{16,39,05,42,96,35,31,47,55,58,88,24,0,17,54,24,36,29,85,57},
		{86,56,0,48,35,71,89,07,05,44,44,37,44,60,21,58,51,54,17,58},
		{19,80,81,68,05,94,47,69,28,73,92,13,86,52,17,77,04,89,55,40},
		{04,52,8,83,97,35,99,16,07,97,57,32,16,26,26,79,33,27,98,66},
		{88,36,68,87,57,62,20,72,03,46,33,67,46,55,12,32,63,93,53,69},
		{04,42,16,73,38,25,39,11,24,94,72,18,8,46,29,32,40,62,76,36},
		{20,69,36,41,72,30,23,88,34,62,99,69,82,67,59,85,74,04,36,16},
		{20,73,35,29,78,31,90,01,74,31,49,71,48,86,81,16,23,57,05,54},
		{01,70,54,71,83,51,54,69,16,92,33,48,61,43,52,01,89,19,67,48}
};

unsigned long GetColumnProductAt(int row, int col, int k){
	unsigned long p = 1;
	for(int r = 0; r < k; r++){
		p = p * grid[row + r][col];
	}
	return p;
}

unsigned long GetRowProductAt(int row, int col, int k){
	unsigned long p = 1;
	for(int c = 0; c < k; c++){
		p = p * grid[row][col + c];
	}
	return p;
}

unsigned long GetLDiagProductAt(int row, int col, int k){
	unsigned long p = 1;
	for(int i = 0; i < k; i++){
		p = p * grid[row + i][col + i];
	}
	return p;
}

unsigned long GetRDiagProductAt(int row, int col, int k){
	unsigned long p = 1;
	for(int i = 0; i < k; i++){
		p = p * grid[row - i][col + i];
	}
	return p;
}
unsigned long FindMaxProduct(int k){
	unsigned long maxProduct = 0;
	unsigned long p = 0;

	for(int r = 0; r < GRID_SIZE - k; r++){
		for(int c = 0; c < GRID_SIZE; c++){
			p = GetColumnProductAt(r,c,k);
			if(p > maxProduct)
				maxProduct = p;
		}
	}

	for(int r = 0; r < GRID_SIZE; r++){
		for(int c = 0; c < GRID_SIZE - k; c++){
			p = GetRowProductAt(r,c,k);
			if(p > maxProduct)
				maxProduct = p;
		}
	}

	for(int r = 0; r < GRID_SIZE - k; r++){
		for(int c = 0; c < GRID_SIZE - k; c++){
			p = GetLDiagProductAt(r,c,k);
			if(p > maxProduct)
				maxProduct = p;
		}
	}

	for(int r = k; r < GRID_SIZE; r++){
		for(int c = 0; c < GRID_SIZE - k; c++){
			p = GetRDiagProductAt(r,c,k);
			if(p > maxProduct)
				maxProduct = p;
		}
	}

	return maxProduct;
}

int main(int argc, char ** args) {

	clock_t begin = clock();

	cout << FindMaxProduct(4) << endl;

	clock_t end = clock();
	double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;

	cout << "Time elapsed: " << elapsed_secs << " seconds" << endl;

	return 0;
}
