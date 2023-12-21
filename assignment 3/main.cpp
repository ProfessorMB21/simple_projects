#include "structures.h"


int main(void) {

	int n;
	
	std::cin >> n;
	Depo* buses = new Depo[n];
	Flight_t* flights = new Flight_t[n];

	for (int i = 0; i < n; i++) {
		flight_init(flight[i]);
	}

	return (0);
}
