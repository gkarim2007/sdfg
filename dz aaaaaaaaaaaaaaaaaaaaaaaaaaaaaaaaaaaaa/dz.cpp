#include <iostream>
#include <string>
using namespace std;
class spravochnik
{
    string a;
    int b;
    string c;
    string nazvanije="ROUDENR";
    int telefon=4258997098;
    string vladelec="SDFG";
    string nazvanije2="ROUDENR2";
    int telefon2=4258997082;
    string vladelec2="SDFG2";
    public:
    void iskatponazvaniju()
    {
        cin>>a;
        if (a==nazvanije)
        {
            cout<<telefon<<"\n";
            cout<<vladelec;
        }
        if (a==nazvanije2)
        {
            cout<<telefon2<<"\n";
            cout<<vladelec2;
        }
    }
    void iskatpotelefonu()
    {
        cin>>b;
        if (b==telefon)
        {
            cout<<nazvanije<<"\n";
            cout<<vladelec;
        }
        if (b==telefon2)
        {
            cout<<nazvanije2<<"\n";
            cout<<vladelec2;
        }
    }
    void iskatpovladelcu()
    {
        cin>> c;
        if (c==vladelec)
        {
            cout<<telefon<<"\n";
            cout<<nazvanije;
        }
        if (c==vladelec2)
        {
            cout<<telefon2<<"\n";
            cout<<nazvanije2;
        }
    }
};

int main()
{
    spravochnik aaa;
    aaa.iskatponazvaniju();
    aaa.iskatpotelefonu();
    aaa.iskatpovladelcu();
    return 0;
}
