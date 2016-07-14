
#include <iostream>
#include <ctime>
#include <math.h>
#include <string>
#include <iomanip>
#include <vector>

unsigned long ReverseNumber(unsigned long num){
	unsigned long n = 0;
	while(num > 0){
		n = num % 10 + n * 10;
		num /= 10;
	}
	return n;
}

int main(int argc, char ** args) {

	//clock_t begin = clock();

	unsigned long t, n;

	std::cin >> t;

	for(int i = 0; i < t; i++){
		std::cin >> n;
		std::cout << int(sqrt(n)) << std::endl;
	}

	//clock_t end = clock();
	//double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
	//cout << "Time elapsed: " << elapsed_secs << " seconds" << endl;

	return 0;
}
