#include<iostream>
#include<string.h>
using namespace std;
int  main()
{
  char s[100];
  char s1[100];
  int n=strlen(s);
    
   cout<<"enter string"<<endl;
  gets(s);
   
    for(int j=0;j<n;j++)
    {
        if(s[j]=='!'||'?'||'.')
        {
            for(int i=0,k=j;k<n;k++)
            {
              
                s1[i]=s[k+1];
                s[j]='\0';
                i++;
            }
        }
    }
int m=strlen(s1);
n=strlen(s);
for(int i=0;i<n;i++)
{
    cout<<s[i];
}
 
 for(int i=0;i<n;i++)
{
    cout<<s1[i];
}
 
   return 0;
    
}