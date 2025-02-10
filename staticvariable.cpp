#include <iostream>
using namespace std;

int update()
{    static int x=20;
    //int x=10;local variable
    x++;
    return x;
}
int main(){

   int y=update();
   cout<<y<<endl;
   y=update();
   cout<<y;
}