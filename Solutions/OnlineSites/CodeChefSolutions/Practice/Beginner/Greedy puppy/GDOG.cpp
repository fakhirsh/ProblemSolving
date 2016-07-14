
#include <iostream>
#include <ctime>
#include <math.h>
#include <string>
#include <iomanip>
#include <vector>

int main(int argc, char ** args) {

	unsigned long t;

	std::cin >> t;

	for(int i = 0; i < t; i++){
		int N, K;
		std::cin >> N;
		std::cin >> K;

		int max = 0;
		for(int j = 1; j <= K; j++){
			if(max < N % j){
				max = N % j;
			}
		}
		std::cout << max << std::endl;
	}

	return 0;
}
