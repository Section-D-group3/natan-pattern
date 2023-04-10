#include <iostream>

using namespace std;

int main() {
    // Loop through all possible values of side1, side2, and hypotenuse
    for (int side1 = 1; side1 <= 100; side1++) {
        for (int side2 = 1; side2 <= 100; side2++) {
            for (int hypotenuse = 1; hypotenuse <= 100; hypotenuse++) {
                // Check if the values form a Pythagorean triple
                if (side1*side1 + side2*side2 == hypotenuse*hypotenuse) {
                    // Display the Pythagorean triple
                    cout << side1 << " " << side2 << " " << hypotenuse << endl;
                }
            }
        }
    }

    return 0;
}
