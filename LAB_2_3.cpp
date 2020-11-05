/* Question : Write a function called swap() that interchanges two int values belonging
to an object, passed as parameter to it by the calling program. Write a C++
program to demonstrate call by value, call by reference and call by address. */
// Code :
#include <iostream>
using namespace std;
class swap_class {
    int a,b,temp;
public:
    swap_class() {
        cout<<"Enter the two values : ";
        cin>>a>>b;
    }
    void swap_value(swap_class s) {
        temp = s.a;
        s.a = s.b;
        s.b = temp;
    }
    void swap_reference(swap_class &s) {
        temp = s.a;
        s.a = s.b;
        s.b = temp;
    }
    void swap_address(swap_class *s) {
        temp = s->a;
        s->a = s->b;
        s->b = temp;
    }
    void display() {
        cout<<a<<" "<<b<<endl;
    }
};

int main() {
    swap_class s;
    int choice;
    cout<<"Elements before sorting - ";
    s.display();
    do {
        cout<<"----------------------\n";
        cout<<"Swap elements using :\n";
        cout<<"1.Call by Value \n2.Call by Reference \n3.Call by Address\n4.Display \n5.Exit \nChoose your option ...";
        cin>>choice;
        cout<<endl;
        switch(choice) {
            case 1:s.swap_value(s);
                break;
            case 2:s.swap_reference(s);
                break;
            case 3:s.swap_address(&s);
                break;
            case 4:s.display();
                break;
            case 5:break;
            default:cout<<"Wrong choice!";
                break;
        }
    }while(choice!=5);
    return 0;
}
