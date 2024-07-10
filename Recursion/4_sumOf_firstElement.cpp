#include<iostream>
#include<math.h>
using namespace std;

void func(int n, int sum){
    if(n==0){
        cout<<sum<<endl;
    }
    int var = pow(n,3);
    func(n-1,sum+var);
}

int main(){
    int n;cin>>n;
    int sum = 0;
    func(n,sum);
return 0;
}