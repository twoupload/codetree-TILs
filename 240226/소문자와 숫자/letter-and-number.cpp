#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    
    for(int i = 0; i < s.size(); i++) {
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] = s[i] + 32;
        }
    }

    
    for(int i = 0; i < s.size(); i++) {
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')) {
            cout << s[i];
        }
    }
    

    return 0;
}