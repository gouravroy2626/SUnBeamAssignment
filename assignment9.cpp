/*
Accept an integer number and when the program is executed print the
binary, octal and hexadecimal equivalent of the given number.
Sample Output:
terminal> java Test
Enter Number : 20
Given Number :20
Binary equivalent :10100
Octal equivalent :24
Hexadecimal equivalent :14 
Hint: Use bitwise operators for binary conversion. Octal/Hexadecimal
conversion to be done by repetitive division using recursion. 
*/
#include <iostream>
#include <string>
using namespace std;

// Function to convert a number to binary using bitwise operators
string toBinary(int num) {
    string binary = "";
    while (num > 0) {
        binary = (num & 1 ? "1" : "0") + binary;  // Append the least significant bit
        num >>= 1;  // Right shift by 1 to process the next bit
    }
    return binary.empty() ? "0" : binary;  // If binary is empty, return "0"
}

// Recursive function to convert a number to octal
string toOctal(int num) {
    if (num == 0) {
        return "";
    }
    return toOctal(num / 8) + to_string(num % 8);  // Recur for quotient and append remainder
}

// Recursive function to convert a number to hexadecimal
string toHexadecimal(int num) {
    if (num == 0) {
        return "";
    }
    int remainder = num % 16;
    char hexDigit;
    if (remainder < 10) {
        hexDigit = '0' + remainder;  // For 0-9
    } else {
        hexDigit = 'A' + (remainder - 10);  // For A-F
    }
    return toHexadecimal(num / 16) + hexDigit;  // Recur for quotient and append hex digit
}

int main() {
    int num;

    cout << "Enter Number: ";
    cin >> num;

    cout << "Given Number: " << num << endl;

    cout << "Binary equivalent: " << toBinary(num) << endl;

    // Print octal equivalent
    string octal = toOctal(num);
    if (octal.empty()) {
        octal = "0";  // If empty, set to "0"
    }
    cout << "Octal equivalent: " << octal << endl;

    // Print hexadecimal equivalent
    string hexadecimal = toHexadecimal(num);
    if (hexadecimal.empty()) {
        hexadecimal = "0";  // If empty, set to "0"
    }
    cout << "Hexadecimal equivalent: " << hexadecimal << endl;

    return 0;
}
