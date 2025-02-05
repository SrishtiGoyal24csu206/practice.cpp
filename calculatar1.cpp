#include<iostream>
using namespace std;
 int main(){

    int n1,n2;
    cout<<"enter 2 integers";
    cin>>n1>>n2;

    cout<<"enter an operator(+,-,*,/,%)";
    char op;
    cin>>op;

    switch (op) {
        case'+':
        cout<<"addition is:"<<n1+n2<<endl;
        break;
         case'-':
        cout<<"subtraction is:"<<n1-n2<<endl;
        break;
         case'*':
        cout<<"multiplication is:"<<n1*n2<<endl;
        break;
         case'/':
        cout<<"division is:"<<n1/n2<<endl;
        break;
         case'%':
        cout<<"remainder is:"<<n1%n2<<endl;
        break;
        default:
        cout<<"enter a valid operator";
        break;

}
}