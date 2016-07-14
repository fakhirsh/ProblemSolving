
#include <iostream>
#include <ctime>
#include <math.h>
#include <string>
#include <iomanip>
#include <vector>

int SumOfDigits(int num){
	int sum = 0;

	while(num > 0){
		int d = num % 10;
		sum += d;
		num /= 10;
	}

	return sum;
}

int main(int argc, char ** args) {

	//clock_t begin = clock();

	int t, A, B;

	std::cin >> t;

	for(int i = 0; i < t; i++){
		std::cin >> A;
		std::cin >> B;
		std::cout << A % B << std::endl;
	}

	//clock_t end = clock();
	//double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
	//cout << "Time elapsed: " << elapsed_secs << " seconds" << endl;

	return 0;
}
