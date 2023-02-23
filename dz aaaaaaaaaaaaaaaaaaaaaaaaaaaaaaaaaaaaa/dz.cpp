#include <iostream>

using namespace std;

int main()
{
    int sovpajenija=0;
    int n;
    cin >>n;
    int *a= new int[n];
    int m;
    cin >>m;
    int *b= new int[m];
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int j=0;j<n;j++)
    {
        for(int i=0;i<m;i++)
        {
            if(a[j]!=b[i])
            {
                sovpajenija=sovpajenija+ 1;
            }
        }
    }
    int *c= new int[sovpajenija];
    for(int j=0;j<n;j++)
    {
        for(int i=0;i<m;i++)
        {
            if(a[j]!=b[i])
            {
                c[j]=b[i];
                
            }
        }
        cout<<c[j];
    }
    return 0;
}
