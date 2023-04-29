#include <iostream>

using namespace std;



int main()
{
    int a [3][3]{{8,1,6},{3,5,7},{4,9,2}};
    int n1=3;
    int n2=3;
    int aa=0;
    for (int i = 0; i < n1; i++)
    {
        aa=a[i][0]+a[i][1]+a[i][2];
        if (aa==(a[i][0]+a[i][1]+a[i][2]))
        {
            
        }
        else
        {
            cout<<"NET";
            return 0;
        }
    }
    for (int i = 0; i < n2; i++)
    {
        if (aa==(a[0][i]+a[1][i]+a[2][i]))
        {
            
        }
        else
        {
            cout<<"NET";
            return 0;
        }
        
        
    }
    
    cout<<"DA";

}

