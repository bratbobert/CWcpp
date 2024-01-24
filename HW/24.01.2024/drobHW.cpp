#include <iostream>
using namespace std;

class Drob {
private:
	int ch;
	int zn;
public:
	Drob(int& ch, int& zn) {
		this->ch = ch;;
		this->zn = zn;
	}
	int getCh() {
		return ch;
	}
	int getZn() {
		return zn;
	}
	void NewDrobSet(int newCh, int newZn) {
		Drob newDrob(newCh, newZn);
		return newDrob;
	}

	///soon, im tired
};

int main() {
	int ch, zn;
	cin >> ch, zn;
	Drob num1(ch, zn);


	/*if (ch > zn) {
	int celoe = ch / zn;
	int ost = ch % zn;
	*/

}