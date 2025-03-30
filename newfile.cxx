#include <iostream>
#include <string>

using namespace std;

int main(){
	string word;
	cout << "Enter a term: ";
	cin >> word;
	if (word == "hardware"){
		cout << "Physical Parts." << endl;
	}t
	else if (word == "software"){
		cout << "programs" << endl;
	}
	else if (word == "cache"){
		cout << "quick memory" << endl;
	}
	else if (word == "OS"){
		cout << "manages system" << endl;
	}
	else if (word == "internet"){
		cout << "global network" << endl;
	}
	else if (word == "cloud"){
		cout << "online storage" << endl;
	}
	else if (word == "fire wall"){
		cout << "block threats" << endl;
	}
	else if (word == "cybersecurity"){
		cout << "digital protection" << endl;
	}
	else if (word == "database"){
		cout << "storage data" << endl;
	}
	else if (word == "algorithm"){
		cout << "solving steps" << endl;
	}
	else if (word == "programming"){
		cout << "writing code" << endl;
	}
	else if (word == "coding"){
		cout << "software commands" << endl;
	}
	else if (word == "debugging"){
		cout << "fixing error" << endl;
	}
	else if (word == "incryption"){
		cout << "securing data" << endl;
	}
	else if (word == "AI"){
		cout << "smart machines" << endl;
	}
	else if (word == "machine learning"){
		cout << "AI learning" << endl;
	}
	else if (word == "server"){
		cout << "provide server" << endl;
	}
	else if (word == "bios"){
		cout << "boots system" << endl;
	}
	else if (word == "peripheral"){
		cout << "external device" << endl;
	}
	else if (word == "BIT"){
		cout << "smallest data" << endl;
	}
	else if (word == "BYTE"){
		cout << "8 bites" << endl;
	}
	else if (word == "HDD"){
		cout << "data storage" << endl;
	}
	else if (word == "SDD"){
		cout << "fast storage" << endl;
	}
	else if (word == "GPU"){
		cout << "graphics" << endl;
	}
	else if (word == "CPU"){
		cout << "executes instruction" << endl;
	}
	else if (word == "network"){
		cout << "connected computer" << endl;
	}
	else{
		cout << "Exit program";
	}
	return 0;
}