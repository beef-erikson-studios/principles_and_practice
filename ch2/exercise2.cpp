#include "PPPheaders.h"

// Miles to Kilometers
int main() {
    double miles = 0;
    double kilometers = 1.609;

    cout << "Enter the miles to convert to kilometers: ";
    cin >> miles;

    kilometers *= miles;
    cout << miles << " miles is " << kilometers << " kilometers.\n\n";

    return 0;
}