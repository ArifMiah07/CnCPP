#include <iostream>
using namespace std;

int main() {
    int a, b, c, ab, bc, ac;

    cout << "Enter three numbers: \n";
    cin >> a >> b >> c;

    // Calculate the products after reading the values
    ab = a * b;
    bc = b * c;
    ac = a * c;

    cout << "Your given three numbers: " << a << " " << b << " " << c << endl;

    if (ab % 2 == 0) {
        cout << "scope 1: |" << ab << " = " << a << " * " << b << "| Number is divisible by 2, " << ab << " / 2 = " << ab / 2 << endl;
    } else if (ab % 3 == 0) {
        cout << "scope 1: |" << ab << " = " << a << " * " << b << "| Number is divisible by 3, " << ab << " / 3 = " << ab / 3 << endl;
    } else if (ab % 5 == 0) {
        cout << "scope 1: |" << ab << " = " << a << " * " << b << "| Number is divisible by 5, " << ab << " / 5 = " << ab / 5 << endl;
    } else {
        cout << "scope 1: |" << ab << " = " << a << " * " << b << "| Number is not divisible by 2, 3, or 5; number is : " << ab << endl;
    }

    if (bc % 2 == 0) {
        cout << "scope 2: |" << bc << " = " << b << " * " << c << "| Number is divisible by 2, " << bc << " / 2 = " << bc / 2 << endl;
    } else if (bc % 3 == 0) {
        cout << "scope 2: |" << bc << " = " << b << " * " << c << "| Number is divisible by 3, " << bc << " / 3 = " << bc / 3 << endl;
    } else if (bc % 5 == 0) {
        cout << "scope 2: |" << bc << " = " << b << " * " << c << "| Number is divisible by 5, " << bc << " / 5 = " << bc / 5 << endl;
    } else {
        cout << "scope 2: |" << bc << " = " << b << " * " << c << "| Number is not divisible by 2, 3, or 5; number is : " << bc << endl;
    }

    if (ac % 2 == 0) {
        cout << "scope 3: |" << ac << " = " << a << " * " << c << "| Number is divisible by 2, " << ac << " / 2 = " << ac / 2 << endl;
    } else if (ac % 3 == 0) {
        cout << "scope 3: |" << ac << " = " << a << " * " << c << "| Number is divisible by 3, " << ac << " / 3 = " << ac / 3 << endl;
    } else if (ac % 5 == 0) {
        cout << "scope 3: |" << ac << " = " << a << " * " << c << "| Number is divisible by 5, " << ac << " / 5 = " << ac / 5 << endl;
    } else {
        cout << "scope 3: |" << ac << " = " << a << " * " << c << "| Number is not divisible by 2, 3, or 5; number is : " << ac << endl;
    }

    return 0;
}
