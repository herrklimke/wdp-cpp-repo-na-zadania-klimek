#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double liczba;

    cout << "Podaj liczbe rzeczywista: ";
    cin >> liczba;

    cout << fixed;
    cout << setprecision(1) << liczba << endl;
    cout << setprecision(3) << liczba << endl;
    cout << setprecision(5) << liczba << endl;

    return 0;
}
