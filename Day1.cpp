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
    int n;
    cin>>n;

    vector<int> nums(n);

    for(int i=0;i<n;i++)
        cin>>nums[i];

    int l=0,m=0,h=n-1;

    while(m<=h)
    {
        if(nums[m]==0)
        {
            swap(nums[l],nums[m]);
            l++;
            m++;
        }
        else if(nums[m]==1)
        {
            m++;
        }
        else if(nums[m]==2)
        {
            swap(nums[m],nums[h]);
            h--;
        }

    }

    for(int i=0;i<n;i++)
        cout<<nums[i]<<" ";

    return 0;

}
