#include<bits/stdc++.h>
#define pi 3.14159265359
#define ll long long
#define wh(t) int t;cin>>t; while(t--)
#define speed  ios::sync_with_stdio(0); cin.tie(0);
#define f(i,a,b) for(int i=0;i<n;i++)
#define endl "\n"
using namespace std;
#include<string.h>

int main()
{
    int array[]={-1,3,-2,1,1,6,8};
    int x=2;
    int n=7;
    sort(array,array+7);
    
    int low=0,high=n-1;
    int mid;
    while(low<=high)
    {
        mid=(low+high)/2;
//        cout<<mid<<endl;
        if(array[mid]==x)
        {
            cout<<"foundat "<<mid+1<<endl;
            break;
        }
        else
        {
            if(x>array[mid])
                low=mid+1;
            else
                high=mid-1;
        }
    }
    
    return 0;
}
