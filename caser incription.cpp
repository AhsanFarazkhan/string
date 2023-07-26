#include <iostream>
using namespace std;

string caesarEncryption(string message, int shift) {
    string result = "";

    for (char c : message) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            result += static_cast<char>((c - base + shift) % 26 + base);
        } else {
            result += c;
        }
    }

    return result;
}

int main() {
    string message = "Hello, World!";
    int shift = 3;
    string encrypted = caesarEncryption(message, shift);

    cout << "Original Message: " << message << endl;
    cout << "Caesar Encrypted Message: " << encrypted << endl;
    return 0;
}

