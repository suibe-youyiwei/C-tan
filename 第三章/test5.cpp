#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float a,b,c,x1,x2,ans;
    cin>>a>>b>>c;
    ans = b*b-4*a*c;
    if(ans>0){
        x1 = (-b+sqrt(b*b-4*a*c))/2*a;
        x2 = (-b-sqrt(b*b-4*a*c))/2*a;
        cout<<"x1="<<x1<<"\nx2="<<x2<<endl;
    }
    else if(ans==0){
        x1 = (-b+sqrt(b*b-4*a*c))/2*a;
        cout<<"x1=x2="<<x1<<endl;
    }
    else{
        cout<<"no answer"<<endl;
    }
    
}