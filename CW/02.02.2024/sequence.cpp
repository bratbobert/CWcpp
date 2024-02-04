#include <iostream>
#include <string>
using namespace std;

class House {
protected:
    string materialWall;
    string color;
    int floors;
    bool door;
    bool windows;

public:
    House(string materialWall, string color, int floors, bool door) :
        materialWall(materialWall), color(color), floors(floors), door(door), windows(false) {}

    void openDoor() {
        if (!door) {
            cout << "Door has been opened" << endl;
            door = true;
        }
        else {
            cout << "Door is already open" << endl;
        }
    }

    void closeDoor() {
        if (door) {
            cout << "Door has been closed" << endl;
            door = false;
        }
        else {
            cout << "Door is already closed" << endl;
        }
    }

    void setColor(string color) {
        this->color = color;
    }

    void setFloors(int floors) {
        this->floors = floors;
    }

    void setMaterialWall(string materialWall) {
        this->materialWall = materialWall;
    }
};

class HouseWithGarage : public House {
private:
    bool garage;

public:
    HouseWithGarage(string materialWall, string color, int floors, bool door, bool garage) :
        House(materialWall, color, floors, door), garage(garage) {}

    void openGarage() {
        if (!garage) {
            cout << "Garage has been opened" << endl;
            garage = true;
        }
        else {
            cout << "Garage is open" << endl;
        }
    }

    void closeGarage() {
        if (garage) {
            cout << "Garage has been closed" << endl;
            garage = false;
        }
        else {
            cout << "Garage is closed" << endl;
        }
    }
};

class HouseWithPool : public House {
private:
    bool pool;

public:
    HouseWithPool(string materialWall, string color, int floors, bool door, bool pool) :
        House(materialWall, color, floors, door), pool(pool) {}

    void openPool() {
        if (!pool) {
            cout << "Pool has been opened" << endl;
            pool = true;
        }
        else {
            cout << "Pool is open" << endl;
        }
    }

    void closePool() {
        if (pool) {
            cout << "Pool has been closed" << endl;
            pool = false;
        }
        else {
            cout << "Pool is already closed" << endl;
        }
    } 
};

class HouseWithGarden : public HouseWithPool {
private:
    string garden;
public:
    HouseWithGarden(string materialWall, string color, int floors, bool door, string garden) 
      : HouseWithPool(materialWall, color, floors, door, false), garden(garden) {}

    void waterGarden(string newGarden) {
        this->garden = newGarden;
    }
    string toString() {
		return "Material Wall: " + materialWall + "\nColor: " + color + "\nFloors: " + to_string(floors) + "\nDoor: " + to_string(door) + "\nGarden: " + garden;
    }
};

class HouseWithgarageAndPool : public HouseWithPool, public HouseWithPool {
private:
    

};

int main() {
    HouseWithGarage myHouseWithGarage("Brick", "Red", 2, 0, 0);
    myHouseWithGarage.openGarage();
    myHouseWithGarage.closeGarage();

    HouseWithPool myHouseWithPool("Wood", "Blue", 1, 0, 0);
    myHouseWithPool.openPool();
    myHouseWithPool.closePool();

	HouseWithGarden myHouseWithGarden("Brinch", "Yellow", 3, 0, "Garden");
    myHouseWithGarden.waterGarden("New Garden");

    return 0;
}