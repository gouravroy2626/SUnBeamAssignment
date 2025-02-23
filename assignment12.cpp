/*
Write a Program to reverse the letters present in the given String. Do
not use strrev() function.

*/




#include <iostream>
#include <string>
using namespace std;

void reverseString(string& str) {
    int start = 0;
    int end = str.length() - 1;
    

    while (start < end) {
        swap(str[start], str[end]);
        start++;
        end--;
    }
}

int main() {
    string inputStr;
    
    cout << "Enter a string: ";
    getline(cin, inputStr); 

    reverseString(inputStr);
    
    cout << "Reversed string: " << inputStr << endl;
    
    return 0;
}
