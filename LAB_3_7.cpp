/* Question : Write a C++ program to create a class STUDENT with age name and register number.
    Using Inheritance, derive two classes MTech-stud and BTech-stud.
    List both the category of students in the increasing order of marks( for BTech-stud) 
    and gpa( for MTech-stud). Incase of tie, display whichever name comes first. 
    Make sort() function as a virtual function */
// Code
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

class Student {
    protected :
        string name;
        int age, regNo;

    public :
        virtual void sort(int n) = 0;
        void input();
        void output();
};

class BTech : public Student {
    private :
        int marks;
    public :
        void btech_input();
        void btech_output();
        void sort(int n);
};

class MTech : public Student {
    private :
        int gpa;
    public :
        void mtech_input();
        void mtech_output();
        void sort(int n);
};

int main() {
    Student *s;
    int no_of_btech_students, no_of_mtech_students;

    cout << "\nEnter number of BTech students : ";
    cin >> no_of_btech_students;
    BTech b[no_of_btech_students];
    cout << "\nBtech Student Details\n";
    cout << "---------------------";
    for (int i = 0; i < no_of_btech_students;i++) {
        cout << "\nEnter details of Student " << i + 1 << "\n";
        b[i].btech_input();
    }

    cout << "\nEnter number of MTech students : ";
    cin >> no_of_mtech_students;
    MTech m[no_of_mtech_students];
    cout << "\nMtech Student Details\n";
    cout << "---------------------";
    for (int i = 0; i < no_of_mtech_students;i++) {
        cout << "\nEnter details of Student " << i + 1 << "\n";
        m[i].mtech_input();
    }

    s = b;
    s->sort(no_of_btech_students);
    cout << "\n\nBTech Students (Sorted List)";
    cout << "\n----------------------------";
    for (int i = 0; i < no_of_btech_students; i++)
    {
        cout << "\nStudent " << i + 1 << "\t";
        b[i].btech_output();
        cout << "\n\t---------\n";
    }

    s = m;
    s->sort(no_of_mtech_students);
    cout << "\n\nMTech Students (Sorted List)";
    cout << "\n---------------------------";
    for (int i = 0; i < no_of_mtech_students; i++)
    {
        cout << "\nStudent " << i + 1 << "\t";
        m[i].mtech_output();
        cout << "\n\t---------\n";
    }
    
    return 0;
}

void Student :: input() {
    cout << "Enter registration number  : ";
    cin >> regNo;
    cout << "Enter name                 : ";
    cin >> name;
    cout << "Enter age                  : ";
    cin >> age;
}

void Student :: output() {
    cout << "\nRegistration number  : " << regNo;
    cout << "\nName                 : " << name;
    cout << "\nAge                  : " << age;
}

void BTech :: btech_input() {
    input();
    cout << "Enter your marks           : ";
    cin >> marks;
}

void BTech :: btech_output() {
    output();
    cout << "\nMarks                : " << marks;
}

void BTech :: sort(int n) {
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (this[j].marks > this[j+1].marks)    
            {
                auto temp = this[j];
                this[j] = this[j + 1];
                this[j + 1] = temp;
            }
            if (this[j].marks == this[j+1].marks)
            {
                if ((this[j].name.compare(this[j+1].name)) > 0)
                {
                    auto tm = this[j];
                    this[j] = this[j + 1];
                    this[j + 1] = tm;
                }
                
            }
            
            
        }
        
    }
    
}

void MTech :: mtech_input() {
    input();
    cout << "Enter your GPA             : ";
    cin >> gpa;
}

void MTech :: mtech_output() {
    output();
    cout << "\nGPA                  : " << gpa;
}

void MTech :: sort(int n) {
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (this[j].gpa > this[j+1].gpa)    
            {
                auto temp = this[j];
                this[j] = this[j + 1];
                this[j + 1] = temp;
            }
            if (this[j].gpa == this[j+1].gpa)
            {
                if ((this[j].name.compare(this[j+1].name)) > 0)
                {
                    auto tm = this[j];
                    this[j] = this[j + 1];
                    this[j + 1] = tm;
                }
                
            }
            
            
        }
        
    }
    
}