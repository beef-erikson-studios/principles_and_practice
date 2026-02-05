#include "PPPheaders.h"

int main() {
    cout << "Please enter a floating point number: ";
    double n = 0;
    cin >> n;
    cout << "n == " << n
         << "\nn + 1 == " << n + 1
         << "\nthree times n == " << n * 3
         << "\ntwice n == " << n * 2
         << "\nnn squared == " << n * n
         << "\nhalf of n == " << n / 2
         << "\nsquare root of n == " << sqrt(n)
         << "\n\n"; 

    cout << "Please enter two names\n";
    string first;
    string second;
    cin >> first >> second;
    
    if (first == second) 
        cout << "that's the same name twice\n";
    if (first < second)
        cout << first << " is alphabetically before " << second << "\n";
    if (first > second)
        cout << first << " is alphabetically after " << second << "\n";
}