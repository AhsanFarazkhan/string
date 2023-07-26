#include <iostream>
using namespace std;

bool isBinaryPalindrome(int num) {
    int reversedNum = 0;
    int originalNum = num;

    while (num > 0) {
        reversedNum = (reversedNum << 1) | (num & 1);
        num >>= 1;
    }

    return originalNum == reversedNum;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    bool isPalindrome = isBinaryPalindrome(num);
    if (isPalindrome) {
        cout << "The binary representation of " << num << " is a palindrome." << endl;
    } else {
        cout << "The binary representation of " << num << " is not a palindrome." << endl;
    }
    return 0;
}
