
#include <iostream>
#include <ctime>
#include <math.h>
#include <string>
#include <iomanip>
#include <vector>

bool IsPrime(int num){
	if(num <= 1) return false;
	if(num <= 3) return true;
	if(num == 4) return false;

	for(int i = 5; i < num; i+=2){
		if(num % i == 0) return false;
	}
	return true;
}

int main(int argc, char ** args) {

	unsigned long t;

	std::cin >> t;

	for(int i = 0; i < t; i++){
		int n;
		std::cin >> n;

		if(IsPrime(n))
			std::cout << "yes" << std::endl;
		else
			std::cout << "no" << std::endl;
	}

	return 0;
}
