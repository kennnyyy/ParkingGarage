#include <cstdlib>
#include <string>
#include <iostream>
#include <unistd.h>

using namespace std;

enum ConfirmFlags {
    no = 0,
    yes = 1,
};

class CheckOut {

public:

    void handle(string input) {
        if (input.length() != 10) {
            cout << "Error: Must be a 10-digit number!" << endl;
            return;
        }
        if (!isDigits(input)) {
            cout << "Error: Number must contain only digits!" << endl;
            return;
        }
        if (!isNew(input)) {
            cout << "Error: Number not recognized!" << endl;
            return;
        }
        return handleValidCheckOut(input);
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

	void handleValidCheckOut(string input) {    // return receipt information
		cout << "Successful Check-Out" << endl;
	}

}; 

int main() {
	CheckOut leaving;
	string input;
	while (true) {
	    cout << "Enter your phone number: ";
		cin >> input;
		leaving.handle(input);
	}
	return 0;
}
