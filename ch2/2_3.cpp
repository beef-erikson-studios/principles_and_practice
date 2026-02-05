#include "PPPheaders.h"

int main() {
    cout << "Please enter your first name and age:\n";
    string first_name;
    double age;
    cin >> first_name >> age;
    age *= 12.0;
    cout << "Hello, " << first_name << " (age " << age << " months)\n"; 
}