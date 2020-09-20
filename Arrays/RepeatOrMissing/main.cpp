#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;

    /*Method 1
     * Using sum to find that missing variable
     * */
    int a[n];
    int sum2=0;
    for(int i=0;i<n;i++) {
        cin >> a[i];
        sum2+=a[i];
    }
    int sum1=(n*(n+1)/2);
    cout<<sum1-sum2;

    /*Method 2
     * Using XOR for finding the missing variable
     * If a1^a2^a3..an=a and a1^a2^...^an-1=b
     * Then a^b=an
     * */

    int b=1,c=a[0];
    for(int i=1;i<n;i++)
        b^=i;
    for(int i=1;i<=n;i++)
        c^=a[i];

    cout<<(b^c)<<endl;
    return 0;
}
