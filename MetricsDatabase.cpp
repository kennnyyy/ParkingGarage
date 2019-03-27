// Data will be stored in the form of [Phone #, Spot #, Check-in time, check-out time]
#include <iostream>
#include <istream>
#include <fstream>
#include <ctime>
#include <stdio.h>
#include <conio.h>
using namespace std;

// Function declarations
int CheckIn(string phone, string spotNumber);
int CheckOut(string phone);
void SendAndClearFinishedTable();
string CurrentDateTime();
bool IncompleteTableContainsPhone(string phone);
bool CompleteTableContainsPhone(string phone);

string emailToSend = "";

int main() {

	bool running = true;
	while(running){
		string phone="";
		string spot="";
		int checkInOrOut=0;
		int success;
		
		cout << "Are you...\n[0] Checking in\n[1] Checking out\n[2] Exiting" << endl;
		cin >> checkInOrOut;
		
		switch(checkInOrOut) {
			case 0:
				cout << "Enter your phone number." << endl;
				cin >> phone;
				cout << "Enter the section would you like to go to." << endl;
				cin >> spot;
				success = CheckIn(phone, spot);
				if(success == 0) {
					cout << "\nCheck in successful!" << endl;
				} else {
					cout << "\nCheck in unsuccessful." << endl;
				}
				break;
			case 1:
				cout << "Enter your phone number." << endl;
				cin >> phone;
				success = CheckOut(phone);
				if(success == 0) {
					cout << "\nCheck out successful!" << endl;
				} else {
					cout << "\nCheck out unsuccessful." << endl;
				}
				break;
			case 2:
				running = false;
		}
	}
	return 0;
}

// Function definitions
int CheckIn(string phone, string spotNumber = "0") {
	
	// if the phone number is not already associated with an entry
	if(!IncompleteTableContainsPhone(phone)){
		
		// Create entry in incompleteTable.txt
		ofstream incompleteTableStream("IncompleteTable.txt", ios::app);
		incompleteTableStream << phone + ", " + spotNumber + ", " + CurrentDateTime() + "\n";
		incompleteTableStream.close();
		
		return 0;
	} else {
		
		// if the phone number is already associated with an entry
		cout << "Entry associated with that phone number already" << endl;
		
		return 1;
	}
}

int CheckOut(string phone) {
	
	// if there is an entry in the incomplete table associated with the phone number
	if(IncompleteTableContainsPhone(phone)){
		
		// transfer the entry from the incomplete table to the complete table
		ofstream completeTableWrite("CompleteTable.txt", ios::app);
		std::ifstream incompleteTableRead("IncompleteTable.txt", std::ifstream::in);
		string deleteLine;
	
		if(incompleteTableRead.is_open()){
			while(incompleteTableRead.good()){
				std::getline(incompleteTableRead, deleteLine);
				if(deleteLine.substr(0, 10).compare(phone) == 0){   // line is the complete entry in completeTable.txt with that phone number
				
					// transfer the line from IncompleteTable to CompleteTable
					completeTableWrite << deleteLine + ", " + CurrentDateTime() + "\n";
					incompleteTableRead.close();
					completeTableWrite.close();
		
					// delete the line from IncompleteTable
					string line;
					ifstream fin;
					fin.open("IncompleteTable.txt");
					ofstream temp;
					temp.open("temp.txt");
					while(getline(fin, line)){
						if(line != deleteLine){
							temp << line << endl;
						}
					}
					cout << "exited loop" << endl;
					
					temp.close();
					fin.close();
					
					char toDelete[] = "IncompleteTable.txt";
					int removeStatus = remove(toDelete);
					if(removeStatus == 0){
						cout << "File removed." << endl;
					} else {
						cout << "File not removed." << endl;
						perror("Error message ");
						return 1;
					}
					int renameStatus = rename("temp.txt", "IncompleteTable.txt");
					if(renameStatus == 0){
						cout << "Renamed successfully." << endl;
					} else {
						cout << "Rename unsuccessful." << endl;
						perror("Error message ");
						return 1;
					}
					
				}
			}
		}
		
		incompleteTableRead.close();
		completeTableWrite.close();
		return 0;
	} else {
		
		// if there is not an entry in the incomplete table associated with the phone number
		cout << "No entry associated with that phone number" << endl;
		return 1;
	}
}

void SendAndClearCompleteTable() {

}

// Get current date/time, format is YYYY-MM-DD.HH:mm:ss
string CurrentDateTime() {
    time_t now = time(0);
    struct tm tstruct;
    char buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct);

    return buf;
}

bool IncompleteTableContainsPhone(string phone) {
	std::ifstream myFile("IncompleteTable.txt", std::ifstream::in);
	string line;
	
	if(myFile.is_open()){
		while(myFile.good()){
			std::getline(myFile, line);
			if(line.substr(0, 10).compare(phone) == 0){
				return true;
			}
		}
	}
	myFile.close();
	return false;
}

bool CompleteTableContainsPhone(string phone) {
	std::ifstream myFile("CompleteTable.txt", std::ifstream::in);
	string line;
	
	if(myFile.is_open()){
		while(myFile.good()){
			std::getline(myFile, line);
			if(line.substr(0, 10).compare(phone) == 0){
				return true;
			}
		}
	}
	myFile.close();
	return false;
}
