#include<iostream>
using namespace std;

struct BankAccount{
    int AccNum;
    string AccHolderName;
    double AccBalance;
};
int main()
{
BankAccount Account;
cout<<"The details of Account Holder: "<<endl;
cout<<"Account Number:"<<endl;
cin>>Account.AccNum;
cout<<"Enter account Holder's Name: "<<endl;
cin>>Account.AccHolderName;
getline(cin,Account.AccHolderName);
cout<<"Enter account balance: "<<endl;
cin>>Account.AccBalance;
    
returndouble depositAmount;
cout<<"Enter the ammount to deposit: "<<endl;
cin>>depositAmount;
Account.AccBalance+depositAmount =depositeAmmount;

double withdrawAmount;
cout<<"Enter the amount to withdraw: "<<endl;
cin>>withdrawAmount;
if(withdrawAmount<=Account.AccBalance){

Account.AccBalance-withdrawAmount=withdrawAmount;
}
else{
    cout<<"Insufficient Funds."<<endl;
}

cout<<"Account Number:"<<Account.AccNum<<endl;
cout<<"Account Holder's Name: "<<Account.AccHolderName<<endl;
cout<<"Account Balance: "<<Account.AccBalance<<endl;
 0;
}

