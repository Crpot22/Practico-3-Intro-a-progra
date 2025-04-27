// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>

using namespace std;

int main() {
    string line;
    getline(cin, line); 
    
    int i = 0;
    while (line[i] != '\0') {
        if (line[i] == ' ' || line[i] == '\n') {
            cout << i << endl;
        }
        i++;
    }
    
    return 0;
}
