
#include <iostream>
#include <ctime>
#include <math.h>
#include <string>
#include <iomanip>
#include <vector>

void Swap(int & a, int & b){
	int t = b;
	b = a;
	a = t;
}

int main(int argc, char ** args) {

	unsigned long t;

	std::cin >> t;

	for(int i = 0; i < t; i++){
		int A, B, C, k;
		std::cin >> A;
		std::cin >> B;
		std::cin >> C;

		if(A > B) Swap(A,B);
		if(A > C) Swap(A,C);
		if(B > C) Swap(B,C);

		std::cout << B << std::endl;
	}

	return 0;
}
