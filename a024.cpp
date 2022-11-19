#include <iostream>
using namespace std;
int main()
{
    int a,b,x;
    cin>>a>>b;
    while(b%a!=0){
        x=b%a;
        b=a;
        a=x;
    }
    cout<<a;
}