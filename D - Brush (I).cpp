#include<bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin>>t;
  int counter = 1;
  int arr[3];
  while(t--){
        int n,sum=0;
  cin>>n;
  for(int i = 0 ; i<n ;i++){
        int a;
        cin>>a;
        if(a>0)
  sum = sum+a;
  }
cout<<"Case "<<counter<<": "<<sum<<endl;
counter++;
  }
  return 0;
}
