#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a>>b; 
    
    while(b != 0) {
        int op=b;
        b=a %b;
        a=op;
    } cout << a;  
    return 0;
}
