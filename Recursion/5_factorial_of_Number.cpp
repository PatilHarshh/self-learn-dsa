#include<iostream>
using namespace std;

int func(int N){
    // 4 3 2 1

    if(N == 0) return 1;
    return N * func(N-1);
}

int main(){
    int n;cin>>n;
    cout<<func(n)<<endl;
return 0;
}