#include<iostream>
using namespace std;

int main() {
    int num, suma = 0;
    cin>>num;
    while(num >0) {
        suma=suma+num % 10;  
        num= num /10;         
    }
    cout << suma;
    return 0;
}
