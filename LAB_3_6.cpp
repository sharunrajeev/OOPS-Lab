/* Question : Employee​ class contain details like name,emp no,pay rate, constructor function 
    and a pay() function. ​Manager​ class inherits from the employee and has the option 
    of drawingpay on hourly basis or salary basis and has an additional 
    data is salaried(bool). ClassSupervisor​ is derived from the employee 
    and has an additional field department and isalways salaried. 
    Base and both  derived classes should contain the pay() function with thesame name */ 
// Code
#include <iostream>
using namespace std;

class Employee {
    protected :
        string name;
        int empNo;
        float payRate;
    public :
        void input();
        virtual void pay(int) = 0;
};

class Manager : public Employee {
    protected :
        bool is_salaried;
    public :
        Manager();
        void display();
        void pay(int);
};

class Supervisor : public Employee {
    protected:
        string department;
    public :
        Supervisor();
        void display();
        void pay(int);
};

int main() {
    cout << "Welcome to the company!";
    cout << "\nLogin as ?";
    cout << "\n1.Manager";
    cout << "\n2.Supervisor";
    cout << "\nEnter your choice  : ";
    int choice, sal;
    cin >> choice;
    cout << "\n";
    switch (choice)
    {
        case 1:
            {
                Manager m;
                cout << "Enter your salary : ";
                cin >> sal;
                m.pay(sal);
                m.display();
            }
            break;
    
        case 2:
            {
                Supervisor s;
                cout << "Enter your salary : ";
                cin >> sal;
                s.pay(sal);
                s.display();
            }
            break;

        default:
            cout << "Wrong choice .";
            break;
    }
    return 0;
}

void Employee :: input() {
    cout << "Enter your Employee Number     :";
    cin >> empNo;
    cout << "Enter your name                :";
    cin >> name;
    payRate = 0;
}

Manager :: Manager() {
    input();
    cout << "\nAre you salaried ?\n\tif yes(1) or no(0) : ";
    int val;
    cin >> val;
    if(val == 1)
        is_salaried = true;
    else if(val == 0)
        is_salaried = false;
    else
        cout << "Wrong option choosed";
}

void Manager :: display() {
    cout << "\nManager details: " ;
    cout << "\nName               : " << name ;
    cout << "\nEmployee number    : " << empNo ;
    cout << "\nPay rate           : " << payRate;
    if (is_salaried)
    {
        cout << " monthly" ;
    }
    else
    {
        cout << " hourly" ;
    }
}

void Manager :: pay(int salary) {
    if(is_salaried) {
        payRate = salary;
    }
    else {
        payRate = salary / (30 * 24); // hourly wage
    }
}

Supervisor :: Supervisor() {
    input();
    cout << "Enter the department       : ";
    cin >> department;
}

void Supervisor :: display() {
    cout << "\nSupervisor details: " ;
    cout << "\nDepartment       : " << department ;
    cout << "\nName             : " << name ;
    cout << "\nEmployee number  : " << empNo ;
    cout << "\nPay rate         : " << payRate << " monthly" ;
}

void Supervisor :: pay(int salary) {
    payRate = salary;
}