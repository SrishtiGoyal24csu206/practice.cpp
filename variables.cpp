#include <iostream>
using namespace std;
//one function call another function
int update()
{    static int x=20;
    //int x=10;local variable
    x++;
    return x;
}
void print(){
    cout<<update();
}
int main(){

   print();
}