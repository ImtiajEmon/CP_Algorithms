#include<bits/stdc++.h>
#define endl "\n"
#define lli long long int
using namespace std;

bool isPrime(int x){
    for(int i=2; i*i<=x; i++){
        if(x%i == 0) return false;
    }
    return true;
}

int main()
{
    int n = 23;
    if(isPrime(n)) cout<<"Prime\n";
    else cout<<"Not prime\n";

    return 0;
}