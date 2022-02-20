#include<bits/stdc++.h>
using namespace std;

/*
 @swasthiiiiii
 program to display string without duplicate elements;
*/
int main()
{

    string str;
    cout<<"enter the string:\n";
    cin>>str;


   /*
this outer for loop start from 0 means from first charecter
   */
    for(int i=0;i<str.length();i++)
    {
        /*
       this is inner loop which starts from i+1 means 0+1 
        */
        for(int j=i+1;j<str.length();j++)
        {
            if(str[i]==str[j])
            {
                str[j]='0';
            }
        }
    }
    /*
    so here first loops charecter is checked in inner loop if duplicate is there
    then it will be replaced with '0'
    */
    cout<<"\nstring after removing duplicates:\n";
    for(int i=0;i<str.length();i++)
    {
        if(str[i]!='0')
        {
            cout<<str[i];
        }
    }
    return 0;
}