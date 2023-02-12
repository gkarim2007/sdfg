#include <string>
#include <iostream>
using namespace std;
class Parent {
    int n;
 public:
    
    
    void vvod()
    {
        cin>>this->n;
    string *stroka=new string[n];
        for (int i = 0; i < n; i++)
        {
            cin>>stroka[i];
        }
        for (int i = 0; i < n; i++)
        {
            cout<<stroka[i];
        }
    }
};

int main() {
    
    Parent test1;
    test1.vvod();
    
    return 0;
}