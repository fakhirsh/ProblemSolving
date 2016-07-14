
#include <iostream>
#include <ctime>
#include <math.h>
#include <string>
#include <iomanip>

int main(int argc, char ** args) {

	//clock_t begin = clock();

	int n, k, inputNum, count = 0;

	std::cin >> n;
	std::cin >> k;

	for(int i = 0; i < n; i++){
		std::cin >> inputNum;
		if(inputNum % k == 0)
			count++;
	}

	std::cout << count;

	//clock_t end = clock();
	//double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
	//cout << "Time elapsed: " << elapsed_secs << " seconds" << endl;

	return 0;
}
