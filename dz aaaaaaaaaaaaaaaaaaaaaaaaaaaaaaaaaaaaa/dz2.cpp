#include <iostream>

using namespace std;

class matriza {
    int matrica[4];
    int min=99;
    int max=0;
    int chislo;
    public:
    void vvod () 
    {
        
            for (int j = 0; j < 4; j++)
            {
                
                matrica[j] = (rand() % 9)+1;
                
            }
            
        
    }
    /*void samzapolnaj () 
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
    }*/
    void maxminiskat () 
    {
        
            for (int j = 0; j < 4; j++)
            {
                if (matrica[j]>max)
                {
                    max=matrica[j];
                }
                
                
            }
            
        
                cout<<"max"<<max;
        
            for (int i = 0; i < 4; i++)
            {
                if (matrica[i]<min)
                {
                    min=matrica[i];
                }
                
                
            }
            
        
        cout<<"min"<<min;
        cout<<"\n";
    }
    void godkniga () 
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (matrica[j]>matrica[j+1])
                {
                    max=matrica[j];
                    min=matrica[j+1];
                    matrica[j]=min;
                    matrica[j+1]=max;
                }
                max=0;
                min=0;
                
            }
            
        }
    }
    void vivod()
{
    for (int j = 0; j < 4; j++)
            {
                cout<<matrica[j]<<" ";
            }
            cout<<"\n";
}
void a () 
{
    int indeks;
    cin >> chislo; 
    cin>> indeks;
    matrica[indeks]=chislo;
}
};



int main()
{
    srand(time(NULL));
    matriza aaaa;
    aaaa.vvod();
    aaaa.vivod();
    aaaa.maxminiskat();
    aaaa.godkniga();
    aaaa.vivod();
    aaaa.a();
    aaaa.vivod();
    
    return 0;
}
