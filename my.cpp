#include<iostream>
using namespace std;

class bank
{
private:
   int acc;
   char name[30];
   float bal;
public:
    void read_data()
    {
        cout<<"Enter your account no: ";
        cin>>acc;
        cout<<"Enter your name: ";
        cin>>name;
        cout<<"Enter your balance: ";
        cin>>bal;
    }

    void deposit()
    {
        int x;
        cout<<"Enter amount to deoposit : ";
        cin>>x;
        bal=bal+x;

    }

    void withdraw()
    {
        int x;
        cout<<"Enter amount to withdraw: ";
        cin>>x;

        if(bal>=0){
            bal=bal-x;
        }
        else{
            cout<<"Insufficent fund --";

        }
    }

    void display()
    {
        cout<<"Your Account no is : "<<acc<<endl;
        cout<<"Your Name is : "<<name<<endl;
        cout<<"Your balance is :"<<bal<<endl;

    }
};
int main()
{
    bank b;
    int ch;
    
    do
    {
        cout<<"Enter 1:- Create account: "<<endl;
        cout<<"Enter 2:- Deposit: "<<endl;
        cout<<"Enter 3:- Withdraw: "<<endl;
        cout<<"Enter 4:- Display: "<<endl;
        cin>>ch;

        switch (ch)
        {
        case 1:
            b.read_data();
            break;
        case 2:
            b.deposit();
            break;
        case 3:
            b.withdraw();
            break;
        case 4:
            b.display();
            break;
        
        
        }
        
    } while (ch !=5);
    
    return 0;
}

