
#include <iostream>
#include <list>
using namespace std;
#include <fstream>
class aaa {
    string line1=0;
    string line2=0;
    std::ifstream in ("D:\\name.txt");
    
    if (in.is_open())
    {
        cout << "Hello World!" << std::endl;
    }
    else{
        cout<<"aaa";
    }
    std::ifstream oout("D:\\aaa.txt");
    
    if (oout.is_open())
    {
        cout << "Hello World!" << std::endl;
    }
    else{
        cout<<"aaa";
    }
    getline(in, line1);
    getline(oout, line2);
    if(line1==line2)
    {
        cout<<"a";
    }

};



int main() {
    
    std::ofstream out; 
 

    out.open("name.txt"); 
    
    if (out.is_open())
    {
        cout << "Hello World!" << std::endl;
    }
    else{
        cout<<"aaa";
    }
    return 0;
}
