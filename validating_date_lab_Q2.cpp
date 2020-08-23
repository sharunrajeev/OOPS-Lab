#include <iostream>

using namespace std;

class Date {
    int date,month,year;

    public:
    void input_date(){
        cout<<"Enter date, month, year respectively in this order \n";
        cin>>date>>month>>year;
    }
    bool isLeapYear(int year) {
        if(year%4==0 && year%100!=0 || year%400==0)
            return true;
        else 
            return false;
    }
    bool check_vaidity(){
        if(month < 1 || month > 12) return false;
        if(date < 1 || date > 31) return false;
        if(month == 2) {
            if(isLeapYear(year)) {
            	if(date==29) {
            		month++;
            		date=0;
            	}
            	return (date <= 29);
            }
            else {
            	if(date==28) {
            		month++;
            		date=0;
            	}
            	return (date <= 28);
            }
        }
        if(month==4 || month==6 || month==9 || month==11) {
            return (date <= 30);
        }
        return true;
    }
	void nextDate() {
		if(date==31 && month==12) {
			year++;
			date=1;
			month=1;
		}
		else if(date==31) {
			month++;
			date=1;
		}
		else if(month==4 || month==6 || month==9 || month==11) {
            if(date == 30) {
            	month++;
            	date=1;
            }
        }
        else date++;
        cout<<date<<'/'<<month<<'/'<<year<<endl;
    }
    void result() {
        if(check_vaidity()){
            cout<<"Valid, Next date : ";
            nextDate();
        }
        else {
            cout<<"Not Valid"<<endl;
        }
    }
}d;

int main() {
    d.input_date();
    d.result();
    return 0;
}
