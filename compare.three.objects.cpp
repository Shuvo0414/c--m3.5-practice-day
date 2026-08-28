#include <bits/stdc++.h>
using namespace std;

/*

Question: Create three static objects with the help of the constructor of the following class.

Student
{
    name;
    roll;
    section;
    math_marks;
    cls;
}
Then compare those 3 objects and print who got the highest math_marks and print his/her name.

*/

class Student
{
public:
    char name[100];
    int roll;
    char section[10];
    int math_marks;
    int cls;

    Student(const char name[100], int roll, const char section[10], int math_marks, int cls)
    {
        strcpy(this->name, name);
        this->roll = roll;
        strcpy(this->section, section);
        this->math_marks = math_marks;
        this->cls = cls;
    }
};

int main()
{
    Student rahim("Rahim Mia", 1, "A", 99, 7);
    Student karim("Karim Mia", 2, "B", 89, 7);
    Student jorim("Jorim Mia", 10, "c", 70, 7);

    if (rahim.math_marks > karim.math_marks && rahim.math_marks > jorim.math_marks)
    {
        cout << rahim.name;
    }
    else if (karim.math_marks > rahim.math_marks && karim.math_marks > jorim.math_marks)
    {
        cout << karim.name;
    }
    else
    {
        cout << jorim.name;
    }

    return 0;
}