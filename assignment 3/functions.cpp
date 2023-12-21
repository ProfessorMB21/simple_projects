#include "structures.h"


/**
* toFile_flights - Writes flight data to a file
* 
* @fname: file name
* @flight: the flight object whose data to write to the file
* @size: number of flights to write
* 
* @return: void
*/
void toFile_flights(const char* fname, Flight_t* flights, int size) {
	std::ofstream file(fname, APPND | WRT | _BIN_);
	if (file.is_open()) {
		for (int i = 0; i < size; i++) {
			file.write((const char*)(flights + i), sizeof(Flight_t));
			std::cout << std::endl;
		}
		file.close();
	}
}

void toFile_flights(const char* fname, Flight_t* flight) {
	std::ofstream file(fname, APPND | WRT | _BIN_);
	if (file.is_open()) {
		file.write((const char*)(flight), sizeof(Flight_t));
		std::cout << std::endl;

		file.close();
	}
}


template <typename T> 
void toFile(const char* filename, T* type_name, int size) {
	std::ofstream file(filename, APPND | WRT | _BIN_);
	if (!file.is_open())
		throw "Can't open file for processing!\n";

	for (int i = 0; i < size; i++) {
		file.write((const char*)(T + i), sizeof(T));
		std::cout << std::endl;
	}
	file.close();
}

template <typename T>
void toFile(const char* filename, T* type_name) {
	std::ofstream file(filename, APPND | WRT | _BIN_);
	if (!file.is_open())
		throw "Can't open file for processing!\n";

	file.write((const char*)(T), sizeof(T));
	std::cout << std::endl;

	file.close();
}

