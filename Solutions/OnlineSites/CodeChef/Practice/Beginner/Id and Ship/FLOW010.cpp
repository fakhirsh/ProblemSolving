
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
		char c;

		std::cin >> c;

		switch(c){
		case 'b':
		case 'B':
			std::cout << "BattleShip" << std::endl;
			break;
		case 'c':
		case 'C':
			std::cout << "Cruiser" << std::endl;
			break;
		case 'd':
		case 'D':
			std::cout << "Destroyer" << std::endl;
			break;
		case 'f':
		case 'F':
			std::cout << "Frigate" << std::endl;
			break;
		default:
			break;
		}
	}

	return 0;
}
