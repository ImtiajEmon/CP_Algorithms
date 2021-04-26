#include<bits/stdc++.h>
#define lli long long int
using namespace std;

vector<lli>divisors;

void count_div(lli n){
    //int cnt = 0;
    for(lli i=1; i*i<=n; i++){
        if(n%i == 0){
            divisors.push_back(i);
            if(i != n/i) divisors.push_back(n/i);
        }
    }
    sort(divisors.begin(), divisors.end());
}

int main()
{
    lli n; cin>>n;
    count_div(n);
    for(auto x: divisors)
        cout<<x<<endl;

    return 0;
}