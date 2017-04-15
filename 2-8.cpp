#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a positive integer:"<<endl;
    cin>>n;
    cout<<"number   "<<n<<"  factors: ";

    for (int i=1;i<=n;i++)
        if (n%i==0)
        cout<<i<<"  ";
        return 0;
}
