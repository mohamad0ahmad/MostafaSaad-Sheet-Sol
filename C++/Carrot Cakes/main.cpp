#include <iostream>
using namespace std;

int main (){
    int n = 0,t = 0,k = 0,d = 0;
    cin>>n;
    cin>>t;
    cin>>k;
    cin>>d;

    double oven1Work = d/t;
    if (oven1Work<1)
    {
        n -= k;
        if(n > 0){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
    }else{
        for (int i = 0; i < oven1Work; i++){
        n -= k;
        }
        n -= k;
        if (n > 0)
        {
            cout<<"YES";
        }else{
            cout<<"NO";
        }
    }   
}