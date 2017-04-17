#include<iostream>
using namespace std;
enum gameresult {win,lose,tie,cancel};
int main()
{
    gameresult result;
    enum  gameresult omit=cancel;

    for(int count=win;count<=cancel;count++)
    {
        result=gameresult(count);
        if(result==omit)
            cout<<"the game was cancelled";
        else{
            cout<<"the game was played";
            if(result==win)
                cout<<" and we won!";
            if(result==lose)
                cout<<" and we lost.";
            cout<<endl;
        }
    }
    return 0;
}
