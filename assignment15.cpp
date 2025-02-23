/*
Input a string from the user. Count occurrences (case insensitive) of
each alphabet in the string.
Sample output:
Input: Welcome to SunBeam.
Output:
A : 1
B : 1
C : 1
E : 3
L : 1
M : 2
N : 1
O : 2
S : 1
T : 1
U : 1
W : 1
*/
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string inputStr;
    
    cout << "Enter a string: ";
    getline(cin, inputStr);
    
    int alphabetCount[26] = {0};
    
    for (char ch : inputStr) {
        ch = toupper(ch);

        if (isalpha(ch)) {
            alphabetCount[ch - 'A']++;
        }
    }
    
    cout << "Alphabet occurrences in the string are:" << endl;
    for (int i = 0; i < 26; i++) {
        if (alphabetCount[i] > 0) {
            cout << char('A' + i) << " : " << alphabetCount[i] << endl;
        }
    }

    return 0;
}
