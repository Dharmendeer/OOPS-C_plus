#include<iostream>
using namespace std;

class ban{

    char name[100], add[100], y;
    int bal;

    public:
    void openAcco();
    void depositMon();
    void withdrawMon();
    void displayAcc();

};

void ban::openAcco(){
    cout<<"Enter Your full Name ::";
    cin.ignore();
    cin.getline(name,100);
    cout<<"Enter your Adress ::";
    cin.ignore();
    cin.getline(add,100);
    cout<<"What type of account you want to open saving (s) Current (c )::";
    cin>>y;
    cout<<"Enter amount for deposit :: ";
    cin>>bal;
    cout<<"Your Account is Created \n";
}

void ban ::depositMon(){
    int a;
    cout<<"How Much You want to deposit Money ::";
    cin>>a;
    bal=bal+a;
    cout<<"Total Balance is ::"<<bal;
}

void ban::displayAcc(){
    cout<<"Your Name is :: \t"<<name;
    cout<<"Your Address is :: \t"<<add;
    cout<<"Type of Account That you open :: \t"<<y;
    cout<<"Your Balance is ::\t"<<bal;
}

void ban::withdrawMon(){\
    float amo;
    cout<<"\n withdraw ::";
    cout<<"\n Enter Amount to withdraw ::";
    cin>>amo;

    if(amo>=0){
        cout<<"You have not sufficent amount ::";
    }
    else{
        bal=bal-amo;
        cout<<"Now total Amount left in your account ::"<<bal;
    }
}

int main(){
    bank obj;
    int ch;
    

    do
    {
    cout<<"1) open Account \n";
    cout<<"2) Deposit Money \n";
    cout<<"3) Withdraw money \n";
    cout<<"5) Exit ";
    cout<<"Select the option from above ::\n";
    cin<<ch;

    switch(ch)
{
    case 1:
        cout<<"1) open Account \n"<<obj.openAcco;
        break;

}    } while ({/* condition */});
    
    
    return 0;
    
}