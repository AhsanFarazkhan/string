#include <iostream>
using namespace std;

string getMonthName(int monthNumber) {
    string months[] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };

    if (monthNumber >= 1 && monthNumber <= 12) {
        return months[monthNumber - 1];
    } else {
        return "Invalid month number!";
    }
}

int main() {
    int monthNumber;
    cout << "Enter the month number (1-12): ";
    cin >> monthNumber;

    string monthName = getMonthName(monthNumber);
    cout << "Month name: " << monthName << endl;
    return 0;
}

