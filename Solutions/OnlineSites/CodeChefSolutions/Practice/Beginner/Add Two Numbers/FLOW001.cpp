
#include <iostream>
#include <ctime>
#include <math.h>
#include <string>
#include <iomanip>
#include <vector>

int main(int argc, char ** args) {

	//clock_t begin = clock();

	int t;

	std::cin >> t;

	for(int i = 0; i < t; i++){
		int a, b;
		std::cin >> a;
		std::cin >> b;

		std::cout << a+b << std::endl;
	}


	//clock_t end = clock();
	//double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
	//cout << "Time elapsed: " << elapsed_secs << " seconds" << endl;

	return 0;
}
