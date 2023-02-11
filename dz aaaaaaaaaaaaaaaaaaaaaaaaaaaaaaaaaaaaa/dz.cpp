#include <string>
#include <iostream>
using namespace std;
class Parent {
 public:
    string name; 
    void imauznat(string ima)
    {
        this->name=ima;
    }

};

class zver1 : public Parent {
 private:
    string vid="koshka";
 public:
void imagovorit()
{
    cout<<this->name<<'\n';
}
void vidgovorit()
{
    cout<<this->vid<<'\n';
}

};
class zver2 : public Parent {
 private:
    string vid="sobaka";
 public:
void imagovorit()
{
    cout<<this->name<<'\n';
}
void vidgovorit()
{
    cout<<this->vid<<'\n';
}

};
class zver3 : public Parent {
 private:
    string vid="popugai";
 public:
void imagovorit()
{
    cout<<this->name<<'\n';
}
void vidgovorit()
{
    cout<<this->vid<<'\n';
}

};
int main() {
    
    Parent *test1 = new zver1();
    ((zver1*)test1)->imauznat("ROUDENR");
    ((zver1*)test1)->imagovorit();
((zver1*)test1)->vidgovorit();
    delete test1;
    Parent *test2 = new zver2();
    ((zver2*)test2)->imauznat("SDFG");
    ((zver2*)test2)->imagovorit();
((zver2*)test2)->vidgovorit();
    delete test2;
    Parent *test3 = new zver3();
    ((zver3*)test3)->imauznat("AAAAAA");
    ((zver3*)test3)->imagovorit();
((zver3*)test3)->vidgovorit();
    delete test3;
    return 0;
}