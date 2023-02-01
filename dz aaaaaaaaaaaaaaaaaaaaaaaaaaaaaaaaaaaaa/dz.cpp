#include <iostream>

using namespace std;

class matriza {
    int n=3;
    int m=4;
    
    int min=0;
    int max=0;
    public:
    void vvod () 
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                srand(time(NULL));
                matrica[i][j] = (rand() % 10) + 1;
                cout<<matrica[i][j];
            }
            cout<<"\n";
        }
    }
    void knigiavtora () 
    {
        
    }
    void knigiizdatelstva () 
    {
        
    }
    void godkniga () 
    {
        
    }
};

int main()
{
    matriza aaaa;
    aaaa.vvod();
    aaaa.knigiavtora();
    aaaa.knigiizdatelstva();
    aaaa.godkniga();
    
    return 0;
}
