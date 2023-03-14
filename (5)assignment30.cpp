#include<iostream>
#include<string.h>
using namespace std;
bool check_mb(){
char mb[10];
cout<<"Enter a mobile number : ";
gets(mb);
int size=strlen(mb);

if(size==10)
    return true;
    else
        return false;
}
int main(){
    try{
if(check_mb())
{
    cout<<"valid mobile no";
}
else
{
    throw 'e';
}
}
catch(char x)
{
    cout<<"invalid mobile number";
}
return 0;
}
