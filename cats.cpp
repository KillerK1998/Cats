#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;
using std::getline;


int main() {
	class Cat {
	public:
		string name;
		string weight;
		string color;

	};
	string catName = "What is the cat's name?:";
	string catColor = "what color is the cat?:";
	string catWeight = "What is the cat's weight?:";
	Cat cat;
	vector<Cat>cats = {};

	for (int count = 1; count < 5; count++) {
		cout << catName << "\n";
		getline(cin, cat.name);
		cout << catColor << "\n";
		getline(cin, cat.color);
		cout << catWeight << "\n";
		getline(cin, cat.weight);
		cats.push_back(cat);

	}
	for (Cat cat : cats) {
		cout << cat.name << "\n";
		cout << cat.color << "\n";
		cout << cat.weight << "\n";
	}
	return 0;
}
