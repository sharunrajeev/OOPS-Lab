#include <iostream>
#include <math.h>

using namespace std;

class triangle {
    float a,b,c,s;   

    public:
    int accept() {
        cout<<"Enter the sides of the triangle\n";
        cin>>a>>b>>c;
        return validate();
    }
    bool validate() {
        if(a+c<=b||a+b<=c||b+c<=a) return false;
        else return true;
    }
    void display() {
        cout<<"The sides of the triangle are : "<<a<<' '<<b<<' '<<c<<endl;
    }
    void area () {
        s=(a+b+c)/2;
        cout<<"Area of the triangle = "<<sqrt(s*(s-a)*(s-b)*(s-c))<<" unit sq"<<endl;
    }
};

int main() {
    triangle t;
    if(t.accept()){
        t.display();
        t.area();
    }
    else {
        cout<<"Invalid triangle sides "<<endl;
    }
    return 0;
}