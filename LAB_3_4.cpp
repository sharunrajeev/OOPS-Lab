/* Ouestion : A class representing distance is measured in the unit of feet and inches. 
    Write a program to do conversion from meter unit to objects of class type and objects of class type to meter. */
// Code
#include <iostream>
using namespace std;

class Distance
{
private:
    float feet,inch;
public:
    void input();
    void output();
    operator float();
    void operator = (float);
};

int main()
{
    int choice;
    float meter;
    Distance d;
    do {   
        cout<<"\n1.Meter to Feet-Inches Conversion ";
        cout<<"\n2.Feet-Inches to Meter Conversion ";
        cout<<"\n3.Exit";
        cout<<"\n\nEnter your choice : ";
        cin>>choice;
        if(choice==1) {
            cout<<"\nEnter the distance in meters      : ";
            cin>>meter;
            d = meter;
            cout<<"Distance = ";
            d.output();
        }
        else if (choice==2) {
            cout<<"\nEnter the distance in feet-inches : ";
            d.input();
            meter = d;
            cout<<"Distance = "<<meter<<" meters\n";
        }
        else {
            choice = 3;
        }
    } while (choice!=3);
    
    return 0;
}

void Distance :: input() {
    cin>>feet>>inch;
}

void Distance :: output() {
    cout<<feet<<" feets "<<inch<<" inches\n";
}

Distance :: operator float() {
    return ((feet/3.28) + (inch/39.37));
}

void Distance :: operator = (float m) {
    float temp = m * (100/2.54);
    feet = int(temp/12);
    inch = temp - (12*feet);
}