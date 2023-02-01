#include <iostream>

using namespace std;

class matriza {
    int matrica[3][4];
    int matrica2[3][4];
    int min=99;
    int max=0;
    public:
    void vvod () 
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                
                matrica[i][j] = (rand() % 9)+1;
                cout<<matrica[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    void samzapolnaj () 
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cin>>matrica[i][j];
                
            }
            
        }
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cout<<matrica[i][j]<<" ";
                
            }
            cout<<"\n";
        }
    }
    void maxminiskat () 
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                if (matrica[i][j]>max)
                {
                    max=matrica[i][j];
                }
                
                
            }
            
        }
        cout<<"max"<<max;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                if (matrica[i][j]<min)
                {
                    min=matrica[i][j];
                }
                
                
            }
            
        }
        cout<<"min"<<min;
    }
    void godkniga () 
    {
        
    }
};

int main()
{
    srand(time(NULL));
    matriza aaaa;
    aaaa.vvod();
    aaaa.samzapolnaj();
    aaaa.maxminiskat();
    aaaa.godkniga();
    
    return 0;
}
