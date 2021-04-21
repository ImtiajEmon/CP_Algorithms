#include<bits/stdc++.h>
#define lli long long int
using namespace std;

const int MAX = 1e3 + 1;
bool arr[MAX];

void seive(){
    arr[1] = true;

    for(int i=2; i*i<MAX; i++){
        if(!arr[i]){
            for(int j=i*i; j<MAX; j+=i)
                arr[j] = true;
        }
    }
}

int main()
{
    seive();
    for(int i=2; i<MAX; i++){
        if(!arr[i]) cout<<i<<endl;
    }

    return 0;
}