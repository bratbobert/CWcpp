#include <iostream>
using namespace std;

class ConvertCurrency {
private:
    double rub;
    double eur;
    double usd;

public:
    ConvertCurrency(double rub, double eur, double usd) {
        this->rub = rub;
        this->eur = eur;
        this->usd = usd;
    }

    void rubToEur() {
        eur = rub / 98.11;
    }

    void eurToRub() {
        rub = eur * 98.11;
    }

    void rubToUsd() {
        usd = rub / 95.5;
    }

    void usdToRub() {
        rub = usd * 95.5;
    }

    void eurToUsd() {
        usd = eur * 1.11;
    }

    void usdToEur() {
        eur = usd / 1.11;
    }

    void show() {
        cout << rub << " - rub \n" << eur << " - eur \n" << usd << " - usd \n" << "\n";
    }
};

/*class ConvertCurrencyV2 {
private:
    double rub;
    double eur;
    double usd;

public:
    ConvertCurrencyV2() : rub(540), eur(300), usd(100) {}

    double eurToRub(double eur) {
        return eur * 98.11;
    }

    double eurToUsd(double eur) {
        return eur * 1.11;
    }

    void show() {
        cout << rub << "\n" << usd << "\n" << eur << "\n";
    }
};*/

int main() {
    ConvertCurrency rubwallet(530, 0, 0);
    rubwallet.rubToEur();
    rubwallet.rubToUsd();
    rubwallet.show();

    /*ConvertCurrencyV2 eurwallet;
    eurwallet.eurToRub(550);
    eurwallet.eurToUsd(420);             //maybe fix, potom
    eurwallet.show();*/   

    //etc
}
