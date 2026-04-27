

/*A namespace is used to group related variables and functions
and to avoid name conflicts when the same names are used in different parts of a program*/

#include <iostream>
using namespace std;

// First namespace
namespace SectionA {
int value = 10;

void display() {
	cout << "SectionA value = " << value << endl;
}
}

// Second namespace
namespace SectionB {
int value = 20;

void display() {
	cout << "SectionB value = " << value << endl;
}
}

int main() {
	// Accessing variables and functions using scope resolution
	cout << "Accessing SectionA:" << endl;
	cout << SectionA::value << endl;
	SectionA::display();

	cout << "\nAccessing SectionB:" << endl;
	cout << SectionB::value << endl;
	SectionB::display();

	return 0;
}
