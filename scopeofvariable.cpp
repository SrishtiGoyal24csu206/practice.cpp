#include <iostream>
using namespace std;
int x=20;
int update()
{
    //int x=10;local variable
    x++;
    cout<<x<<endl;
    return 0;
}
int main(){
   update();
   cout<<x;
}