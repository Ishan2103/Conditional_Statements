#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "enter a number: ";
    cin >> num;
    if (num>0) {
        cout << "It is a positive number." << endl;
    }
    else if (num < 0) {
        cout << "It is a negative number." << endl;
    }
    else {
        cout << "The number is zero." << endl;
    }
    return 0;
}
