#include <iostream>
#include <math.h>

using namespace std;

int numero;
int Arreglo[64][64];

void trinomio(int Ri, int Rf, int Ci, int Cf, int x, int y)
{
    int Cm = (Ci+Cf)/2;
    int Rm = (Ri+Rf)/2;

    if(Ci+1 == Cf  && Ri+1 == Rf )
    {
        if(x==Ri && y==Ci)
        {
            Arreglo[Ri][Cf] = numero;
            Arreglo[Rf][Ci] = numero;
            Arreglo[Rf][Cf] = numero;
            numero++;
        }
        if(x==Rf && y==Ci)
        {
            Arreglo[Ri][Cf] = numero;
            Arreglo[Ri][Ci] = numero;
            Arreglo[Rf][Cf] = numero;
            numero++;
        }
        if(x==Ri && y==Cf)
        {
            Arreglo[Ri][Ci] = numero;
            Arreglo[Rf][Ci] = numero;
            Arreglo[Rf][Cf] = numero;
            numero++;
        }
        if(x==Rf && y==Cf)
        {
            Arreglo[Ri][Cf] = numero;
            Arreglo[Rf][Ci] = numero;
            Arreglo[Ri][Ci] = numero;
            numero++;
        }
    }
    else
    {
        if(Rm>=x) // Esta en la parte de **ARRIBA** del cuadro
        {
            if(Cm>=y) // Esta en el lado **ARRIBA IZQ** del cuadro
            {
                Arreglo[Rm][Cm+1]=numero; //arriba  dere
                Arreglo[Rm+1][Cm]=numero;// abajo izq
                Arreglo[Rm+1][Cm+1]=numero; // abajo dere
                numero++;
                trinomio(Ri,Rm,Ci,Cm,x,y);//Arriba izq
                trinomio(Ri,Rm,Cm+1,Cf,Rm,Cm+1);//Arriba dere
                trinomio(Rm+1,Rf,Ci,Cm,Rm+1,Cm);//Abajo izq
                trinomio(Rm+1,Rf,Cm+1,Cf,Rm+1,Cm+1);//abajo dere
            }
            else  // Esta en el lado **ARRIBA DERE** del cuadro
            {
                Arreglo[Rm][Cm]=numero; //arriba  izq
                Arreglo[Rm+1][Cm]=numero;// abajo izq
                Arreglo[Rm+1][Cm+1]=numero; // abajo dere
                numero++;
                trinomio(Ri,Rm,Ci,Cm,Rm,Cm);//Arriba izq
                trinomio(Ri,Rm,Cm+1,Cf,x,y);//Arriba dere
                trinomio(Rm+1,Rf,Ci,Cm,Rm+1,Cm);//Abajo izq
                trinomio(Rm+1,Rf,Cm+1,Cf,Rm+1,Cm+1);//abajo dere
            }
        }
        else // Esta en la parte de **ABAJO** del cuadro
        {
            if(Cm>=y) // Esta en el lado **ABAJO IZQ** del cuadro
            {
                Arreglo[Rm][Cm]=numero; //arriba  izq
                Arreglo[Rm][Cm+1]=numero;// arriba dere
                Arreglo[Rm+1][Cm+1]=numero; // abajo dere
                numero++;
                trinomio(Ri,Rm,Ci,Cm,Rm,Cm);//Arriba izq
                trinomio(Ri,Rm,Cm+1,Cf,Rm,Cm+1);//Arriba dere
                trinomio(Rm+1,Rf,Ci,Cm,x,y);//Abajo izq
                trinomio(Rm+1,Rf,Cm+1,Cf,Rm+1,Cm+1);//abajo dere
            }
            else // Esta en el lado **ABAJO DERE** del cuadro
            {

                Arreglo[Rm][Cm]=numero; //arriba  izq
                Arreglo[Rm][Cm+1]=numero;// arriba dere
                Arreglo[Rm+1][Cm]=numero; // abajo izq
                numero++;
                trinomio(Ri,Rm,Ci,Cm,Rm,Cm);//Arriba izq
                trinomio(Ri,Rm,Cm+1,Cf,Rm,Cm+1);//Arriba dere
                trinomio(Rm+1,Rf,Ci,Cm,Rm+1,Cm);//Abajo izq
                trinomio(Rm+1,Rf,Cm+1,Cf,x,y);//abajo dere
            }

        }
    }

}

int main()
{
    int x,y,i,zero,maximo;
    cout<<"Dame la potencia de 2, de la matriz" << endl;
    cin>>i;
    cout<<"Dame la casilla ocupada, (en *x* y *y*, de 0->7)"<<endl;
    cin>>x>>y;
    numero = 1;
    zero = 0;
    maximo = 1;

    for(int z=1 ;z<=i ;z++)
    {
        maximo = maximo*2;
    }

    Arreglo[x][y] = 0;
    trinomio(zero,maximo-1,zero,maximo-1,x,y);

    for(int a=0;a<maximo;a++)
    {
        for (int c=0;c<maximo;c++)
        {
            cout<<"--------";
        }
        cout<<endl;
        for(int b=0;b<maximo;b++)
        {
            cout<<"| "<<Arreglo[a][b] << "\t";
        }
        cout<<"|"<<endl;
        for (int c=0;c<maximo;c++)
        {
            cout<<"--------";
        }
        cout<<endl;
    }



}
