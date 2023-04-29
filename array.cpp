#include <iostream>

using namespace std;


int main()
{
    int i = 0;
    string a[5]{"v","a","l","e","t"};
    string d="";
    int b=4;
    string c="";
    for (; i < 4; i++)
    {
        c=a[i];
        a[i]=a[b];
        a[b]=c;
        c="";
        b--;
        d=d+a[i];
        
    }
    cout<<d;

}

