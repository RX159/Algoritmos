#include <iostream>


//Ricardo Reyes A01281564

using namespace std;

int main()
{
    int a,b,re;
    cin>>a>>b;
    re=a;
    while(a<b)
    {
        a++;
        re+= a;
    }
    cout<<re<<endl;
}
