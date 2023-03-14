#include<iostream>
#include<string.h>
using namespace std;
bool check_pin(){
char pin[10];
cout<<"Enter a pincode : ";
gets(pin);
int size=strlen(pin);

if(size==6)
    return true;
    else
        return false;
}
int main(){
    try{
if(check_pin())
{
    cout<<"valid pin code";
}
else
{
    throw 'e';
}
}
catch(char x)
{
    cout<<"invalid pin code";
}
return 0;
}
