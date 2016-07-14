
#include <iostream>
#include <ctime>
#include <math.h>
#include <string>
#include <iomanip>
#include <vector>

int Max(int a, int b){
	if(a > b)
		return a;
	else
		return b;
}

int main(int argc, char ** args) {

	unsigned long t, A, B;

	std::cin >> t;

	for(int i = 0; i < t; i++){
		std::cin >> A;
		std::cin >> B;
		std::cout << Max(A,B) << " " << A+B << std::endl;
	}

	return 0;
}
