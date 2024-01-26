#include <iostream>
#include <string>
#define random(a, b) a+rand() % (b - a + 1)
using namespace std;

//only const init 

class Foo {
private:
	int* marks;
	int countMarks;
	int buf;

public:
	Foo(int val) {
		this->buf = val;
		this->marks = nullptr;
		this->countMarks = 0;
	}

	void addMark(int mark) {
		int* newMarks = new int[countMarks + 1];
		for (size_t i = 0; i < countMarks; ++i) {
			newMarks[i] = marks[i];
		}
		newMarks[countMarks++] = mark;
		delete[] marks;
		marks = newMarks;
	}

	void showInfo() {
		cout << " =- " << buf << " marks ";
		for (size_t i = 0; i < countMarks; ++i) {
			cout << marks[i] << " ";
		}
		cout << endl;
	}

	void changeMarkByIndex(int index, int newMark) {
    if (index >= 0) {
        size_t idx = 0;
        while (idx != countMarks && idx != index) {
            ++idx;
        }
        if (idx == index) {
            marks[idx] = newMark;
        }
    }
}
};

/*
class Student; // 4tobi ne rugalsya

class StudentList {
	Student* students = nullptr;
	int countStudents = 0;
public:
	Student(string name) {
		this->name = name;
	}
	string toString() {
		string marksStr = "";
		for (int i = 0; i < countMarks; i++) {
			marksStr = to_string(marks[i]) + " ";
		}
		return " id - " + to_string(id) + " name " + name + " marks - " + marksStr;
	}
	void addMark(int mark) {
		if (mark > 1 && mark < 6) {
			int* buf = new int[countMarks + 1];
			for (int i = 0; i < countMarks; i++) {
				buf[i] = marks[i];
			}
			buf[countMarks] = mark;
			delete[]marks;
			marks = buf;
		}
	}

	void deleteMark(int index) {
		if (countMarks == 0 || index < 0 || index > countMarks - 1)
			return;
		int* buf = new int[countMarks - 1];
		for (int i = 0; i < index; i++)
		{
			buf[i] = marks[i];
		}
		for (int i = index + 1; i < countMarks; i++)
		{
			buf[i - 1] = marks[i];
		}
		delete[]marks;
		marks = buf;
		countMarks--;

		void bestMark(int) {
			int best = 0;
			for (int i = 0; i < countMarks; i++) {
				if (marks[i] > best) {
					best = marks[i];
				}
			}
			return best;
		}

	};


	int Student::id = 0;
}

class Student{
	static int id;
	int uniqId;
	string name = "noname";
	int* marks = nullptr; // by default = nullptr
	int countMarks = 0;
public:
	Student(string name) {
		this->name = name;
	}
	//static void showInfo() {
	//	cout << id;
	//	cout << uniqId;
	//	//fields and methods can be used in instance methods, but cannot use instance fields in static methods
	//}
	string toString() {
		string marksStr = "";
		for (int i = 0; i < countMarks; i++) {
			marksStr = to_string(marks[i])+" ";
		}
		return " id - " + to_string(id) + " name " + name + " marks - " + marksStr;
	}
	void addMark(int mark) {
		if (mark > 1 && mark < 6) {
			int* buf = new int[countMarks + 1];
			for (int i = 0; i < countMarks; i++) {
				buf[i] = marks[i];
			}
			buf[countMarks] = mark;
			delete[]marks;
			marks = buf;
		}
	}

	void deleteMark(int index) {
		if (countMarks == 0 || index < 0 || index > countMarks - 1)
			return;
		int* buf = new int[countMarks - 1];
		for (int i = 0; i < index; i++)
		{
			buf[i] = marks[i];
		}
		for (int i = index + 1; i < countMarks; i++)
		{
			buf[i - 1] = marks[i];
		}
		delete[]marks;
		marks = buf;
		countMarks--;

		void bestMark(int) {
			int best = 0;
			for (int i = 0; i < countMarks; i++) {
				if (marks[i] > best) {
					best = marks[i];
				}
			}
			return best;
		}

	};


	int Student::id = 0;*/

int main() {
	Foo foo(12);
	for (int i = 0; i < 5; i += ) {
		foo.addMark(random(2, 5));
	}
	foo.showInfo();
	Foo foo2(foo);
	foo2.showInfo();
	foo.changeMarkByIndex(2, 123);
	foo.showInfo();
	foo2.showInfo();



	/*Student st1("Pol");
	Student st2("Tom");
	for (int i = 0; i < 10; i++)
	st1.addMark(random(2,5);
	st1.deleteMark(3);
	//Student::id = 0; do not work because it private 
	cout << st1.toString() << endl;
	st1.deleteMark(0);
	cout << st2.toString() << endl;*/

}