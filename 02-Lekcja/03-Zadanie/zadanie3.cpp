#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a, b;

    cout << "Podaj dwie liczby rzeczywiste: ";
    cin >> a >> b;

    cout << fixed << setprecision(2);
    cout << "Suma: " << a + b << endl;
    cout << "Roznica: " << a - b << endl;
    cout << "Iloczyn: " << a * b << endl;

    if (b != 0.0) {
        cout << "Iloraz: " << a / b << endl;
    } else {
        cout << "Nie mozna dzielic przez zero." << endl;
    }

    return 0;
}
