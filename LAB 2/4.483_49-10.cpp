//Codefoces Problem NO :158A
//Problem Name :Next round

#include<iostream>
using namespace std;
int main()
{
 int n,a,p[100],s=0,i;
 cout<<"enter your number:";
 cin>>n>>a;
 for(int i=0;i<n;i++)
 {
  cin>>p[i];
  if((p[i]>=p[a-1])&&(p[i]>0))
    s++;

 }cout<<s;
}

