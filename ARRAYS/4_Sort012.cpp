#include<bits/stdc++.h>
using namespace std;
int a[]={0,1,2,1,0,1,0,1,0,2,1,1,0,2,1};
void fun1(int n)
{
    int cnta=0,cntb=0,cntc=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
            cnta++;
        else if(a[i]==1)
            cntb++;
        else
            cntc++;
    }
    // cout<<cnta<<" "<<cntb<<" "<<cntc<<endl;
    int i=0;
        while(cnta>0)
        {
            a[i]=0;
            cnta--;
            i++;
        }
        while(cntb>0)
        {
            a[i]=1;
            cntb--;
            i++;
        }
        while(cntc>0)
        {
            a[i]=2;
            cntc--;
            i++;
        }
    
    
}

int main()
{
    fun1(15);
    for(auto x:a)
        cout<<x<<" ";
} 
