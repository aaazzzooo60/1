#include<iostream>
using namespace std;
int main()
{
    int i=1;
    while(i<=9)
    {
        int j=1;
        while(j<=i)
        {
            cout<<i<<"*"<<j<<"="<<i*j<<"\t";
            j++;
        }
        cout<<endl;
        i++;
    }
    system("pause");
}