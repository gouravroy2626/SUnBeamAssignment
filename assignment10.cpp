/*
0. Read at most 10 names of students and store them into an array of
char nameOfStudents[10][50]. Sort the array and display them back.
 Hint:Use qsort() method.
 */
#include <iostream>
#include <cstdlib>  // For qsort
#include <cstring>  // For strcmp
using namespace std;

// Comparison function for qsort
int compareNames(const void* a, const void* b) {
    return strcmp(*(const char**)a, *(const char**)b);
}

int main() {
    char nameOfStudents[10][50];  // Array to store up to 10 student names
    int numStudents;

    cout << "Enter the number of students (max 10): ";
    cin >> numStudents;
    
    // Limit input to 10 students
    if (numStudents > 10) {
        cout << "You can only enter up to 10 students." << endl;
        return 1;
    }

    // Clear the input buffer
    cin.ignore();

    // Read student names
    for (int i = 0; i < numStudents; i++) {
        cout << "Enter name of student " << i + 1 << ": ";
        cin.getline(nameOfStudents[i], 50);  // Reading each name
    }

    // Sort the array using qsort
    qsort(nameOfStudents, numStudents, sizeof(nameOfStudents[0]), compareNames);

    // Display the sorted names
    cout << "\nSorted list of student names:" << endl;
    for (int i = 0; i < numStudents; i++) {
        cout << nameOfStudents[i] << endl;
    }

    return 0;
}
