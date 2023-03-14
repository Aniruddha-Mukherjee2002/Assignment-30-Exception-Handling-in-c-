/*Write a C++ program to accept a username if the username has less than 6 characters
or does contain any digit or special symbol.*/
#include<iostream>
using namespace std;
void check_error(string s)
{
    int isdigit = 0,isspecial = 0;
    try
    {
        if(s.size()<6)
            throw s.size();
    }
    catch(int x)
    {
        cout<<"Username must contain 6 charactrs"<<endl;
        return;
    }
    for(int i = 0;i<s.size();i++)
    {
        if(s[i]>='0'&&s[i]<='9')
            isdigit++;
        else if((!s[i]>='a' && !s[i]<='z') || (!s[i]>='0' && !s[i]<='9'))
            isspecial++;
    }
   try{
     if(isdigit<1)
        throw 'e';
    }catch(char s)
    {
        cout<<"Username must contain a single digit."<<endl;
        return;
    }
    try{
    if(isspecial<1)
        throw 2;
    }catch(int g)
    {
        cout<<"Username must contain a special character"<<endl;
        return;
    }
}
int main()
{
    string s;
    cout<<"Enter a username : ";
    cin>>s;
    check_error(s);
    return 0;
}
