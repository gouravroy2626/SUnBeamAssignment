/*
Write a program to check the input characters for uppercase,
lowercase, number of digits and other characters. Display appropriate
message.
 
*/

#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z') {
        cout << "The character is an uppercase letter." << endl;
    }
    else if (ch >= 'a' && ch <= 'z') {
        cout << "The character is a lowercase letter." << endl;
    }
    else if (ch >= '0' && ch <= '9') {
        cout << "The character is a digit." << endl;
    }
    else {
        cout << "The character is an other character (symbol, punctuation, etc.)." << endl;
    }

    return 0;
}
