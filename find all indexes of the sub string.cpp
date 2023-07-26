#include <iostream>
using namespace std;

void findAllSubstrings(const char* str, const char* substr) {
    int strLen = strlen(str);
    int subLen = strlen(substr);

    for (int i = 0; i <= strLen - subLen; i++) {
        int j;
        for (j = 0; j < subLen; j++) {
            if (str[i + j] != substr[j]) {
                break;
            }
        }
        if (j == subLen) {
            cout << "Substring found at index: " << i << endl;
        }
    }
}

int main() {
    const char* str = "Hello, World!";
    const char* substr = "l";
    findAllSubstrings(str, substr);
    return 0;
}
