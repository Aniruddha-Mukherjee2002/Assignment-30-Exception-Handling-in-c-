#include<iostream>
using namespace std;
void excp(int num1,int num2,char x){
int sum,mul,div,sub;

    switch(x)
    {
        case '+':
                   sum=num1+num2;
                  cout<<endl<<"sum is "<<sum;
                  break;
        case '-':

        sub=num1-num2;
        cout<<endl<<"Subtract is "<<sub;
        break;
        case '*':

            mul=num1*num2;
            cout<<endl<<"multiplication is "<<mul;
            break;
        case '/':

            try{
             if(num2==0)
             {
                 throw num2;
             }
            }
    catch(int r)
    {
        cout<<endl<<"dividend is zero";
        return;
    }
    div=num1/num2;
    cout<<endl<<"division is "<<div;

    default:
            try{
            throw x;
            }
            catch(char a)
            {
                cout<<endl<<"Invalid operator"<<endl;

            }
    }


}
int main(){
int x,y;
char ch;
cout<<"------------------------------------------------";
cout<<endl<<"Enter first number :";
cin>>x;
cout<<endl<<"Enter second number :";
cin>>y;
cout<<endl<<"Enter an operator :";
cin>>ch;
excp(x,y,ch);
cout<<endl<<"------------------------------------------------";
return 0;
}
