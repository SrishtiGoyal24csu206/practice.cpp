#include <iostream>
using namespace std;
int fact(int num){

    if(num==0||num==1)
    return 1;

else
return num*fact(num-1);
}
int main()
{
    int x,m;
    cout<<"provide number"<<endl;
    cin>>x;
    m=fact(x);
    cout<<m<<" the factorial is"<<x;
}
