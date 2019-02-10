#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;

    while(scanf("%lld",&n) && n>=0){
        long long ans =(n*(n+1))/2 + 1;
        cout<<ans<<endl;
    }

return 0;

}
