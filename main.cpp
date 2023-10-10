#include <iostream>
using namespace std;

void encode(string s, int j)
{
for(int i=j;i<s.length();i++)
{
    if (s[i]!= ' ')
    {
        s[i]=char(int(s[i])+j);
    }

}
 cout<<"The encoded string is:"<<endl;
cout<<s<<endl;
}
void decode(string s, int j)
{
for(int i=j;i>s.length();i++)
{
    if (s[i]!= ' ')
    {
        s[i]=char(int(s[i])-j);
    }

}
cout<<"The decoded string is:"<<endl;
cout<<s;
}


int main()
{

 //encode ( "EASHFI",3);
 //decode ("EASHFI",3);
 int n;
 string s,m;
 cout<< "ENETR THE SENTENCE:  ";
 getline (cin,s);
 cout<< "ENTER THE NUMBER TO MOVE FORWARD ALPHABET: ";
 cin>>n;

 encode(s,n);
 decode(s,n);

}
