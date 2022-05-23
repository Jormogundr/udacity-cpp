#include <cassert>
#include <stdexcept>
#include <string>
#include <iostream>
using namespace std;

// TODO: Define "Student" class
class Student {
 public:
  // constructor
    Student(string n, int g, float gpa) : name_(n), grade_(g), gpa_(gpa) {}

  // accessors
    int getGrade() {return grade_;}
    string getName() {return name_;}
    float getGPA() {return gpa_;}
    
  // mutators
    void setGrade(int g) {
        if (g >= 0 && g <= 12) {
            grade_ = g;
        }
        else {cout << "E: Invalid grade. Grade not set" << endl;}
    }
    void setName(string n) {
        name_ = n;
    }
    void setGPA(float gpa) {
        if (gpa >= 0.0 && gpa <= 4.0) {
            gpa_ = gpa;
        } 
        else {cout << "E: Invalid GPA. GPA not set" << endl;}
    }
    

 private:
  string name_;
    int grade_;
    float gpa_;
};

// TODO: Test
int main() {
    Student student("schnee schnoo", 9, 4.0);
    assert(student.getName() == "schnee schnoo");
    assert(student.getGrade() == 9);
    assert(student.getGPA() == 4.0);
    student.setGrade(-100);
    student.setGPA(4.1);
}