// print name 5 times

#include<iostream>
using namespace std;

void func(int cnt){
    if(cnt <= 0) return;
    cout<<"Harsh"<<" ";
    func(cnt-1);

}

int main(){
    int n;cin>>n;
    func(n);
}