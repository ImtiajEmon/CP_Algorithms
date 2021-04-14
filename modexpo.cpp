#include<bits/stdc++.h>
#define lli long long int
using namespace std;

///Euler's little theorem
/// it works when mod is prime & gcd(mod, a)==1
lli modexpo(lli x, lli n, lli m){
    if(n == 0) return 1;
    lli y = x * x % m; /// y = x^2

    if(n % 2 == 0){
        return modexpo(y, n/2, m);
    }
    else{
        return modexpo(y, (n-1)/2, m) * x % m;
    }
}

int main()
{
    lli a = 7, mod = 61;
    lli b = modexpo(a, mod-2, mod);

    cout<<a * b % mod<<endl;

    return 0;
}