#include <iostream>
#include <string.h>
#include <string>
#define random(a,b) a+rand()%(b+1-a)
using namespace std;

const int countnames = 7;
const string names[] = { "vafel", "ogurec", "notashka", "katarina", "lera", "mamaev", "dolmat" };

class Student {
	static int id;
	int UniqId;
	string name;
	int* marks = nullptr;
public:
	Student() {
		name = names[random(0, countnames - 1)];
		UniqId = id++;

	}
	void showInfo() {
	                         //asdasd
	}

};

int Student::id = 0;

struct GroupName {
	static int num;
	static char alpha;
public:
	static string getUniqNameGroup() {
		if (num == 3) return "_VOID_";
		int numPrev = num;
		char alphaPrev = alpha;
		if (alpha == 'Д') {
			alpha = 'A';
			num += 1;
		}
		else alpha++;

		return to_string(numPrev) + alphaPrev;
	}
};

int GroupName::num = 1;
char GroupName::alpha = 'А';

class Group {
	string UniqId;
	Student* students;
public:
	Group() {
		UniqId = GroupName::getUniqNameGroup();
		if (UniqId == "_VOID_") {
			cout << " limit of groups reached";
		}
	}
	void showInfo() {
		if (UniqId != "")cout << UniqId << endl;
		for (int i = 0; i < countStudents; i + ) {
			students[i].showInfo();
		}
	}
	void addStudents() {
		if (countStudents == 5) { 
			cout << "limit of students reached2_";
			return false; 
		}
		Student* students = new Student[countStudents + 1];
		for (int i = 0; i < countStudents; i++) {
			buf[i] = students[i];
		}
		buf[countStudents++] = st;
		delete[] students;
		students = buf;
};

int main() {
	Group* groups = new Group[7];
	for (int i = 0; i < 10; i++) {
		Student st;
		for (; groups[random(0, countGroups - 1)].addStudent(st); ; ) {

	}
	for(int i =0; i < 10;)
	return 0;

}