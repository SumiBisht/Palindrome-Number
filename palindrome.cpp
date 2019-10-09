/*program to demonstrate OOP concepts and to find whether
a three digit number is palindrome or not.
*/
#include<iostream>
#include<conio.h>
using namespace std;
int flag=0;
class palindrome
{
private:
        int number;
        int revnumber;
        int *num;
public:
        void getnumber();
        void check(int somenumber);
        void displayresult();
        palindrome()
        {
                number=333;
                num=NULL;
                revnumber=0;
        }
        palindrome(int x)
        {
                number=x;
                num=NULL;
                revnumber=0;
        }
};
class Armstrong:public palindrome
{

};
void palindrome::getnumber()
{
        cout<<"enter a number: ";
        cin>>number;
}
void palindrome::check(int somenumber)
{
       int j=0;
       for(int k=somenumber; k >0; k /= 10)
		{
		        j++;
		}
		num=new int[j];
		int k=0;
		for(int i=somenumber; i >0; i /= 10,k++)
		{
		        num[k]=i%10;
		}
        int l=1;int i=1;
        while(i<=number)
        {       revnumber+=(num[j-l]*i);
                i*=10;
                l++;
        }
        delete[] num;
}
void palindrome::displayresult()
{
       check(number);
       cout<<"\nreverse of this number: "<<revnumber;
        if(revnumber==number)
                cout<<"\n yes palindrome, reverse:"<<revnumber;
                else
                        cout<<"\nno not palindrome";
}
int main()
{
        start:
        palindrome p;
        p.getnumber();

/*int number;
        cout<<"enter a number: ";
        cin>>number;
        palindrome p(number);
        */
        p.displayresult();
        flag++;
        cout<<"\nyou have checked: "<<flag<<" numbers ";
        char choice;
        cout<<"\n enter q to quit or anything else to keep checking: ";
        cin>>choice;

        if(choice!='q')
                goto start;

}
