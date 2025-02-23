/*
Write a program to calculate the grade of a student. There are five
subjects. Marks in each subject are entered from keyboard. Assign grade
based on the following rule:
Total Marks >= 90 Grade: Ex
90 > Total Marks >= 80 Grade: A
80 > Total Marks >= 70 Grade: B
70 > Total Marks >= 60 Grade: C
60 > Total Marks Grade: F
*/
#include <iostream>
using namespace std;

int main() {
    float marks[5]; 
    float totalMarks = 0.0;
    
    for(int i = 0; i < 5; i++) {
        cout << "Enter marks for subject " << i + 1 << ": ";
        cin >> marks[i];
        totalMarks += marks[i]; 
    }

    float average = totalMarks / 5;

    cout << "Total Marks: " << totalMarks << endl;
    cout << "Average Marks: " << average << endl;
    if (totalMarks >= 90) {
        cout << "Grade: Ex" << endl;
    } else if (totalMarks >= 80) {
        cout << "Grade: A" << endl;
    } else if (totalMarks >= 70) {
        cout << "Grade: B" << endl;
    } else if (totalMarks >= 60) {
        cout << "Grade: C" << endl;
    } else {
        cout << "Grade: F" << endl;
    }

    return 0;
}
