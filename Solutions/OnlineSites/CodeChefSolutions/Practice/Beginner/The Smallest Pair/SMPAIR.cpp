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
		int N, K;
 
		std::cin >> N;
 
		std::vector<int> list;
 
		for(int j = 0; j < N; j++){
			int a = 0;
			std::cin >> a;
			list.push_back(a);
		}
 
		list.push_back(5);
		list.push_back(1);
		list.push_back(3);
		list.push_back(4);
 
		unsigned int min = -1;
		for(int j = 0; j < N; j++){
			for(int k = j; k < N; k++){
				if(j != k && min > list[j] + list[k]){
					min = list[j] + list[k];
				}
			}
		}
		std::cout << min << std::endl;
	}
 
	return 0;
}
