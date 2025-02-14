#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include "student.h"

using namespace std;

int main ()
{
    int selection = 0;
    vector<Student>studentList;

    // alussa luodaan opiskelija
    Student a("Aaa", 30);
    Student b("Bee", 26);
    Student c("Cee", 28);
    Student d("Dee", 27);

    studentList.push_back(a);
    studentList.push_back(b);
    studentList.push_back(c);
    studentList.push_back(d);

    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
        case 0:
        {
            // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
            // Lisää uusi student StudentList vektoriin.
            string name;
            int age;

            cout << "Registering new student." << endl;
            cout << "Enter your name: ";
            cin >> name;
            cout << "Enter your age: ";
            cin >> age;

            studentList.emplace_back(name, age);
            cout << "New student registered." << endl;
        }
        break;

        case 1:
            // Tulosta StudentList vektorin kaikkien opiskelijoiden nimet.
            cout << "Students' names: " << endl;
            for (Student s: studentList)
            {
                cout << s.getName() << " ";
            }
            cout << endl;
            break;

        case 2:
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            std::sort(studentList.begin(), studentList.end(),[](Student& a, Student& b){
                return a.getName() < b.getName();
            });

            cout << "Sorted by name." << endl;
            for(Student s: studentList)
            {
                s.printStudentInfo();
            }
            break;

        case 3:
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            std::sort(studentList.begin(), studentList.end(),[](Student& a, Student& b){
                return a.getAge() < b.getAge();
            });

            cout << "Sorted by age." << endl;
            for(Student s: studentList)
            {
                s.printStudentInfo();
            }
            break;

        case 4:
        {
            // Kysy käyttäjältä opiskelijan nimi
            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.
            string nameToFind;
            cout << "Name: ";
            cin >> nameToFind;

            auto it = find_if(studentList.begin(), studentList.end(), [nameToFind](Student& s){
                return s.getName()==nameToFind;
            });
            if(it != studentList.end())
            {
                it->printStudentInfo();
            }
            else
            {
                cout << "Student not found." << endl;
            }
        }
        break;

        default:
            cout<< "Wrong selection, stopping..."<<endl;
            break;
        }


    }while(selection < 5);
        // käy vektorin oliot läpi
        // delete --> Ensiviikolla (?)
    return 0;

}
