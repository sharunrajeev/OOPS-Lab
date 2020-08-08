#include <iostream>
#include <cstdio>

using namespace std;

class bank {
    private:
    int accNo,choice;
    string type,firstName,lastName;
    float bal,handler;
    public:
    bank() {
    	choice=0;
        bal=0.0;
        accNo=0;
        firstName='-';
        type='-';
    }
    void main_menu() {
    	cout<<"\nWelcome to My Bank\n";  
        accept(); 
    	while(choice!=4) {
        	cout<<"\n-- MY BANK --\n";	 	
		    cout<<"Enter your choice\n";
		    cout<<"\n1. Deposit";
		    cout<<"\n2. Withdraw";
		    cout<<"\n3. Balance";
		    cout<<"\n4. Exit\n";
		    cin>>choice;
		    switch (choice){
		        case 1: deposit();
		                break;
		        case 2: withdraw();
		                break;
		        case 3: check_acc();
		                break;
		        case 4: exit(0);
		                break;
		        default : cout<<"Wrong choice\n";
		                break;
        	}
    	}
    }		
    void accept() {
        cout<<"\nEnter your account number\n";
        cin>>accNo;
        cout<<"Enter your first name\n";
        cin>>firstName;
        cout<<"Enter your last name\n";
        cin>>lastName;
        cout<<"Enter type of your account\n";
        cin>>type;
    }
    void deposit() {
        cout<<"\nEnter the amount to deposit\n";
        cin>>handler;
        bal+=handler;
    }
    void withdraw() {
        cout<<"\nYour balance is :"<<bal<<endl;
        cout<<"Enter amount to withdraw\n";
        cin>>handler;
        if(handler>bal) 
            cout<<"Insufficient balance\n";
        else 
            bal-=handler;
    }
    void check_acc() {
        cout<<"\n--- Your account details --- \n";
        cout<<"Account number \t: "<<accNo<<endl;
        cout<<"Name \t\t: "<<firstName+' '+lastName<<endl;
        cout<<"Type \t\t: "<<type<<endl;
        cout<<"Balance amount \t: "<<bal<<endl<<endl;
    }
};

int main() {
    bank b;
	b.main_menu();   
    return 0;
}
