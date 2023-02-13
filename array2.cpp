#include <string>
#include <iostream>
using namespace std;


int main()
{
    int n,m;
    cin>>n>>m;
    int sum=0;
    int** Mas = new int *[n];
    for (int i = 0; i < n; i++)
        Mas[i] = new int [m];
 
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            cin>>Mas[i][j];
        }
 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout<<Mas[i][j]<<" ";
        cout<<"\n";
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum=sum+Mas[i][j];
        }
        cout<<sum/m;
        sum=0;
    }
    
    return 0;
}