#include<iostream>
using namespace std;
void error(string s)
{
    int flag = 0;
    for(int i = 0; i<s.size();i++)
    {
            if(s[i]=='@')
                flag=1;

    }
    try{
    if(flag ==0 )
        throw 0;
    } catch(int a)
    {
        cout<<"This email does not contains a @ symbol.";
    }
}
int main()
{
    string s;
    cout<<"Enter an email address : ";
    cin>>s;
    error(s);
    return 0;
}
