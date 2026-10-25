#include <iostream>
using namespace std;
#include <sstream>
#include<string>
#include<stack>
int main ()
{
    string arr="Hello world from RM";
        cout<<"输入"<<arr<<endl;
       stringstream ss(arr);
       string word;
       stack<string>s;
       while(ss>>word)
       {
        s.push(word);
       }
       cout<<"单词个数为"<<s.size()<<endl;
       cout<<"输出";
       while(!s.empty())
       {
        cout<<s.top();
        s.pop();
        if(!s.empty())
        cout<<" ";
       }
       cout<<endl;
    system("pause");
    return 0;
}