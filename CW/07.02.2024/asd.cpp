#include <iostream>
#include "FileReader.h"
#include "Windows.h"
#include "Student.h"
using namespace std;




int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	/*FileReader fr;
	Lines lines = fr.read("someStudents.xml");
	string* array = lines.getArray();
	for (int i = 0; i < lines.getCountString(); i++) {
		cout << array[i] << endl;
	}*/

	FileReader fr;
	Lines lines = fr.read("someStudents.xml");
	Lines line(lines.getArray()[0], ';');
	Student st(line);
	st.showInfo();

}