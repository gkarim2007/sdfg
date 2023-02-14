#include <string>
#include <iostream>
using namespace std;
class dvigatel {
    int mosch;
    int ves;
    string nazvanije;
 public:
    dvigatel()
    {
        this->mosch=999;
        this->ves=1;
        this->nazvanije="RTX3600";
    }
    void getmosch()
    {
        cout<<"mosch "<<mosch<<"\n";
    }
    void getves()
    {
        cout<<"ves "<<ves<<"\n";
    }
    void getnazvanije()
    {
        cout<<"nazvanije "<<nazvanije<<"\n";
    }
    void getvse()
    {
        getmosch();
        getves();
        getnazvanije();
    }
};
class mashina : dvigatel{
    int babki;
    string cvet;
    string Nazvanije;
 public:
    mashina()
    {
        this->babki=99999999;
        this->cvet="baklajan";
        this->Nazvanije="mersebenzdens";
    }
    void getvsevse()
    {
        cout<<"babki"<<babki<<"\n";
        cout<<"cvet"<<cvet<<"\n";
        cout<<"Nazvanije"<<Nazvanije<<"\n";
        cout<<"dvigatel"<<"\n";
        getvse();
    }
};
int main() {
    
    mashina test1;
    test1.getvsevse();
    
    return 0;
}
