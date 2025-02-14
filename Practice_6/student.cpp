#include "student.h"


Student::Student(string n, int a)
{
    name = n;
    age = a;
}

void Student::printStudentInfo()
{
    cout << getName() << " " << getAge() << endl;
}

string Student::getName() const
{
    return name;
}

void Student::setName(const string &newName)
{
    name = newName;
}

int Student::getAge() const
{
    return age;
}

void Student::setAge(int newAge)
{
    age = newAge;
}
