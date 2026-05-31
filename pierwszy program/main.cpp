#include <iostream>

using namespace std;

int main()
{
    char dzialanie;
    float num1, num2;

    cout << "Kalkulator" << endl;

    cout << "wybierz dzialanie: +, -, *, /" << endl;
    cin >> dzialanie;

    cout << "wybierz dwie liczby:" << endl;
    cin >> num1 >> num2;

    switch(dzialanie){

        case '+':
            cout << num1 << "+" << num2 << "=" << num1 + num2;
            break;

        case '-':
            cout << num1 << "-" << num2 << "=" << num1 - num2;
            break;

        case '*':
            cout << num1 << "*" << num2 << "=" << num1 * num2;
            break;

        case '/':
            cout << num1 << "/" << num2 << "=" << num1 / num2;
            break;

        default:
            cout << "Blad! Niepoprawne dzialanie";
            break;
    }

    return 0;
}
