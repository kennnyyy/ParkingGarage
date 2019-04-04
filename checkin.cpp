#include <cstdlib>
#include <string>
#include <iostream>
#include <unistd.h>

using namespace std;

enum ParkingFlags {
	standard = 1,
	handicapped = 2,
	premium = 3,
};

enum ConfirmFlags {
    no = 0,
    yes = 1,
};

class CheckIn {

public:

    void handle(string input) {
        ParkingFlags flag = getFlag(input);
        switch (flag) {
            case standard: {
                handleStandardParking(input);
            }; break;
            case handicapped: {
                handleHandicappedParking(input);
            }; break;
            case premium: {
                handlePremiumParking(input);
            }; break;
            default: {  // error statements - REPLACE WITH GUI
                if (input.length() != 10) {
                    cout << "Error: Must be a 10-digit number!" << endl;
                    break;
                }
                else if (!isDigits(input)) {
                    cout << "Error: Number must contain only digits!" << endl;
                    break;
                }
                else if (!isNew(input)) {
                    cout << "Error: Number already in use!" << endl;
					break;
                }
                cout << "Restarting..." << endl;
            };
        }
    }

private:

	bool isDigits(string input) {
		for (int i = 0; i < input.length(); i++) {
			if (!isdigit(input[i])) {
				return false;
			}
		}
		return true;
	}
	
	bool isNew(string input) {
	    if (true) { // needs to check the spot database to see if the number is being used
	        return true;
	    }
	    return false;
	}
	
	bool confirmNumber(string input) {
	    int flag;
	    if (isNew(input))
	    {
	        cout << "Please confirm your number:\n" << input << "\n[0]No, [1]Yes" << endl;  // REPLACE WITH GUI
	        while (true) {
	            cin >> flag;
	            if (flag == ConfirmFlags::no) {
	                return false;
	            }
	            else if (flag == ConfirmFlags::yes) {
	                return true;
	            }
	        }
	    }
	}

	ParkingFlags getFlag(string input) {
	    int flag;
        if (input.length() == 10) {
			if (isDigits(input)) {
			    if (confirmNumber(input)) {
			        cout << "PARKING OPTIONS\n---------------\n[1]Standard, [2]Handicapped, [3]Premium" << endl;    // REPLACE WITH GUI
			        cin >> flag;
			        if (to_string(flag).length() == 1) {
			            if (flag == ParkingFlags::standard) {
			               return ParkingFlags::standard;
			            }
			            else if (flag == ParkingFlags::handicapped) {
			            	return ParkingFlags::handicapped;
			            }
			            else if (flag == ParkingFlags::premium) {
			            	return ParkingFlags::premium;
			            }
			        }
			    }
			}
		}
	}

	void handleStandardParking(string input) {
        cout << "SPOT TAKES: " << input << " CASE: Standard" << endl;
	}
	
	void handleHandicappedParking(string input) {
        cout << "SPOT TAKES: " << input << " CASE: Handicapped" << endl;
	}
	
	void handlePremiumParking(string input) {
        cout << "SPOT TAKES: " << input << " CASE: Premium" << endl;
	}
};

int main() {
	CheckIn parking;
	string input;
	while (true) {
	    cout << "Enter your phone number: ";
		cin >> input;
		parking.handle(input);
	}
	return 0;
}