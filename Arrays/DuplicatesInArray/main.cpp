#include <bits//stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    int a[n];
    int ans=0;
    for(int i=0;i<n;i++)
        cin >> a[i];
    /*Basic code with keeping count using Map || Freq Array
     We can also use a set to just store the Unique element. */

    map<int,int> m;
    for(int i=0;i<n;i++) {
        cin >> a[i];
        m[a[i]]++;
    }
    for(auto i=m.begin();i!=m.end();i++)
    {
        if(i->second>1)
        {
            ans=i->first;
            break;
        }
    }

    /* We can also use Sum method
     * Add all the numbers in a variable and then subtract the sum from n*(n+1)/2
     */

    int sum1=0;
    for(int i=0;i<n;i++)
        sum1+=a[i];

    int sum2=(n*(n+1))/2;

    int diff=sum1-sum2;
    cout<<diff<<endl;

    /*Best method using LinkedList Method
     * Using fast and slow pointer
     * */
    int fast=a[a[0]];
    int slow=a[0];
    while(fast!=slow)
    {
        slow=a[slow];
        fast=a[a[fast]];
    }

    fast=0;
    while(slow!=fast)
    {
        slow=a[slow];
        fast=a[fast];
    }

    cout<<fast<<endl;
    return 0;
}
