#include <iostream>
using namespace std;

string getDigitInWords(int digit) {
    string digits[] = {
        "Zero", "One", "Two", "Three", "Four",
        "Five", "Six", "Seven", "Eight", "Nine"
    };

    if (digit >= 0 && digit <= 9) {
        return digits[digit];
    } else {
        return "Invalid digit!";
    }
}

int main() {
    int digit;
    cout << "Enter a digit (0-9): ";
    cin >> digit;

    string digitInWords = getDigitInWords(digit);
    cout << "Digit in words: " << digitInWords << endl;
    return 0;
}
