#include <iostream>
using namespace std;

int main() {
    int visitas_max = 10;
    int visitas=0;
    int estado_torta;

    while (visitas<visitas_max) {
        cin>>estado_torta;
        if (estado_torta==1){
            cout<<"-nom-nom :P"<<endl;
        } else{
            cout << "Sin pastel :("<<endl;
            break;
        }
    }

    return 0;
}
