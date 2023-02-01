#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void infileoutfile(std::string name) {
    std::ifstream fin;
    fin.open(name);
    int stroka;
    string strokaa;
    std::string line;
    std::string buf;
    int i=0;


    if (fin.is_open()) {

        while (fin.good()) {
            
            std::string line;

            std::getline(fin, line);

            if (i!=stroka) {

                
                buf=buf+line+"\n";
            i++;
            } else {
                cin>>strokaa
            }
            
        }
        
    } else {
        std::cout << "File not open!!!!\n";
    }
}

int main() {
    std::string name ="name.txt";
    infileoutfile(name);
    return 0;
}