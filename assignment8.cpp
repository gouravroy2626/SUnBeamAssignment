/*
Write a program to read the name of a student (studentName), roll
Number (rollNo) and marks (totalMarks) obtained. rollNo may be an
alphanumeric string. Display the data as read. Hint: Create a Student
structure and write appropriate functions.
*/
#include <iostream>
#include <string>
using namespace std;

// Student structure
struct Student {
    string studentName;  // Student's name
    string rollNo;       // Roll number (alphanumeric string)
    float totalMarks;    // Marks obtained
};

void inputStudentData(Student &s) {
    cout << "Enter student's name: ";
    getline(cin, s.studentName);  
    cout << "Enter roll number: ";
    getline(cin, s.rollNo); 

    cout << "Enter total marks obtained: ";
    cin >> s.totalMarks;  
    cin.ignore();
}

void displayStudentData(const Student &s) {
    cout << "\nStudent Information:" << endl;
    cout << "Name: " << s.studentName << endl;
    cout << "Roll Number: " << s.rollNo << endl;
    cout << "Total Marks: " << s.totalMarks << endl;
}

int main() {
    Student student;   
    inputStudentData(student);
    displayStudentData(student);
    return 0;
}
