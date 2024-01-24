#include <iostream>
using namespace std;

class Auto {
private:
	string color;
	string model;
	int volume;
	int cost;
public:
	Auto(string color, string model, float volume, int cost) {
		this->color = color;
		this->model = model;
		this->volume = volume;
		this->cost = cost;
	}
	void show() {
        cout << color << ", " << model << ", " << volume << ", " << cost << "." << endl;
	}
    void setColor(string color) {
        this->color = color;
    }
    void setModel(string model) {
        this->model = model;
    }
    void setVolume(float volume) {
        this->volume = volume;
    }
    void setCost(int cost) {
        this->cost = cost;
    }
};


int main() {
    Auto audi("red", "RS7", 3.5, 25999);
    audi.show();

    audi.setColor("blue");
    audi.setModel("A8");
    audi.setVolume(4.0);
    audi.setCost(35000);
    audi.show();

    Auto bmw("gray", "m5f90", 4.0, 23599);
    bmw.show();

    Auto ford("white", "focus", 1.4, 13000);
        ford.show();

}
