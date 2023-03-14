
/*THIS PROGRAM ONLY CHECKS THE @gmail.com*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int isat=0,offset=0;//isat for @ and offset for gmail.com
    int n=0;
    int i=0;

    string mail="gmail.com";
    string email;

    cout<<"\nEnter an email : ";
    cin>>email;

    int size=email.length();

   try
   {

    for(int i = 0; email[i]; i++)
    {
        if(email[i] == '@')
        {
            isat=1;
            break;
        }

        else
            offset++;
    }

    offset=offset+1;//to reach to gmail's g's index.


    for(int i =0 ; i<9; i++)
    {
         if(isat==0)
         throw 2;

        if( email[offset]==mail[i])
            n++;

            offset++;
    }

   if(n<9)
   {
       throw 1;
   }

    if(isat==1)
    {
        cout<<"\nvalid email\n";
    }

   }//try ending from here.

   catch(int num)
   {
       if(num==1)
           cout<<"\nException caught...\nNot containing gmail.com\n";
       if(num==2)
           cout<<"\nException caught...\nNot containing @ \n";
   }

}
