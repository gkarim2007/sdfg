#include <iostream>
#include <string>
using namespace std;

template <typename t>
class massiv {
    int n;
    t *arrei;
    public:
    massiv ()
    {
        cin>>n;
        arrei=new t [n*2];
        for (int i = 0; i < n; i++)
        {
            cin>>arrei[i];
            cout<<arrei[i]<<" ";
        }
            cout<<"\n";
    }
    void dobavitnazad()
    {
        cin>>arrei[n];
        n++;

        for (int i = 0; i < n; i++)
        {
            cout<<arrei[i]<<" ";
        }
            cout<<"\n";
    }
    void dobavitvpered()
    {
        n++;
        for (int i = n; i > 0; i--)
        {
            arrei[i]=arrei[i-1];
            
        }
        
        cin>>arrei[0];
        for (int i = 0; i < n; i++)
        {
            
            cout<<arrei[i]<<" ";
        }
            cout<<"\n";
    }
    void uniztozitvpered()
    {
        n--;
        
        for (int i = 0; i < n; i++)
        {
            
            cout<<arrei[i]<<" ";
        }
            cout<<"\n";
    }
    void uniztozitnazad()
    {
        
        for (int i = 0; i < n; i++)
        {
            arrei[i]=arrei[i+1];
        }
        n--;
        
        for (int i = 0; i < n; i++)
        {
            
            cout<<arrei[i]<<" ";
        }
            cout<<"\n";
    }
};
int main() {
    massiv<int> aaa;
    aaa.dobavitnazad();
    aaa.dobavitvpered();
    aaa.uniztozitnazad();

    aaa.uniztozitvpered();
    aaa.uniztozitvpered();
    aaa.uniztozitvpered();
    return 0;
}
