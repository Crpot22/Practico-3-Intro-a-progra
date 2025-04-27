#include<iostream>
using namespace std;

int main() {
    int n; double s=0; cin>>n;
    for(int k=1;k<=n;k++){
        if(k %2!=0) {  
        s=s+(1.0 / k);  
        } else{          
        s=s-(1.0 / k);  
}
    }
    cout<<s;
    return 0;
}
