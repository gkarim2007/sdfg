#include <string>
#include <iostream>
using namespace std;


int main() {
    int a,b,o;
    string g;
    cin>>a;
    cin>>g;
    cin>>b;

if (g=="+")
{
    cout<<(a+b);
}
if (g=="-")
{
    cout<<(a-b);
}
if (g=="*")
{
    cout<<(a*b);
}
if (g=="/")
{
    cout<<(a/b);
}
}