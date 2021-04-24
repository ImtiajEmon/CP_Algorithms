#include<bits/stdc++.h>
#define lli long long int
using namespace std;

const int MAX = 1e7 + 1;
int pgd[MAX]; /// pgd[i] = greatest prime divisor if i

void sieve(){
    for(int i=2; i<MAX; i++){
        if(pgd[i] == 0){
            for(int j=i; j<MAX; j+=i)
                pgd[j] = i;
        }
    }
}

/*vector<int>factorization(lli n){   //it return only factors
    vector<int>factorized;
    while(n != 1){
        factorized.push_back(pgd[n]);
        n /= pgd[n];
    }
    return factorized;
}*/

vector<pair<int, int>> factorization(lli n){
    vector<pair<int, int>> factorized;
    int cnt = 0, temp = pgd[n];
    while(n != 1){
        if(pgd[n] == temp) cnt++;
        else {
            factorized.push_back({temp, cnt});
            temp = pgd[n];
            cnt = 1;
        }
        //factorized.push_back({pgd[n], cnt});
        n /= pgd[n];
    }
    factorized.push_back({temp, cnt});
    return factorized;
}

int main()
{
    sieve();
    auto v = factorization(29);

    for(auto x: v)
        cout<<x.first<<" "<<x.second<<endl;

    return 0;
}