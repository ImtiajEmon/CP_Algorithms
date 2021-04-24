/// it can use for large number
#include<bits/stdc++.h>
#define lli long long int
using namespace std;

const int MAX = 1e6 + 1;
bool mark[MAX];
vector<int>primes;

void sieve(){
    for(int i=2; i<MAX; i++){
        if(!mark[i]){
            primes.push_back(i);
            for(int j=i+i; j<MAX; j+=i){
                mark[j] = true;
            }
        }
    }
}

vector<pair<int, int>> factorization(lli n){
    vector<pair<int, int>>factorized;
    for(auto i: primes){
        if(i*i > n) break;
        if(n%i == 0){
            int cnt = 0;
            while(n%i == 0){
                n /= i;
                cnt++;
            }
            factorized.push_back({i, cnt});
        }
    }
    if(n > 1) factorized.push_back({n, 1});

    return factorized;
}

int main()
{
    sieve();
    //cout<<primes.size();
    auto v = factorization(1000000000000000029);

    for(auto x: v)
        cout<<x.first<<" "<<x.second<<endl;

    return 0;
}