#include <iostream>
using namespace std;

int main() {
    int num, enter, price = 0;

    cout << "\t Items in our Cafe \n";
    cout << "\t ***************** \n";
    cout << "\t 1. Coffee (50rs) \n";
    cout << "\t 2. Tea (80rs) \n";
    cout << "\t 3. Biscuit (20rs) \n";
    cout << "\t <><><><><><><><><> \n";
    cout << "\t Select 1-3 \n";
    cout << "\t ***************** \n";
    cout << "\t Enjoy It \n";
    cin >> num;

    switch (num) {
        case 1:
            cout << "\t Coffee is of 50rs \n";
            price = 50;
            break;
        case 2:
            cout << "\t Tea is of 80rs \n";
            price = 80;
            break;
        case 3:
            cout << "\t Biscuit is of 20rs \n";
            price = 20;
            break;
        default:
            cout << "Invalid input! \n";
            return 0;
    }

    cout << "Enter Amount Paid: \n";
    cin >> enter;

    // Evaluates to 1 (true) or 0 (false)
    switch (enter >= price) {
        case 1:
            cout << "Your Change is " << enter - price << endl;
            break;
        case 0:
            cout << "Insufficient Money Inserted \n";
            cout << "You Need More: " << price - enter << endl;
            break;
    }

    return 0;
}
