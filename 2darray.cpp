#include<iostream>
using namespace std;
int main()
{
    int arr[2][3],i,j;
    cout<< "provide array elements";
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"provide array looks like"<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"\t"<<arr[i][j];
        }
        cout<<endl;  
    }
    return 0;
}