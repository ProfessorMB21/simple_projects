#pragma once
#ifndef _STRUCTURES_H
#define _STRUCTURES_H

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>

#define MAX_ROUTES 10

#define _BIN_	std::ios_base::binary
#define RD		std::ios_base::in
#define WRT		std::ios_base::out
#define APPND	std::ios_base::app

struct Depo {
	int bus_id;
	char* bus_type;
	char* route_name;
	char* streets;
};

typedef struct Worker {
	char* fullname;
	unsigned int age;
	int yearOfWork;
	char* residence_addr;
	char* profession;
} Worker_t;

/**
* struct Airplane - an Airplane struct to represent a flight
* 
* flight_number: the flight's number
* carrier_name: also known as the type of flight
* flight_dest: flight destination
* route: flight's route from point of deparuture to destination
* 
*/
typedef struct Airplane {
	int flight_number;
	char *carrier_name;
	char *flight_dest;
	char *routes = new char[MAX_ROUTES]; // a flight can only have a max of 10 different routes

	void get_flights_by_type(char* type, char*& flights) {
		delete[](flights);
		int i = 0;
		if (type) {
			for (; i < MAX_ROUTES; i++) {
				flights[i] = this->routes[i];
			}
		}
	}
	void flight_init(Flight_t*& flight, int flight_number, char type[], char dest[], char route[]) {
		this->flight_number = flight_number;
		this->carrier_name = type;
		this->flight_dest = dest;
		this->routes = route;
	}

} Flight_t;

//void toFile_flights(const char* fname, Flight_t *flight);
//void toFile_flights(const char* fname, Flight_t* flight, int size);

template <typename T>
void toFile(const char* filename, T* type_name, int size);

template <typename T>
void toFile(const char* filename, T* type_name);


/**
* Airplane struct
* flight num
* flight type
* 
* route name (departure/dest of flight) 
* algo on the route
* display on flights of a given type
*/

#endif // _STRUCTURES_H
