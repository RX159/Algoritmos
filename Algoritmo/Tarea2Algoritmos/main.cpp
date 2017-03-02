#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n,x=0,z=0;
    string titulo,Ntitulo;
    char a,b;
    cin>>n>>titulo;
    char c[2*n];

    for(x;x<n;x++)
    {
        cin>>a;
        cin>>b;
        c[z]=a;
        c[z+1]=b;
        z++;
        z++;
    }

    for(int i=0;i<titulo.length();i++)
    {
        b=titulo[i];
        for(int y=0;y<2*n;y++)
        {
            if(b == c[y] )
            {
                b=c[y+1];
            }
            else
            {
                if(b == c[y+1])
                {
                    b=c[y];
                }
            }
         y++;
        }
        Ntitulo += b;
    }

    cout<<Ntitulo<<endl;
}
