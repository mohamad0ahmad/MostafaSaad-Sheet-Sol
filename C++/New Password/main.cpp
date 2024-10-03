#include <iostream>
using namespace std;

int main (){
    int n = 0, k = 0;
    cin>>n;
    cin>>k;
    int x = n/k;
    int y = n%k;
    char c = 'a';
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cout<<c++;
        }
       c = 'a'; 
    }
    c = 'a';
    for (int i = 0; i < y; i++)
    {
        cout<<c++;
    }
}