
#include <iostream>
#include <ctime>
#include <math.h>
#include <string>
#include <iomanip>
#include <vector>

int main(int argc, char ** args) {

	unsigned long t;
	std::string n;

	std::cin >> t;

	for(int i = 0; i < t; i++){
		std::cin >> n;
		int size = n.size();
		if(size == 1){
			std::cout << n[0] - '0' << std::endl;
		}
		else{
			std::cout << n[0] + n[size-1] - 2 * '0' << std::endl;
		}
	}

	return 0;
}
