#include <iostream>
using namespace std;

int findSubstring(const char* str, const char* substr) {
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
            return i;
        }
    }

    return -1; // If substring is not found
}

int main() {
    const char* str = "Hello, World!";
    const char* substr = "World";
    int index = findSubstring(str, substr);
    cout << "Index of the first occurrence: " << index << endl;
    return 0;
}
