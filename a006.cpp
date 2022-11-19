#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int x,y;
    if(b*b-4*a*c>0){
        x=(-b+sqrt(b*b-4*a*c))/2/a;
        y=(-b-sqrt(b*b-4*a*c))/2/a;
        cout<<"Two different roots x1="<<x<<" , x2="<<y;
    }
    else if(b*b-4*a*c==0){
        x=(-b)/2/a;
        cout<<"Two same roots x="<<x;
    }
    else{
        cout<<"No real root";
    }
}
