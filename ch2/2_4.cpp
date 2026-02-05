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
         << "\n"; 
}