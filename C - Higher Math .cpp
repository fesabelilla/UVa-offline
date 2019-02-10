#include<bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin>>t;
  int counter = 1;
  int arr[3];
  while(t--){
  for(int i = 0 ; i<3 ;i++)
        cin>>arr[i];

  sort(arr,arr+3);

  if(arr[0]*arr[0]+arr[1]*arr[1]==arr[2]*arr[2])
  cout<<"Case " <<counter<<": yes"<<endl;
  else
  cout<<"Case " <<counter<<": no"<<endl;
counter++;

  }
  return 0;
}
