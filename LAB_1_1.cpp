/*
A phone number, such as (212) 767-8900, can be thought of as having three
parts: the area code (212), the exchange (767), and the number (8900).
Write a C++ program that uses a structure to store these three parts of a
phone number separately. Call the structure phone. Create two structure
variables of type phone. Initialize one, and have the user input a number
for the other one. Then display both numbers. The interchange might look
like this:
Enter your area code, exchange, and number: 415 555 1212
My number is (212) 767-8900
Your number is (415) 555-1212
*/

#include <iostream>

using namespace std;

struct phone
{
    int area_code,exchange,number;
}s1,s2;

int main() {
    s1 = {212,767,8900};
    cout<<"Enter the area code , exchange and number respectively in order \n";
    cin>>s2.area_code>>s2.exchange>>s2.number;
    cout<<"My number is 	:"<<'('<<s1.area_code<<")"<<s1.exchange<<'-'<<s1.number<<endl;
    cout<<"Your number is 	:"<<'('<<s2.area_code<<")"<<s2.exchange<<'-'<<s2.number<<endl;
    return 0;
}
