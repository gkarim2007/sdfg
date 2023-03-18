#include <iostream>
#include <string>
using namespace std;

class pole
{
string doska[9][9]{{"  ","1 ","2 ","3 ","4 ","5 ","6 ","7 ","8 "},{"1 ","  ","w ","  ","w ","  ","w ","  ","w "},{"2 ","w ","  ","w ","  ","w ","  ","w ","  "},{"3 ","  ","w ","  ","w ","  ","w ","  ","w "},{"4 ","# ","  ","# ","  ","# ","  ","# ","  "},{"5 ","  ","# ","  ","# ","  ","# ","  ","# "},{"6 ","v ","  ","v ","  ","v ","  ","v ","  "},{"7 ","  ","v ","  ","v ","  ","v ","  ","v "},{"8 ","v ","  ","v ","  ","v ","  ","v ","  "}};
int vw=1;
int hodit;
bool shodil=false;
int a;
int b;
public:
    void vivod()
    {
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                cout <<doska[i][j];
            }
            cout<<"\n";
        }
        
    }
    void hodi()
    {
        while (shodil!=true)
        {
            if (vw==1)
            {
                cin>>a;
                cin>>b;
                if (doska[a][b]=="w ")
                {
                    cin>>hodit;
                    if (hodit==1)
                    {
                        if (doska[a+1][b-1]=="# ")
                        {
                            doska[a][b]="# ";
                            doska[a+1][b-1]="w ";
                            shodil=true;
                        }
                        else if ((doska[a+1][b-1]=="v ")&&(doska[a+2][b-2]=="# "))
                        {
                            doska[a][b]="# ";
                            doska[a+1][b-1]="# ";
                            doska[a+2][b-2]="w ";
                            shodil=true;
                        }
                        else
                        {
                            cout<<"ERROR № 0002";
                            cout<<"\n";
                        }
                    }
                    if (hodit==2)
                    {
                        if (doska[a+1][b+1]=="# ")
                        {
                            doska[a][b]="# ";
                            doska[a+1][b+1]="w ";
                            shodil=true;
                        }
                        else if ((doska[a+1][b+1]=="v ")&&(doska[a+2][b+2]=="# "))
                        {
                            doska[a][b]="# ";
                            doska[a+1][b+1]="# ";
                            doska[a+2][b+2]="w ";
                            shodil=true;
                        }
                        else
                        {
                            cout<<"ERROR № 0002";
                            cout<<"\n";
                        }
                    }
                }
                else
                {
                    cout<<"ERROR № 0001";
                    cout<<"\n";
                }
            }
            if (vw==2)
            {
                cin>>a;
                cin>>b;
                if (doska[a][b]=="v ")
                {
                    cin>>hodit;
                    if (hodit==1)
                    {
                        if (doska[a-1][b-1]=="# ")
                        {
                            doska[a][b]="# ";
                            doska[a-1][b-1]="v ";
                            shodil=true;
                        }
                        else if ((doska[a-1][b-1]=="w ")&&(doska[a-2][b-2]=="# "))
                        {
                            doska[a][b]="# ";
                            doska[a-1][b-1]="# ";
                            doska[a-2][b-2]="v ";
                            shodil=true;
                        }
                        else
                        {
                            cout<<"ERROR № 0002";
                            cout<<"\n";
                        }
                        
                    }
                    if (hodit==2)
                    {
                        if (doska[a-1][b+1]=="# ")
                        {
                            doska[a][b]="# ";
                            doska[a-1][b+1]="v ";
                            shodil=true;
                        }
                        else if ((doska[a-1][b+1]=="w ")&&(doska[a-2][b+2]=="# "))
                        {
                            doska[a][b]="# ";
                            doska[a-1][b+1]="# ";
                            doska[a-2][b+2]="v ";
                            shodil=true;
                        }
                        else
                        {
                            cout<<"ERROR № 0002";
                            cout<<"\n";
                        }
                        
                    }
                }
                else
                {
                    cout<<"ERROR № 0001";
                    cout<<"\n";
                }
            }
            
        }
        shodil=false;
        if(vw==1)
        {
            vw=2;
        }
        else{
            vw=1;
        }
    }
};



int main() {
    int k=0;
    pole pole;
    while (k!=1)
    {
        pole.vivod();
        pole.hodi();
    }
    
    
    return 0;
}

