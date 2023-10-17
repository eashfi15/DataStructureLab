#include<iostream>
using namespace std;
#define size 5
int Arr[size],top=-1;
void push(int value)
{
    if(top==size-1)
        {
            cout<<"Stack is full!"<<endl;
        }
    else
       {
           top++;
           Arr[top]=value;
       }
}

bool isempty()
{
    if(top==-1)
    return true;
    else
    return false;
}

void pop()
{
    if(isempty())
        cout<<"Stack is empty!\n";
    else
        top--;
}

void show_top()
{
    if(isempty())
    cout<<"Element at top is: "<<Arr[top]<<"\n";
}

void display()
{
    if(isempty())
    {
        cout<<"Stack is empty!\n";
    }
    else
    {
        for(int i=0; i<=top;i++)
            cout<<Arr[i]<<endl;
        cout<<"\n";
    }
}

main(){
    int choice,flag=1,value;
    while(flag==1)
    {
        cout<<"\n1.PUSH 2.POP 3.show_top 4.displaystack";
        cin>>choice;
        switch(choice)
        {
 case 1: {cout<<"Enter Value:\n"<<endl;
                 cin>>value;
                 push(value);}
                 break;
        case 2: {pop();
                break;}
        case 3: {show_top();
                break;}
        case 4: {display();
                break;}
        default: {
        cout<<"invalid choice"<<endl;}}




    }

}
