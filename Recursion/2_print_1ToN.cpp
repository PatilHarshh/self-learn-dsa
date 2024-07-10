#include<iostream>
using namespace std;

void func(int N,int i){
    if(i > N) return;
    cout<<i<<" ";
    func(N,i+1);
}

int main(){
    int n;cin>>n;
    int i = 1;
    func(n,i);
return 0;
}