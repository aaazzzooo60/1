#include<iostream>
#include<vector>
using namespace std;
#include<set>
void printvector(vector<int>&v)
{
    for(vector<int>::iterator it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
void printset(set<int>&s)
{
    for(set<int>::iterator it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
void dsh()
{
    vector<int>v;
    v.push_back(5);
    v.push_back(3);
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    cout<<"输出"<<" ";
    printvector(v);
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v.size()-1;j++)
        {
            if(v[j]>v[j+1])
            {
                int temp=v[j];
                v[j]=v[j+1];
                v[j+1]=temp;
            }
        }
    }
    cout<<"排序后  "<<" ";
    printvector(v); 
    set<int>s(v.begin(),v.end());
    cout<<"去重后"<<endl;
    printset(s);
}

int main()
{
    dsh();
    system("pause");
    return 0;
}