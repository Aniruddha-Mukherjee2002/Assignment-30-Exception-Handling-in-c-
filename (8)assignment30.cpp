#include<iostream>
#include<string.h>
using namespace std;
void check_error(string s)
{
    int flag = 0;
    try{
     if(s.size()<6)
        throw s.size();
    }catch(int l)
    {
        cout<<"Password length should be in 6 characters."<<endl;
        return;
    }
   int isdigit = 0,iscap = 0,isspecial = 0;
   for(int i = 0; i<=s.size(); i++)
   {
       if(s[i]>='0'&&s[i]<='9')
        isdigit++;
       if(s[i]>='A'&&s[i]<='Z')
        iscap++;
       if((s[i]>='!'&&s[i]<='/') || (s[i]>=':'&&s[i]<='@') || (s[i]>='['&&s[i]<='`') ||(s[i]>='{'&&s[i]<='~'))
       isspecial++;
   }
    try{
    if(isdigit<1)
        throw 1;
    }
    catch(int x)
    {
        cout<<"Missing digit"<<endl;
        flag = 1;
    }
    try{
    if(iscap<1)
        throw 1;
    }
    catch(int x)
    {
        cout<<"Missing Captial letter"<<endl;
         flag = 1;
    }
    try{
    if(isspecial<1)
        throw 2;
    }
    catch(int x)
    {
        cout<<"Missing Special character"<<endl;
         flag = 1;
    }
    if(flag==0)
    cout<<"valid password"<<endl;
}
int main()
{
    string password;
    cout<<"Enter a password : ";
    cin>>password;
    check_error(password);
    return 0;
}
