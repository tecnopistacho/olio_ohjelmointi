#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
    Student(string n, int a);
    void printStudentInfo();

    string getName() const;
    void setName(const string &newName);

    int getAge() const;
    void setAge(int newAge);

private:
    string name;
    int age;
};

#endif // STUDENT_H
