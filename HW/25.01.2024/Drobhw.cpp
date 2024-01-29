#include <iostream>
#include <string>
using namespace std;

class Drob {
private:
	string operation;
	int ch;
	int zn;
public:
	Drob(int ch, int zn, string operation){
		this->ch = ch;
		this->zn = zn;
		this->operation = operation;
	}
	
	int getCh() {
		return ch;
	}
	int getZn() {
		return zn;
	}
	string getOper() {
		return operation;
	}

	double CountWithOper(int ch, int zn, string operation) {
		if (operation == "+") {
			return ch + zn;
		}
		else if (operation == "-") {
			return ch - zn;
		}
		else if (operation == "*") {
			return ch * zn;
		}
		else if (operation == "/") {
			return ch / zn;
		}
		else cout << " fatal egor" << endl;
	}

void showDrob() {
		cout << ch << operation << zn << " = ";
	}

void showResult() {
	cout << CountWithOper(ch, zn, operation) << endl;
	}
};

int main() {

	Drob d1(40, 5, "/");
	d1.showDrob();
	d1.showResult();
}