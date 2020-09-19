#include <bits//stdc++.h>
using namespace std;

int main() {
    /*Basic code with keeping count using Map || Freq Array
     We can also use a set to just store the Unique element.
     */
    int n;
    cin>>n;

    int a[n];
    map<int,int> m;
    for(int i=0;i<n;i++) {
        cin >> a[i];
        m[a[i]]++;
    }

    int ans=0;
    for(auto i=m.begin();i!=m.end();i++)
    {
        if(i->second>1)
        {
            ans=i->first;
            break;
        }
    }

    cout<<ans<<endl;
    return 0;
}
