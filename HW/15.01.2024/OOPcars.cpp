#include <iostream>
#include <string>
#define reandom (a,b) a+rand
using namespace std;

class Car {
private:            //изначально всё в привате, если не задавать
	string color;
	string model;
	float price;
public:
	Car() {
		cout << "car created"; //конструктор 
	}   
	Car(string color, string model) {
		this->color = color;
		this->model = model;
	}
	Car(string color, string model, float price) :
		Car(color, model) {
		this->price = price;
	}
	void setColor(string color) {
		this->color = color;
	}
	void setModel(string model) {
		this->model = model;
	}
	void setPrice(float price) {
		this->price = price;
	}
	string toString() {
		return "color - " + color + " model - " + model + " price - " + to_string(price);
	}
	string getColor() {
		return color;
	}
	string getModel() {
		return model;
	}
	float getPrice() {
		return price;
	}
};

Car getMinPriceCar(Car& car1, Car& car2) {
	if (car1.getPrice() < car2.getPrice()) {
		return car1;
	}
	else {
		return car2;
	}
}

void changeColor(Car& car) {
	car.setColor("gold");
}

Car* getAllCarsWithColor(Car* cars, int size, string color) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (cars[i].getColor() == color) count++;

	}
	Car* buf = new Car[count];
	for (int i = 0, k = 0; i < size; i++) {
		if (cars[i].getColor() == color) {
			buf[k++] = cars[i];
		}
	}
	return buf;
}
struct Garage {
	Car* cars = nullptr;
	int countCars = 0;
};

Car createCopy(Car car) {    //копия объекта Car& и просто Car будут разными
	return car;
}

//class Student { //massiv iz n-student, random-name, show on screen
//private:
//	const string name;
//	int const ball;
//public:														//NE DODELAL
//	Student(const string name, int const ball) {
//		this->name = name;
//		this->ball = ball;
//	}
//};
class Student {
	string name;
	float mark;
	Student summa(Student& st) {
		//123123213
	}
};
int main() {
	srand(time(NULL));
	int countOfNames = 4;
	string names[] = { "Pol". "Alex". "Sandra". "Joe". "Nekit");
	int countOfStudents = 8;
	Student** st = new Student*[8];                              //ogrizok
	for (int i = 0; i < countOfStudents; i++) {
		st[i] = new Student[random(0, countOfStudents - 1)], random(2, 4) = random(0, 10) * 0.1;
		st[i]->showInfo();
	}

	//Car** cars1 = new Car * [4] {new Car(), new Car(), new Car(), new Car()}; //1st method

	/*Car* cars2 = new Car[4]{ Car("yelow", "opel", 64000),
							 Car("yelow2", "opel2", 40005),
							 Car("yelow3", "opel3", 40400),
							 Car("yelow4", "opel4", 42000) };
	float maxPrice = cars2[0].getPrice();
	int id = 0;
	for (int i = 1; i < 4; i++) {
		if (maxPrice < cars2[i].getPrice()) {
			maxPrice = cars2[i].getPrice();
			id = 1;
		}
	}
	cout << cars2[id].toString();
	cout << "\n\n\n";*/

	//Car* cars3 = new[4] { car("pink", "mamba1", 12006),
	//	car("red", "mamba2", 12060),
	//	car("gray", "mamba3", 12600),
	//	car("red", "mamba4", 12300)}
	//string sameColor = cars3[0].getColor();                             //NE DODELAL
	//int id = 0;
	//for (int i = 1; i < 4; i++) {
	//	if (sameColor == cars[i].getColor()) {
	//		sameColor
	//	}

	//cars[0]->setColor("red", "rc4", 10000); //only color*
	//cars[0]->setModel("rc4");
	//cars[0]->setPrice(10000);

	/*Car car1("blue", "civic");
	car1.setColor("red");
	car1.setModel("model S");
	car1.setPrice(19299);
	cout << car1.toString();
	cout << car1.getColor();
	cout << car1.getPrice();
	cout << car1.toString();
	cout << endl;
	Car car2("gray", "opel", 17300);
	getMinPriceCar(car1, car2).toString();
	changeColor(car1);
	cout << car1.toString();
	Car car3 = createCopy(car2);
	cout << car3.toString();*/


}