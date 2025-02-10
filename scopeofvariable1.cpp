#include <iostream>
using namespace std;
int x=20;
int update()
{
    //int x=10;local variable
    cout<<x<<endl;
    x++;
    return 0;
}
int main(){
   update();
   cout<<x;
}