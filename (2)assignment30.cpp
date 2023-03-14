#include<iostream>
using namespace std;
int main(){
try
{
  throw 9;
}
catch(int i)
{
    cout<<"\nException caught"<<endl<<i;
}
return 0;
}
