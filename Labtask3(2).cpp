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
return 0;
}

