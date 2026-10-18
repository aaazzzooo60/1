#include <iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int arr[6]={5,34,1,2,56,4};
    cout<<"输出样式"<<endl;
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<endl;
    }
    int min =0;
    int end = sizeof(arr)/sizeof(arr[0])-1;
    int j=0;
    while(j<6)
    {
        if(arr[j]<arr[min])
        {
            min=j;
        }
        j++;
    }
    int temp=arr[min];
    arr[min]=arr[end];
    arr[end]=temp;
    cout<<"输出样式"<<endl;
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    system("pause");
    return 0;
}