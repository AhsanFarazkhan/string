#include <iostream>
using namespace std;

int findLastSubstring(const char* str, const char* substr) {
    int strLen = strlen(str);
    int subLen = strlen(substr);
    int lastIndex = -1;

    for (int i = 0; i <= strLen - subLen; i++) {
        int j;
        for (j = 0; j < subLen; j++) {
            if (str[i + j] != substr[j]) {
                break;
            }
        }
        if (j == subLen) {
            lastIndex = i;
        }
    }

    return lastIndex;
}

int main() {
    const char* str = "Hello, World!";
    const char* substr = "l";
    int index = findLastSubstring(str, substr);
    cout << "Index of the last occurrence: " << index << endl;
    return 0;
}
