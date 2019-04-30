#include<iostream>
using namespace std;
int palindrome(int num,int rem,int rev,int temp)
{
    while(num>0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }

    if(rev==temp)
    {
          cout <<"This is palindrome number:";
    }
    else
    {

        cout <<"This is not palindrome number:";
    }
    return 0;
}
int palindrome(int num,int rem,int rev,int temp );
int main()
{
   int rem,rev=0,num,temp;
   cout <<"Enter any number :";
   cin >>num;
    temp=num;
   palindrome(num,rem,rev,temp); //calling function


    return 0;

}
