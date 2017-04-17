#include<iostream>
using namespace std;
int main()
{
    int n,right_digit,newnum=0;
    cout<<"enter the number:"<<endl;
    cin>>n;
    cout<<"the number in reverse order is  ";
    do{
        right_digit=n%10;
        cout<<right_digit;
        n/=10;
    }while(n!=0);
    cout<<endl;
    return 0;
}
