#include <iostream>
#include <vector>
#include <fstream>
#include <time.h>

using namespace std;

vector<string>* getStringFromFile(string name) {
	vector<string> *str = new vector<string>();

	try {
		ifstream file(name);
		string line;

		while (getline(file, line)) {
			str->push_back(line);
		}
	} catch(...) {
		cerr << "ERROR: Cannot open " << name << "." << std::endl;
	}

	return str;
}

int main() {
	srand(time(NULL));

	vector<string> *lines = getStringFromFile("Jokes.txt");

	do {
		system("CLS");
		cout << "Press RETURN for a random git joke." << endl << endl;
		cout << endl << lines->at(rand() % lines->size()) << endl;
	} while (cin.get());

	return 0;
}

