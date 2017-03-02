#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double N;
    int M,Z;
    int A, B, x, y;
    int C[100];
    cin>>M;
    N = (double)M;
    N = sqrt(N);
    Z = (int)N;

    for(int i=0; i<M; i++)
    {
        cin>>C[i];
    }

    for(int i=0; i<M; i++)
    {
        y=0;
        if(C[i] == 2 || C[i] == 3 || C[i] == 5 || C[i] == 7 || C[i] == 11 || C[i] == 13 )
        {
            cout<< C[i] << " " << C[i] << endl;
            y=1;
        }

        if(C[i]%2 != 0 && C[i]%3 != 0 && C[i]%5 != 0 && C[i]%7 != 0 && C[i]%11 != 0 && y==0 && C[i]%13 != 0 )
        {
            cout<< C[i] << " " << C[i] << endl;
            y=1;
        }


        if(y==0)
        {
            A = C[i]-1;
            B = C[i]+1;
            x=0;

            while(x==0)
            {
                if(A == 2 || A == 3 || A == 5 || A == 7 || A==11 )
                {
                    x=1;
                }
                if( A%2 != 0 && A%3 != 0 && A%5 != 0 && A%7 != 0 && A%11 != 0 && A%13 != 0 )
                {
                    x=1;
                }

                if(x==0)
                {
                    A--;
                }

            }

            x = 0;

            while(x==0)
            {
                if(B == 2 || B == 3 || B == 5 || B == 7 || B == 11)
                {
                    x = 1;
                }

                if( B%2 != 0 && B%3 != 0 && B%5 != 0 && B%7 != 0 && B%11 != 0 && B%13 != 0 )
                {
                    x=1;
                }

                if(x==0)
                {
                    B++;
                }

            }

            cout <<  A << " " << B <<endl;
        }
    }
}
