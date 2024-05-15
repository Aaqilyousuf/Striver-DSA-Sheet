#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    int temp = n;
    int numDigits = 0;
    int armstrong = 0;

    // Count the number of digits in the input number
    while (temp > 0) {
        numDigits++;
        temp = temp / 10;
    }

    temp = n; // Reset temp to the original number

    // Calculate the sum of each digit raised to the power of numDigits
    while (temp > 0) {
        int digit = temp % 10;
        int digitRaisedToPower = 1;
        for (int i = 0; i < numDigits; i++) {
            digitRaisedToPower *= digit;
        }
        armstrong += digitRaisedToPower;
        temp = temp / 10;
    }

    // Check if the sum equals the original number
    if (armstrong == n) {
        cout << "Armstrong";
    } else {
        cout << "Not armstrong";
    }

    return 0;
}
