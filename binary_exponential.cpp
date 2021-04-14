#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
using namespace std;

lli binexpo(lli base, lli POW){
    if(POW == 0) return 1;
    lli x = base * base;

    if(POW % 2) return binexpo(x, POW/2) * base;
    else return binexpo(x, POW/2);
}

int main()
{
    lli a = 5, n = 9;
    lli ans = binexpo(a, n); /// ans = a^n
    cout<<ans<<endl;

    return 0;
}