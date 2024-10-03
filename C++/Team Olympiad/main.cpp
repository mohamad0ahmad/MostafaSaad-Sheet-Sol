#include <iostream>
using namespace std;

int main (){
    int n = 0;
    cin>>n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int NumOfTeams = 0;
    int ProgrammingStudents = 0;
    int MathStudents = 0;
    int PEStudents = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            ProgrammingStudents++;
        }else if (arr[i] == 2){
            MathStudents++;
        }else{
            PEStudents++;
        }
    }
    NumOfTeams = ProgrammingStudents;
    if (MathStudents<NumOfTeams)
    {
        NumOfTeams=MathStudents;
    }
    if (PEStudents<NumOfTeams)
    {
        NumOfTeams=PEStudents;
    }
    cout<<NumOfTeams<<endl;
    for (int i = 0; i < NumOfTeams; i++){
        for (int j = 0; j < n; j++){
            if (arr[j] == 1){
                for (int k = 0; k < n; k++){
                    if (arr[k] == 2){
                        for (int m = 0; m < n; m++){
                            if (arr[m] == 3)
                            {
                                cout<<(j+1)<<" "<<(k+1)<<" "<<(m+1)<<endl;
                                arr[k]=0;
                                arr[j]=0;
                                arr[m]=0;
                                break;
                            }
                        }
                        break;
                    }
                }
                break;
            }
        }
    } 
}