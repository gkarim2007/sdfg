#include <iostream>

using namespace std;

class rabota {
    int n=3;
    string *ima=new string[n];
    int *staj=new int [n];
    int *zarplata=new int [n];
    string *doljnost=new string[n];
    string doljnostvibor;
    int stajvibor;
    int zarplatavibor;
    public:
    void vvod () 
    {
        for (int i = 0; i < this->n; i++)
        {
        cout<<"имя ";
        cin>> this->ima[i];
        cout<<"стаж ";
        cin>> this->staj[i];
        cout<<"зарплата ";
        cin>> this->zarplata[i];
        cout<<"должность ";
        cin>> this->doljnost[i];
        }
    }
    void knigiavtora () 
    {
        cout<<"stajvibor ";
        cin>>stajvibor;
        for (int i = 0; i < this->n; i++)
        {
            if(this->stajvibor<this->staj[i])
            {
                cout<<this->ima[i];
                cout<<"\n";
            }
        }
    }
    void knigiizdatelstva () 
    {
        cout<<"zarplatavibor ";
        cin>>this->zarplatavibor;
        for (int i = 0; i < this->n; i++)
        {
            if(this->zarplatavibor<this->zarplata[i])
            {
                cout<<this->ima[i];
                cout<<"\n";
            }
        }
    }
    void godkniga () 
    {
        cout<<"doljnostvibor ";
        cin>>this->doljnostvibor;
        for (int i = 0; i < this->n; i++)
        {
            if(this->doljnostvibor==this->doljnost[i])
            {
                cout<<this->ima[i];
                cout<<"\n";
            }
        }
    }
};

int main()
{
    rabota aaaa;
    aaaa.vvod();
    aaaa.knigiavtora();
    aaaa.knigiizdatelstva();
    aaaa.godkniga();
    
    return 0;
}
