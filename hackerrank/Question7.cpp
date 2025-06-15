#include <iostream>
#include <vector>
#include <string>
using namespace std;
// Given a time in 12-hour AM/PM format, convert it to military (24-hour) time.
string timeConversion(string s) {
    int hour = stoi(s.substr(0, 2));
    string period = s.substr(8, 2);
    if (period == "AM") {
        if (hour == 12) 
            hour = 0; // Midnight case
    }
    else if (period == "PM") {
        if (hour != 12) 
            hour += 12; // Convert PM hour to 24-hour format
    }
    // Format hour to always have two digits
    return (hour < 10 ? "0" : "") + to_string(hour) + s.substr(2, 6);
}

int main() {
    string time;
    cout << "Enter time in 12-hour AM/PM format (e.g., 07:05:45 PM): ";
    cin >> time;
    string militaryTime = timeConversion(time);
    cout << "Military time: " << militaryTime << endl;
    return 0;
}