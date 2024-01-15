#include <iostream>
using namespace std;

class Student {
private:
	string name;
	int age;
public:
	Student(string name, int age) {
		this->age = age;
		this->name = name;

	}
	void show() {
		cout << "name - " << name << ". " << "age - " << age << endl;
	}
};


int main() {
	Student st1("Gosha", 12);
	st1.show();


}