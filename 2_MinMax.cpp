#include<bits/stdc++.h>
using namespace std;

struct Pair{int min;int max;};

Pair getminmax(int a[],int low,int high)
{
    Pair rep;
    if(low==high)
    {
        rep.min=a[low];
        rep.max=a[high];
    }
    else if(low+1==high)
    {
        rep.min=min(a[low],a[high]);
        rep.max=max(a[low],a[high]);
    }
    else
    {
        int mid=(low+high)/2;
        Pair mm1=getminmax(a,low,mid);
        Pair mm2=getminmax(a,mid+1,high);
        rep.min=min(mm1.min,mm2.min);
        rep.max=max(mm1.max,mm2.max);
    }
    return rep;
}
int main()
{
    int a[]={0,1,2,3,4,5,6,7};
    Pair p=getminmax(a,0,7);
    cout<<p.max<<" "<<p.min;
} 
