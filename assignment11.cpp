/*
 . Create a structure called Employee that includes three fields - a first
name (type String), a last name (type String) and a monthly salary (double).
Write functions to initialize the fields, print them and modify the values in
the given object. Example methods:
 void emp_init(struct emp* e);
 void set_salary(struct emp *e, double sal);
 void emp_display(struct emp *e);
Write the test code in the main(). Create two emp objects and display each
object’s yearly salary. Then give each Employee a 10% raise and display
each Employee’s yearly salary again.
*/
#include <iostream>
#include <string>
using namespace std;

struct Employee {
    string firstName;
    string lastName;
    double salary;

   
    void emp_init(const string& first, const string& last, double sal) {
        firstName = first;
        lastName = last;
        salary = sal;
    }

    
    void set_salary(double sal) {
        salary = sal;
    }

    
    void emp_display() const {
        cout << "Employee: " << firstName << " " << lastName << endl;
        cout << "Monthly Salary: " << salary << endl;
        cout << "Yearly Salary: " << salary * 12 << endl << endl;
    }

    
    void apply_raise(double percentage) {
        salary += salary * (percentage / 100);  
    }
};

int main() {
    Employee emp1, emp2; 

   
    emp1.emp_init("John", "Doe", 3000.00);
    emp2.emp_init("Jane", "Smith", 3500.00);

    
    cout << "Initial Details:" << endl;
    emp1.emp_display();
    emp2.emp_display();

   
    emp1.apply_raise(10);  
    emp2.apply_raise(10);  
   
    cout << "After 10% Raise:" << endl;
    emp1.emp_display();
    emp2.emp_display();

    return 0;
}
