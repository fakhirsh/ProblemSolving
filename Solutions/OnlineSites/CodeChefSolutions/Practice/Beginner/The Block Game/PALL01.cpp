
#include <iostream>
#include <ctime>
#include <math.h>
#include <string>
#include <iomanip>
#include <vector>

unsigned long Reverse(unsigned long num){
	unsigned long t = 0;
	while(num > 0){
		t = t*10 + num%10;
		num /= 10;
	}
	return t;
}

bool IsPalindrome(unsigned long num){
	return num == Reverse(num);
}

int main(int argc, char ** args) {

	unsigned long t;

	std::cin >> t;

	for(int i = 0; i < t; i++){
		int N;
		std::cin >> N;

		if(IsPalindrome(N))
			std::cout << "wins" << std::endl;
		else
			std::cout << "losses" << std::endl;
	}

	return 0;
}
