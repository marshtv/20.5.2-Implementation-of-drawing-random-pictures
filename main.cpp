#include <fstream>
#include <iostream>
#include <cstdlib>

int main() {
	int row, column;
	std::cout << "Input size of picture (width/height):" << std::endl;
	std::cin >> row >> column;
	std::ofstream pic_file("F:\\__C++\\Skillbox\\20\\20.5.2 Implementation of drawing random pictures\\Files\\pic.txt");
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < column; ++j) {
			pic_file << std::rand() % 2;
		}
		pic_file << std::endl;
	}

	pic_file.close();
}
