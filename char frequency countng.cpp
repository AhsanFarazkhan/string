#include <iostream>
using namespace std;

void characterFrequency(const char* str) {
    int count[256] = {0};
    int i = 0;

    while (str[i]) {
        count[str[i]]++;
        i++;
    }

    for (i = 0; i < 256; i++) {
        if (count[i] > 0) {
            cout << "'" << static_cast<char>(i) << "': " << count[i] << ", ";
        }
    }
}

int main() {
    const char* str = "google.com";
    cout << "Sample String: " << str << endl;
    cout << "Expected Result: ";
    characterFrequency(str);
    cout << endl;
    return 0;
}
