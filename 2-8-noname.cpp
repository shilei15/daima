#include<iostream>
using namespace std;
int main()
{
    int i,a=0;
    for(i=0;i<=5;i++)
    {
        do
        {
            i++;
            a++;
        }while(i<3);
        i++;
    }
    cout<<a<<","<<i<<endl;
    return 0;
}
