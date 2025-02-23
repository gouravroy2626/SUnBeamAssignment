/*
Declare an Array of type char* and initialize it with a few strings (hardcoded). Display the strings which are duplicated in that array. (Hint: use
strcmp())
*/

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const char* arr[] = {"apple", "banana", "orange", "apple", "grape", "banana", "kiwi"}; //example char array

    int n = sizeof(arr) / sizeof(arr[0]); 

    cout << "Duplicate strings in the array are:" << endl;


    for (int i = 0; i < n; i++) {
        bool isDuplicate = false;

        
        for (int j = i + 1; j < n; j++) {
            if (strcmp(arr[i], arr[j]) == 0) {
                isDuplicate = true;
                break;  
            }
        }

        if (isDuplicate) {
            cout << arr[i] << endl;
        }
    }

    return 0;
}
