#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string imie;
    int wiek;
    double wzrost;

    cout << "Podaj imi: ";
    cin >> imie;

    cout << "Podaj wiek: ";
    cin >> wiek;

    cout << "Podaj wzrost w metrach, np. 1.75: ";
    cin >> wzrost;

    cout << imie << endl;
    cout << wiek << endl;
    cout << fixed << setprecision(2) << wzrost << endl;

    return 0;
}

