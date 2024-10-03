#include <iostream>
using namespace std;

int main (){
    int distinict = 0;
    string S;
    getline(cin, S);
    for (int i = 0; i < S.length(); i++)
    {
        if (S[i]>='a' && S[i]<='z')
        {
            for (int j = 0; j < S.length(); j++){
                if (i==j)
                {
                    continue;
                }
                if(S[i]==S[j]){
                    S[j]=0;
                }
            }
        } 
    }
    for (int i = 0; i < S.length(); i++)
    {
        if (S[i]>='a' && S[i]<='z')
        {
            distinict++;
        }
    }
    cout<<distinict;  
}