#include<bits/stdc++.h>
using namespace std;
int a[]={1,2,3,-1,-2,-3,-7,2,-5};
void fun1(int n)
{
    int l=0,r=n-1;
    while(l<r)
    {
        if(a[l]<0)
        {
            l++;
        }
        else if(a[l]>0)
        {
            if(a[r]>0)
            {
                r--;
            }
            else
            {
                int temp=0;
                temp=a[l];
                a[l]=a[r];
                a[r]=temp;
                r--;
                l++;
            }
        }
    }
}

int main()
{
    fun1(9);
    for(auto x:a)
        cout<<x<<" ";
    return 0;
} 
