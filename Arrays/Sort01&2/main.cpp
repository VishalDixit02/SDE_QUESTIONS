#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    //Method 1
    int l=0,mid=0,h=n-1;
    while (mid<=h)
    {
        if(a[mid]==0)
        {
            swap(a[mid],a[l]);
            mid++;
            l++;
        }
        else if(a[mid]==1)
            mid++;
        else
        {
            swap(a[mid],a[h]);
            mid++;
            h--;
        }
    }

    //Method 2
    int c0=0,c1=0,c2=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
            c0++;
        else if(a[i]==1)
            c1++;
        else
            c2++;
    }

    int i=0;
    while(c0>0)
    {
        a[i]=0;
        c0--;
        i++;
    }
    while(c1>0)
    {
        a[i]=1;
        c1--;
        i++;
    }
    while(c2>0)
    {
        a[i]=2;
        c2--;
        i++;
    }

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
