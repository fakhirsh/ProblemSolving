
#include <iostream>
#include <ctime>
#include <math.h>
#include <string>
#include <iomanip>
#include <vector>

unsigned long Factorial(int n){
	unsigned long f = 1;
	for(int i = 1; i <= n; i++){
		f *= i;
	}
	return f;
}

int main(int argc, char ** args) {

	unsigned long t;

	std::cin >> t;

	for(int i = 0; i < t; i++){
		int n;
		std::cin >> n;
		std::cout << Factorial(n) << std::endl;
	}

	return 0;
}
