#include "PPPheaders.h"

int main() {
    cout << "Enter the name of the person you want to write to: ";
    string first_name;
    string friend_name;
    int age;

    cin >> first_name;
    cout << "Dear " << first_name << ",\n";
    cout << "\tI hope the day treats you well. The winter bitterness cuts deep" 
         << " though warmth is sure to follow soon\n\n";

    cout << "Please enter a friend name: ";        
    cin >> friend_name;
    cout << "\n  Have you heard from " << friend_name << " at all?\n\n";

    cout << "Might I ask your age? ";
    cin >> age;
    if (age < 0 || age > 120)
        error("You're a real kidder, Steve.");
    if (age < 12)
        cout << "\nNext year you will be " << ++age << "!\n";
    if (age == 17)
        cout << "\nNext year you'll be able to vote!\n";
    if (age > 70)
        cout << "\nAre you retired yet?\n";

    cout << "\n\nYours Sincerely,\n\n" << "Robert Farlow\n\n";

    return 0;
}