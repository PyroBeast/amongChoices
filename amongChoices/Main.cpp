#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	string choice1, choice2, choice3;
	bool conditions = false;
		cout << "You wake up in a cell. No memory of who you are or were exist" <<
		endl << "in your mind. You see that there is a door of bars and a guard." << endl;

		cout << "Action: ";

		getline(cin, choice1);
		transform(choice1.begin(), choice1.end(), choice1.begin(), ::toupper);
		if (choice1 == "DOOR" || choice1 == "GUARD" || choice1 == "MOVE" && conditions == false){
			cout << "You failed to realize moving would trigger a trap. You have died.";
			cin.ignore();
		}
		else if (choice1 == "LOOK" || choice1 == "THINK") {
			conditions = true;
			cout << endl << endl <<"There is a wire right in front of your foot." <<
				endl << "You now know to avoid it." << endl << endl;

			cout << "You wake up in a cell. No memory of who you are or were exist" <<
				endl << "in your mind. You see that there is a door of bars and a guard." << endl;

			cout << "Action: ";

			getline(cin, choice1);
			transform(choice1.begin(), choice1.end(), choice1.begin(), ::toupper);
			if (choice1 == "DOOR" || choice1 == "GUARD" || choice1 == "MOVE" && conditions == false){
				cout << "You failed to realize moving would trigger a trap. You have died.";
				cin.ignore();
			}
			if (choice1 == "DOOR" || choice1 == "GUARD" || choice1 == "MOVE" && conditions == true){
				cout << "You move toward the door while avoiding the trap. There is a horrid stench in the air.";
				cin.ignore();
			}
		return 0;
	}


	/*
	cout << "Favorite Console? (Note - Valid = Xbox, Playstation and DS work):\n";
	getline(cin, choice); //Input of "choice"
	cout << endl << "Your choice of console - " << choice << endl;
	transform(choice.begin(), choice.end(), choice.begin(), ::toupper); //Convert choice to uppercase to avoid case sensitive errors.
	if (choice == "XBOX" || choice == "PLAYSTATION" || choice == "DS"){
		cout << "Valid console.";
		cin.ignore();
	}
	else{
		cout << "Invalid Console";
		cin.ignore();
	}
	*/
	return 0;
}
