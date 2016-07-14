
#include <iostream>
#include <ctime>
#include <math.h>
#include <string>
#include <iomanip>
#include <vector>

int CountDigits(int num, int digit){
	int count = 0;

	while(num > 0){
		int t = num % 10;
		if(t == digit){
			count++;
		}
		num = num / 10;
	}
	return count;
}

int main(int argc, char ** args) {

	//clock_t begin = clock();

	int t, n;

	std::cin >> t;

	for(int i = 0; i < t; i++){
		std::cin >> n;
		std::cout << CountDigits(n, 4) << std::endl;
	}

	//clock_t end = clock();
	//double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
	//cout << "Time elapsed: " << elapsed_secs << " seconds" << endl;

	return 0;
}
