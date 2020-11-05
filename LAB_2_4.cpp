/* Question : Write a function called power() that takes a double value for n and an int
value for p, and returns the result as a double value. Create a series of
overloaded functions with the same name that, in addition to double, also
work with types char, int, long, and float. Write a main() program that
exercises these overloaded functions with all argument types. */
// Code :
#include<iostream>
#include<stdlib.h>

using namespace std;

class Power {
    public:
    double power(double n,int p) {
        return n*p;
    }
    int power(char n,int p) {
        return char_conv(n)*p;
    }
    int power(int n,int p) {
        return n*p;
    }
    long power(long n,int p) {
        return n*p;
    }
    float power(float n,int p) {
        return n*p;
    }
    int char_conv(char c);
};

int main() {
    Power p;
    cout<<p.power(20.10,100)<<endl;  //double,int
    cout<<p.power('2',100)<<endl;
    cout<<p.power(20,100)<<endl;
    cout<<p.power(2010,10)<<endl;
    cout<<p.power(20.1,100)<<endl;
    return 0;
}

int Power::char_conv(char c) {
    switch(c) {
        case '0':return 0;
            break;
        case '1':return 1;
            break;
        case '2':return 2;
            break;
        case '3':return 3;
            break;
        case '4':return 4;
            break;
        case '5':return 5;
            break;
        case '6':return 6;
            break;
        case '7':return 7;
            break;
        case '8':return 8;
            break;
        case '9':return 9;
            break;
        default:return 404;
            break;
    }
};