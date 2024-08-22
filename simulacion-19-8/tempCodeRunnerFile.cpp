#include <iostream>
#include <string>

using namespace std;

int main(){

    int n;
    cin >> n;
    
    string rta;

    float divisor = 2;

    float res=0;

    while(n!=1){
        res=float(n)/divisor;
        if(res==int(n/divisor)){
            n=res;
            rta+='x' + to_string(n);
        }else{
            divisor++;
        }
    }
    rta.pop_back();  
    cout << rta;

    return 0;
}