#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int mx=-1;
    int a[n+1];
   a[n]=-1;
    int ans=0;
 
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
       if(n==1){
    cout<<"1";
    return 0;
    }
   
    int j=0;
    while(j<n)
    {
        if(a[j]>mx && a[j]>a[j+1])
        {
        ans++;
        }
       
        mx=max(mx,a[j]);
       
        j++;
    }
    cout<<ans;
    return 0;


}