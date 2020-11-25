/* Question : Define a class Date. Overload the operator '+' such that it adds a given date with a
    certain number of days. */
// Code
#include <iostream>
using namespace std;
class date_modules {
    
    protected :
    int day,month,year;

    public :
    bool dayValidator();
    bool monthValidator();
    bool yearValidator();
    bool isLeapYear();
    bool dateValidity();
    void tempDate(int *d, int *m, int *y, int n, int maxDays);
    void nextDate(int n);   
};

class Date : protected date_modules{
    
    public:
    void getDate();
    void printDate();
    void operator + (int no_of_days);
};

int main() {
    int no_of_days;
    Date d;
    d.getDate();
    cout<<"Enter the days to be addded  :";
    cin>>no_of_days;
    d + no_of_days;             // Adding Date class with interger n
    cout<<"Changed Date                 :";
    d.printDate();
    return 0;
}

bool date_modules :: dayValidator() {
    if ((month==4) || (month==6) || (month==9) || (month==11)) {
        if (day >30) {
            return false;
        }
    }
    return ((day>0) && (day<32));
}

bool date_modules :: monthValidator() {
    return ((month>0) && (month<13));
}

bool date_modules :: yearValidator() {
    return ((year>999) && (year<3001));
}

bool date_modules :: isLeapYear() {
    return ((year%4==0) && (year%100!=0) || (year%400==0));
}

bool date_modules :: dateValidity() {
    bool isFebruary = false;
    if(isLeapYear()) 
        isFebruary = (month!=2) || (day<=29);
    else 
        isFebruary = (month!=2) || (day<=28);
    return (dayValidator() && monthValidator() && yearValidator() && isFebruary);
}

void date_modules :: tempDate(int *d, int *m, int *y, int n, int maxDays) {
    if ((day+n)>maxDays) {
        *d = (day+n) - maxDays;
        *m = (month%12) + 1;
        if(month == 12) 
            *y = year + 1;
        else 
            *y = year;
    }
    else {
        *d = day + n;
        *m = month;
        *y = year;
    }
    
}

void date_modules :: nextDate(int n) {
    int d,m,y;
    
    if (!dateValidity())
    {
        cout<<"Invalid Date Entered !\n";
        exit(0);
    }
    if (month == 2) {
        if(isLeapYear()) 
            tempDate(&d,&m,&y,n,29);
        else
            tempDate(&d,&m,&y,n,28);
    }    
    else if ((month==4) || (month==6) || (month==9) || (month==11)) 
        tempDate(&d,&m,&y,n,30);
    else 
        tempDate(&d,&m,&y,n,31);
    
    this->day = d;
    this->month = m;
    this->year = y;
}

void Date :: getDate() {
    cout<<"\nEnter the date in dd-mm-yyyy format\n";
    cin>>day>>month>>year;
}

void Date :: printDate() {
    cout<<"Date : "<<day<<'/'<<month<<'/'<<year<<endl;
}

void Date :: operator + (int no_of_days){
    this->nextDate(no_of_days);
}