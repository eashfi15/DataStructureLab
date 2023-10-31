#include<iostream>
using namespace std;
int main()
{
    int minDiff=10000000;
    int n1,n2;
    int arr[10];
    for(int i=0;i<10;i++)
    {
        cout<<"Enter Array Value:"<<endl;
        cin>>arr[i];
    }
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            int sum = arr[i] + arr[j];
            if (abs(sum) < minDiff) {
            minDiff = abs(sum);
            n1 = arr[i];
            n2 = arr[j];
      }
    }
  }
  cout<<"The sum of "<<n1<<" and "<<n2<<" is closest to zero."<<endl;

  return 0;
}
