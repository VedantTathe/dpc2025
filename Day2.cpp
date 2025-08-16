#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<cmath>
#include<climits>
#include<string>
#define ll long long

using namespace std;

int main() {
    // Vedant Tathe
    ll n;
    cin>>n;

    ll sum=0;

    for(ll i=0;i<n;i++)
    {
        ll t;
        cin>>t;
        sum+=t;
    }

    ll total = ((n+1)*(n+2))/2;

    cout<<total-sum<<endl;

    return 0;

}
