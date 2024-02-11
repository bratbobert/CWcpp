#include <iostream>
#include <string>

int main() {
    string** sstring = new string * [4];
    for (int i = 0; i < 4; ++i) {
        sstring[i] = new string[4];
        sstring[i][0] = "m";
        sstring[i][1] = "a";
        sstring[i][2] = "r";
        sstring[i][3] = "k";
    }


    for (int i = 0; i < 4; ++i) {
        delete[] sstring[i];
    }
    delete[] sstring;

    return 0;
}
