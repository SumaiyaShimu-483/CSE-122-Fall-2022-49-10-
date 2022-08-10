//CODEFORCES PROBLEM :339A
//PROBLEM NAME :Helpful Maths
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
   char a[500];
   cin>>a;
   int b=strlen(a);
   for(int i=0;i<b;i=i+2)
   {
       for(int j=i+2;j<b;j=j+2)
       {
           if(a[i]>a[j])
            swap(a[i],a[j]);
       }
   }
   cout<<a<<endl;
   return 0;
}
