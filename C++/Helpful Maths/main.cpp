#include <iostream>
#include <algorithm>  
using namespace std;

int main (){
    string S ;
    cin>>S;
    int *arr = new int[(S.length()/2)+1];
    int index = 0;
    for (int i = 0; i < S.length(); i+=2)
    {
        arr[index] = S[i] - '0';
        index++;
    }
    
    sort(arr, arr + ((S.length()/2)+1));
    for (int i = 0; i < ((S.length()/2)+1); i++)
    {
        if (i == ((int)(S.length()/2)))
        {
            cout<<arr[i];
        }else{
            cout<<arr[i]<<"+";
        }
        
    }
}