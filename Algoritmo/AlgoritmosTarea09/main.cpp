#include <iostream>
#include <climits>

using namespace std;

int minimo(int A, int B)
{
    if(A<B)
    {
        return A;
    }
    else
    {
        return B;
    }
}

int maximo(int A, int B)
{
    if(A<B)
    {
        return B;
    }
    else
    {
        return A;
    }
}

int main()
{

    int iNodos, iCArcos, iQuerys, iGrafos, iArcos[101][101], iRen, iCol, iValor, iNodoA, iNodoB;

            for(int x=1;x<=101;x++)
        {
            for(int y=1;y<=101;y++)
            {
                if(x == y)
                {
                    iArcos[x][y] = 0;
                }
                else
                {
                    iArcos[x][y] = INT_MAX;
                }
            }
        }

    cin>> iGrafos;

    for(int i=1;i<=iGrafos;i++)
    {

        cout<< "Caso "<<i<<endl;

        cin>> iNodos >> iCArcos >> iQuerys;

        for(int z=1; z<=iCArcos ;z++)
        {
            cin>> iRen >> iCol >> iValor;
            iArcos[iRen][iCol] = iValor;
            iArcos[iCol][iRen] = iValor;
        }

        for (int k=1; k<=iNodos; k++)
        {
            for (int i=1; i<=iNodos; i++)
            {
                for (int j=1; j<=iNodos; j++)
                {
                    if(iArcos[i][j] == INT_MAX)
                    {
                       iArcos[i][j] = minimo(iArcos[i][j] , maximo( iArcos[i][k], iArcos[k][j] ) ) ;
                       iArcos[j][i] = iArcos[i][j];
                    }
                }
            }
        }

        for(int l=1;l<=iQuerys;l++)
        {
            cin>>iNodoA >> iNodoB;

            if(iArcos[iNodoA][iNodoB] == INT_MAX)
            {
                cout<< "no path"<<endl;
            }
            else
            {
                cout<<iArcos[iNodoA][iNodoB]<<endl;
            }
        }

    }


}
