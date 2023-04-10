
#include <iostream>
using namespace std;

int main() {
    int n = 10;  // number of rows in the pattern
    int numbers[19] = {0,1, 2, 3, 4, 5, 6, 7,8,9 ,8, 7, 6, 5, 4, 3, 2, 1,0};

    // print the top half of the diamond
    for (int i = 0; i < n-1; i++) {
        // print the numbers in ascending order
        for (int j = 0; j <= i; j++) {
            cout << numbers[j] << " ";
        }

        // print the spaces between the numbers
        for (int j = 0; j < (n-i-1)*2; j++) {
            cout << "  ";
        }

        // print the numbers in descending order
        for (int j = i; j >= 0; j--) {
            cout << numbers[j] << " ";
        }

        cout << endl;
    }

    // print the middle row of the diamond
    for (int i = 0; i < n; i++) {
        cout << numbers[i] << " ";
    }
    for (int i = n-1; i >= 0; i--) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // print the bottom half of the diamond
    for (int i = n-2; i >= 0; i--) {
        // print the numbers in ascending order
        for (int j = 0; j <= i; j++) {
            cout << numbers[j] << " ";
        }

        // print the spaces between the numbers
        for (int j = 0; j < (n-i-1)*2; j++) {
            cout << "  ";
        }

        // print the numbers in descending order
        for (int j = i; j >= 0; j--) {
            cout << numbers[j] << " ";
        }

        cout << endl;
    }
    return 0;
}
