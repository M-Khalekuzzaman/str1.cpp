#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
   while(1)
   {
        char name1[30];
    cout<<"Enter your full name is : ";
    gets(name1);
    char name2[30];
    int len = strlen(name1);
    int vow = 0, cons = 0, digit = 0;
    int i = 0;
    do{

       name2[i] = toupper(name1[i]);
       i++;

    }while(i<len);
   for(int i = 0 ; i<len ; i++)
    {
        if(name2[i] == 'A' || name2[i] =='E' ||name2[i] =='I'||name2[i] =='O' ||name2[i] =='U')
            vow++;
        else if(name2[i]== '0' ||name2[i]== '1' ||name2[i]== '2')
            digit++;
        else
            cons++;
    }
    cout<<"Number of vowel is : "<<vow<<endl;
    cout<<"Number of consonate is : "<<cons<<endl;
    cout<<"Number of digit is : "<<digit<<endl;

   }

    getch();
}
