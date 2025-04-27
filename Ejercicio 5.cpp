#include<iostream>
using namespace std;

int main(){
    int dia,totaldias;
    cin>>dia>>totaldias;
    
    if (dia >=1 && dia<=7 &&totaldias>=1 && totaldias<=99 ){
        for (int i=1;i<dia;i++)cout <<"   ";
        for(int d= 1;d<= totaldias ; d++){
            if(d<10)cout<<" ";
            cout<<d;
            if( (dia+d-1)%7==0||d==totaldias)cout<<endl;
            else cout<<" ";
        }
    }else{
        cout<<"Entrada no válida"<<endl;
    }
    
    return 0;
}
