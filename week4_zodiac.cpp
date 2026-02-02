#include <iostream>
#include <string> // Required for string and getline()

using namespace std;

int main() {

    // Initial User Data
    string fullName;
    int month, day;

    // Calculated data
    string zodiac;

    // Collect user data
    cout << "Enter full name: ";
    getline(cin, fullName);

    cout << "Enter birth month (1-12): ";
    cin >> month;

    cout << "Enter birth day: ";
    cin >> day;

    //Compute the sign...
    if ((month == 3 && day >= 21) || (month == 4 && day <= 20)) {
        zodiac = "Aries";
    }
    else if ((month == 4 && day >= 21) || (month == 5 && day <= 20)) {
        zodiac = "Taurus";
    }
    else if ((month == 5 && day >= 21) || (month == 6 && day <= 21)) {
        zodiac = "Gemini";
    }
    else if ((month == 6 && day >= 22) || (month == 7 && day <= 22)) {
        zodiac = "Cancer";
    }
    else if ((month == 7 && day >= 23) || (month == 8 && day <= 23)) {
        zodiac = "Leo";
    }
    else if ((month == 8 && day >= 24) || (month == 9 && day <= 23)) {
        zodiac = "Virgo";
    }
    else if ((month == 9 && day >= 24) || (month == 10 && day <= 23)) {
        zodiac = "Libra";
    }
    else if ((month == 10 && day >= 24) || (month == 11 && day <= 22)) {
        zodiac = "Scorpio";
    }
    else if ((month == 11 && day >= 23) || (month == 12 && day <= 21)) {
        zodiac = "Sagittarius";
    }
    else if ((month == 12 && day >= 22) || (month == 1 && day <= 20)) {
        zodiac = "Capricorn";
    }
    else if ((month == 1 && day >= 21) || (month == 2 && day <= 18)) {
        zodiac = "Aquarius";
    }
    else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) {
        zodiac = "Pisces";
    }
    else {
        zodiac = "Unknown sign... Please enter something sensible"; // Good practice for the final 'else'
    }

    cout << "Hello " << fullName << "! Your zodiac sign is: " << zodiac << endl;
    return 0;
}