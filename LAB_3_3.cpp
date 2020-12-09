/* Question : Write a program using operator overloading to overload Stream operators (<< and >>)to read and 
    display the objects of complex class */
// Code :
#include <iostream>
using namespace std;

class Complex
{
private:
    int real, img;

public:
    Complex()
    {
        real = 0;
        img = 0;
    }
    friend istream & operator >>(istream &input, Complex &c);
    friend ostream & operator <<(ostream &output, Complex &c);
};

int main() {
    Complex C;
    cin>>C;
    cout<<C;
    return 0;
}

istream & operator >> (istream &input, Complex &c) {
    cout<<"Enter real part          : ";
    input>>c.real;
    cout<<"Enter imaginary part     : ";
    input>>c.img;
    return input;
}

ostream & operator << (ostream &output, Complex &c) {
    cout<<"The Complex number is : ";
    output<<c.real<<" + ";
    output<<c.img<<"i";
    return output;
}
