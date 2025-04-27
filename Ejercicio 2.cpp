// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>

using namespace std;

int main() {
    string line;
    getline(cin, line);
    
    string word = ""; 
    for (int i=0;i<line.length(); i++) {
    char c=line[i];
        if (c==' '){
            cout<< "["<<word<< "]"<<endl; 
            word = ""; 
        } else {
            word+= c;
        }
    }

    cout<<"["<<word<<"]"<< endl;
    
    return 0;
}
