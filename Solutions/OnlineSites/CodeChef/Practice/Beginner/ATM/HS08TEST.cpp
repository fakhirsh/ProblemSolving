
#include <iostream>
#include <ctime>
#include <math.h>
#include <string>
#include <iomanip>

int main(int argc, char ** args) {

	//clock_t begin = clock();

	int withdraw = 0;
	float balance = 0;

	std::cin >> withdraw;
	std::cin >> balance;

	if(withdraw % 5 == 0){
		if(withdraw + 0.5 <= balance){
			balance = balance - (withdraw + 0.5);
		}
	}

	std::cout << std::fixed;
	std::cout << std::setprecision(2);
	std::cout << balance;

	//clock_t end = clock();
	//double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
	//cout << "Time elapsed: " << elapsed_secs << " seconds" << endl;

	return 0;
}
