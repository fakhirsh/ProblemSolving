
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
		int n;
		std::cin >> n;

		if(n < 10)
			std::cout << "What an obedient servant you are!" << std::endl;
		else
			std::cout << -1 << std::endl;
	}

	return 0;
}
