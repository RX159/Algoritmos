#include <iostream>

using namespace std;

int main()
{
    int n,a=0,b=0;
    cin >>n;
    string s;
    cin>>s;
    for(int i=0; i<n ;i++)
    {
        s[i] == '0' ? a++ : b++ ;
    }

    a>b ? a=a-b : a=b-a;
    cout<<a<< endl;
}
