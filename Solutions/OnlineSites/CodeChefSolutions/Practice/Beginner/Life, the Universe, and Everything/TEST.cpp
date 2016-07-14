
#include <iostream>
#include <ctime>
#include <math.h>
#include <string>

using namespace std;


int main(int argc, char ** args) {

	//clock_t begin = clock();

	int input;
	while(true){
		cin >> input;
		if(input == 42)
			break;
		cout << input << endl;
	}

	//clock_t end = clock();
	//double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
	//cout << "Time elapsed: " << elapsed_secs << " seconds" << endl;

	return 0;
}
