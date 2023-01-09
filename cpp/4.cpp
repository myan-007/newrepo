#include<iostream>
#include<cmath>
using namespace std;
int main(){
    cout << "Enter a number ";
    int n;
    cin >> n;
    bool f=false;
    if(n==1){
        cout << "Neither prime nor composite\n";
        return 0;
    }
    for(int i=2;i<=sqrtf(n);i++){
        if(n%i==0){
            f=true;
        }
    }
    if(f) cout<<"Number is composite";
    else cout<<"Number is prime";

    return 0;
}
