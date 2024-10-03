#include <iostream>
using namespace std;

int main (){
    int queue = 0, distressedkids =0;
    long long packs =0;
    cin>>queue;
    cin>>packs;
    for (int i = 0; i < queue; i++)
    {
        long long packsOperation = 0;
        char operation = 0;
        cin>>operation;
        cin>>packsOperation;
        if (operation == '+')
        {
            packs += packsOperation;
        }else{
            if (packsOperation > packs)
            {
                distressedkids++;
            }else{
                packs -= packsOperation;
            }
            
        }
    }
    cout<<packs<<" "<<distressedkids;
}