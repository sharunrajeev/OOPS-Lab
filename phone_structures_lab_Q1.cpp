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
    cout<<'('<<s1.area_code<<")"<<s1.exchange<<'-'<<s1.number<<endl;
    cout<<'('<<s2.area_code<<")"<<s2.exchange<<'-'<<s2.number<<endl;
    return 0;
}