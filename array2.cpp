#include <iostream>

using namespace std;


int main() {
    int a[5]{5,10,5,10,20};
    int cena=5;
    int dengi5=0;
    int dengi10=0;
    int dengi20=0;
    for (int i = 0; i < 5; i++)
    {
        if (a[i]==5)
        {
            if (a[i]==5)
            {
                dengi5=dengi5=+1;
            }
        }
            
        
        if (a[i]==10)
        {
            if (dengi5>0)
            {
                dengi10+=1;
                dengi5-=1;
            }
            else
            {
                cout<<"aaaaaaaaaaaaaaaaaaaa";
            }
            
            
        }
        if (a[i]==20)
        {
            
            if (dengi10>0)
            {
                dengi20+=1;
                dengi10-=1;
                if (dengi5>0)
                {
                    dengi5-=1;
                }
                else
                {
                    cout<<"aaaaaaaaaaaaaaaaaaaaaa";
                }
                
            }
            else if(dengi5==3)
            {
                dengi5-=3;
            }
            else
            {
                cout<<"aaaaaaaaaaaaaaaaaaaaaa";
            }
            
        }
        cout<<"\n";
    }
    
    return 0;
}
