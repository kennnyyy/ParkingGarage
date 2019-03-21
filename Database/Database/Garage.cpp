#include "stdafx.h"
#include "Garage.h"
#include <map>
#include <string>
#include <stdbool.h>


class Garage
{
private:
	int availability;
	std::map<std::string, std::string> PhoneNumbers;
	std::string ParkingLot[3][3][3];

public:
	Garage(int x1, int x2, int x3, int avail) {
		ParkingLot[x1][x2][3];
		availability = avail;

	}

	bool Garage::increment(int floor, int groups) {
		if ((int)(this:ParkingLot[floor][groups][1]) >= this:availability) {
			return false;
		}
		else {
			this:ParkingLot[floor][groups][1] = ((int)(this:ParkingLot[floor][groups][1])++);
		}

	}
	
	int Garage::getNextOpenFloor() {

	}
	int Garage::getNextOpenGroup(int floor) {

	}


	bool Garage::addPhoneNumber() {
		
	}
	//returns if phone number is found or not
	bool Garage::findPhoneNumber() {

	}
	// returns total minutes phone number as spent
	int Garage::removePhoneNumber() {

	}
	//backs up parking lot and phohne numbers in backup.txt 
	bool Garage::backUp() {

	}
	
	//restores data structures based on what is in backup.txt
	bool Garage::restore() {

	}

};


