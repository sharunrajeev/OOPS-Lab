/*Question: Distance is measured in feet and inches units. Use operator overloading for '+' operatorfor adding 
        two such distances and '<' for comparing two such distances. (one of the operator functions should be 
        implemented as a friend function.) */
// Code
#include <iostream>
using namespace std;
// Class Distance
class Distance
{
    int foot,inch;
    public :
    Distance();
    void getDistance(int i);
    void printDistance();
    Distance operator+ (Distance d);
    friend bool operator< (Distance &d1,Distance &d2);
};
// Main Function
int main()
{  
    Distance d1,d2,add,small;
    d1.getDistance(1);
    d2.getDistance(1);

    add = d1 + d2;
    cout<<"\nAdded Distance : ";
    add.printDistance();

    cout<<"\nSmallest distance : ";
    if (d1 < d2)
        d1.printDistance();
    else
        d2.printDistance();
    return 0;
}
// Class member functions
Distance :: Distance() 
{
    foot = 1;
    inch = 5;
}
void Distance :: getDistance(int i)
{ 
    cout<<"\nEnter the distance "<<i<<" in foot       : ";
    cin>>foot;
    cout<<"Enter the distance "<<i<<" in inches     : ";
    cin>>inch;
}
void Distance :: printDistance() 
{
    cout<<"\nDistance "<<foot<<" feet "<<inch<<" inches\n";
}
Distance Distance :: operator + (Distance d) 
{
    Distance temp;
    temp.foot = d.foot + foot;
    temp.inch = d.inch + inch;
    temp.foot = temp.foot + (temp.inch/12);
    temp.inch = temp.inch % 12;
    return temp;
}
bool operator < (Distance &d1, Distance &d2) 
{
    if (d1.foot < d2.foot) 
        return true;
    else if (d1.foot == d2.foot)
        if (d1.inch < d2.inch)
            return true;
        else
            return false;
    else
        return false;
} 