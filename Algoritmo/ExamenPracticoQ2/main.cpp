#include <iostream>

using namespace std;

string BeagleTown[10][10];

void Barda(int n, int m)
{
    if(n-1 != -1 && m-1 != -1)
    {
        (BeagleTown[n-1][m-1] != "*") ? BeagleTown[n-1][m-1] = "=" : BeagleTown[n-1][m-1] = BeagleTown[n-1][m-1];
        (BeagleTown[n-1][m] != "*") ? BeagleTown[n-1][m] = "=" : BeagleTown[n-1][m] = BeagleTown[n-1][m];
        (BeagleTown[n][m-1] != "*") ? BeagleTown[n][m-1] = "=" : BeagleTown[n][m-1] = BeagleTown[n][m-1];

    }

    if(n+1 != 11 && m+1 != 11)
    {
        (BeagleTown[n][m+1] != "*") ? BeagleTown[n][m+1] = "=" : BeagleTown[n][m+1] = BeagleTown[n][m+1];
        (BeagleTown[n+1][m] != "*") ? BeagleTown[n+1][m] = "=" : BeagleTown[n+1][m] = BeagleTown[n+1][m];
        (BeagleTown[n+1][m+1] != "*") ? BeagleTown[n+1][m+1] = "=" : BeagleTown[n+1][m+1] = BeagleTown[n+1][m+1];
    }
    if(n+1 != 11 && m+1 != 11 && n-1 != -1 && m-1 != -1)
    {
        (BeagleTown[n-1][m+1] != "*") ? BeagleTown[n-1][m+1] = "=" : BeagleTown[n-1][m+1] = BeagleTown[n-1][m+1];
        (BeagleTown[n+1][m-1] != "*") ? BeagleTown[n+1][m-1] = "=" : BeagleTown[n+1][m-1] = BeagleTown[n+1][m-1];
    }
}

int main()
{
    int n,m,i=0,z;
    string Renglon;
    cin >>n >>m;
    while(i<n)
    {
        z=0;
       cin>>Renglon;
       while(z<m)
       {
           BeagleTown[i][z] = Renglon[z];
           z++;
       }
     i++;
    }

    i=0;
    while(i<n)
    {
        z=0;
       while(z<m)
       {
           if(BeagleTown[i][z]=="*")
           {
               Barda(i,z);
           }
           z++;
       }
     i++;
    }

    i=0;
    while(i<n)
    {
        z=0;
        while(z<m)
        {
            cout<<BeagleTown[i][z];
            z++;
        }
        cout<<endl;
        i++;
    }


}
