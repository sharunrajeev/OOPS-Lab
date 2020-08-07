#include <iostream>

using namespace std;

class bank {
    private:
    int accNo;
    string type,firstName,lastName;
    float bal,handler;
    public:
    bank() {
        bal=0.0;
        accNo=0;
        firstName='-';
        type='-';
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
    int choice=0;
    do {
        cout<<"\nWelcome to My Bank\n";
        cout<<"Enter your choice\n";
        cout<<"1. Create new account";
        cout<<"\n2. Deposit";
        cout<<"\n3. Withdraw";
        cout<<"\n4. Balance";
        cout<<"\n5. Exit\n";
        cin>>choice;
        switch (choice) {
            case 1: b.accept();
                    break;
            case 2: b.deposit();
                    break;
            case 3: b.withdraw();
                    break;
            case 4: b.check_acc();
                    break;
            case 5: exit(0);
                    break;
            default : cout<<"Wrong choice\n";
                    break;
        }
    }while(choice!=5);
    return 0;
}
