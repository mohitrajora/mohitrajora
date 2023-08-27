#include<bits/stdc++.h>
using namespace std;

int misno(int arr[],int n){
   int N=1e6+2;bool check[N];int ans;
   for (int i=0;i<N;i++){ check[N]=0;}
   for (int i=0;i<n;i++){if(arr[i]>=0){check[arr[i]]=1;}}
   for (int i=0;i<N;i++){if(check[i]==0 && arr[i]>=0){ans=i;break;}}
   return ans;
}
int main()
{
   int n;cin>>n;
   int arr[n];
   for (int i=0;i<n;i++){
      cin>>arr[i];
   }
   cout<<misno(arr,n)<<endl;

   return 0;
}