//CODEFORCES PROBLEM :236A
//PROBLEM NAME : Boy or Girl

#include<iostream>
#include<string>
using namespace std;
int main()
{
char c[500];
cin>>c;
int x=0;
int a=strlen(c);
for(int i=0;i<a;i++)
{
 for(int j=i+1;j<a;j++)
 if(c[i]==c[j])
 {
     x++;
 }
}
int m=a-x;
if(m%2==0)
    cout<<"CHAT WITH HER!"<<endl;
else
    cout<<"IGNORE HIM!"<<endl;

return 0;
}
