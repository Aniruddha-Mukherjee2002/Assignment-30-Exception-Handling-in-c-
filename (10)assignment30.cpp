/*Write a C++ program to accept Nickname and throw an exception if it has greater than 8
characters or does contain a digit or special symbol or space.*/

#include<iostream>
using namespace std;
bool check_name(string s)
{
    int isdigit = 0;
    int isspecial = 0;
    int flag = 0;
    try{
    if(s.size()>8)
        throw 0;
    }catch(int x)
    {
        cout<<"Name size should be in 8 characters."<<endl;
       flag = 1;
    }

       for(int i = 0; i<=s.size(); i++)
   {
       if(s[i]>='0'&&s[i]<='9')
        isdigit++;
       if((s[i]>='!'&&s[i]<='/') || (s[i]>=':'&&s[i]<='@') || (s[i]>='['&&s[i]<='`') ||(s[i]>='{'&&s[i]<='~'))
       isspecial++;
   }
    try{
    if(isdigit!=0)
        throw 1;
    }
    catch(int x)
    {
        cout<<endl<<"Invalid name , name containing a digit."<<endl;
        flag = 1;
    }

    try{
    if(isspecial!=0)
        throw 2;
    }
    catch(int x)
    {
        cout<<endl<<"Invalid name , name  containing a special symbol."<<endl;
        flag = 1;
    }
    if(flag!=0)
        return false;
    return true;
}
int main()
{
    string name;
    fflush(stdin);
    cout<<"Enter a name : ";
    getline(cin,name);
    if(check_name(name)==true)
    cout<<"Valid name."<<endl;
    return 0;
}
