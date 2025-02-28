/*

Array to print the table of any number  ( taking input by user ) in c++

*/

#include <iostream>

using namespace std;

int main() {
    int num;
    
    // Taking user input
    cout << "Enter the number to print its table: ";
    cin >> num;

    // Array to store the multiplication table
    int table[10];

    // Storing the table in the array
    for (int i = 0; i < 10; i++) {
        table[i] = num * (i + 1);
    }

    // Printing the table
    cout << "Multiplication table of " << num << ":\n";
    for (int i = 0; i < 10; i++) {
        cout << num << " x " << (i + 1) << " = " << table[i] << endl;
    }

    return 0;
}