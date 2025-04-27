#include <iostream>
using namespace std;

int main() {
    int number;
    int facto = 1;
    cin >> number;
    
    if(number<0){
    cout<<"El numero es negativo. Intente de nuevo"<<endl;
    }if(number>14){
        cout<<"El numero es muy grande. Intentelo de nuevo"<<endl;
    }while (number >= 1) {
        facto = facto * number;  
        number = number - 1;    
   }
    cout << facto << endl;

    return 0;
}
