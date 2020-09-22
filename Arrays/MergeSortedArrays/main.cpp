#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;

    //Vector a has enough space to store the remaining element
    int a[n];
    int b[m];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        cin>>b[i];

    //Simple method to solve the question using three pointers.
    int i=n-1;
    int j=m-1;
    int k=m+n-1;

    while(i>=0 && j>=0)
    {
        if(a[i]>b[j])
            a[k--]=a[i--];
        else
            a[k--]=b[j--];
    }

    while(j>=0)
    {
        a[k--]=b[j--];
    }
    
    return 0;
}
