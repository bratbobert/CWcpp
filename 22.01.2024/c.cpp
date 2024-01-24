#include <iostream>

class Drob {
	int num;
	int denum;
public:
	Drob(int num, int denum) {
		this->num = num;
		this->denum = denum;
	}
	Drob /*(void)*/ mult(Drob& drob) { // void mult(int num) { ...///
		return Drob(this->num *= drob.num;
		this->denum *= drob.denum);

		//Drob newDrob(newNum, newDenum);                            /2.0/
		// return newDrob;
	}
};

int main() {

	/*2.0 ->>
		Drob d1(2, 3);
	Drob d2(4, 2);
	Drob d3 = d1.mult(d2);
	Drob d4 = d1 * d2;
	operator * (without Drob&) (((&)))*/

}