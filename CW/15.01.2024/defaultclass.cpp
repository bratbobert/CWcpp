#include <iostream>
using namespace std;

class Drob {
private:
	int num;
	int denum;

public:
	Drob(int num, int denum) {
		this->num = num;
		this->denum = denum;
	}
	void show() {
		cout << num << "/" << denum;
	}


};

class Stb {
private:
	string grp;
	string name;
	float avg;

public:
	Stb(string grp, string name, float avg) {
		this->grp = grp;
		this->name = name;
		this->avg = avg;
	}
	void show() {
		cout << grp << " " << name << avg;
	}

	string getStatus() {
		if (avg > 2.8) return "ABC";
		else return "CBA";
	}
}; 

class Brod {
private:
	int num;
	int denum;
	int total = 0;

public:
	Brod(int num, int denum) {
		total = num / denum;
		this->num = num %= denum;
		this->denum = denum;
	}
	void show() {
		cout << total << " " << num << "/" << denum;
	}

};


int main() {

	Drob figure(2, 5);
	figure.show();
	cout << endl;
	
	Stb st1("25", "Maga", 2.8);
	st1.show();
	cout << st1.getStatus() << endl;
	
	Brod num1(5, 2);
	Brod num2(2, 5);
	num1.show();
	cout << " -- ";
	num2.show();
}
