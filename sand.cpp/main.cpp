#include <iostream>
using namespace std;

int DemoConsoleOutput();

int main() {
	//cout << "Hello World!" << endl;
	//<< std::endl
	return DemoConsoleOutput();
}

int DemoConsoleOutput() {
	cout << "This is a simple string literal" << endl;
	cout << "Writing number fie: " << 5 << endl;
	cout << "Perfoming division 10 / 5 = " << 10 / 5 << endl;
	cout << "Pi when approximated is 22 / 7 =" << 22 / 7 << endl;
	cout << "Pi more accurately is 22 / 7 = " << 22.0 / 7 << endl;

	return 0;
} 

