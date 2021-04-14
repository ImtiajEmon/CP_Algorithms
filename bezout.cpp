#include<bits/stdc++.h>
#define lli long long int
using namespace std;

///extended euclidean algorithm
///it works when gcd(a, mod) == 1

lli egcd(lli a, lli b, lli& x, lli& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    lli x1, y1;
    lli d = egcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}

int main()
{
    lli a = 7, mod = 61;
    lli x, y;

    lli g = egcd(a, mod, x, y);
    x = x % mod;
    if(x < 0) x += mod;

    if(g != 1) cout<<"There is no moduler inverse.\n";
    else cout<<(a * x) % mod<<endl;

    return 0;
}