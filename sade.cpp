#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Sade Kalkulyator" << endl;
    cout << "Birinci reqemi daxil edin: ";
    cin >> num1;
    cout << "Operatoru daxil edin (+, -, *, /): ";
    cin >> op;
    cout << "Ikinci reqemi daxil edin: ";
    cin >> num2;

    switch (op) {
        case '+':
            cout << "Netice: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Netice: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Netice: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0)
                cout << "Netice: " << num1 / num2 << endl;
            else
                cout << "Xeta! Sifira bölmek mümkün deyil." << endl;
            break;
        default:
            cout << "Xeta! Düzgün operator daxil edin." << endl;
    }

    return 0;
}
