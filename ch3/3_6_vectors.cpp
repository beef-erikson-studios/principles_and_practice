#include "PPPheaders.h"

int main() {
    vector<int> v = {5, 7, 9, 4, 6, 8};
    vector<string> philosopher = {
        "Kant", "Plato", "Hume", "Kierkegaard"
    };

    // These don't work
    // philosopher[2] = 99;     // doesn't store int.
    // v[2] = "Hume"            // doesn't store string.

    // We can define without assignment
    vector<int> vi(6);      // vector of 6 ints initialized to 0
    vector<string> vs(4);   // vector of 4 strings initialized to ""

    // Can't refer to non-existent element of a vector
    // vi[777] = 6;     // run-time error

    // we can loop with size()
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << "\n";
    }

    cout << "------------\n";

    // we can add elements to the end of the vector
    v.push_back(3);
    v.push_back(5);
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << "\n";
    }
}