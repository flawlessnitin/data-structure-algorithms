#include <iostream>
using namespace std;
 
int main() {
    int num;
    cin >> num;
    
    int fSpace;
    for(int i = 0; i < num; i++) {
        fSpace = i;
        for(int j = 0; j <= i; j++) {
            cout << "*";
            if(fSpace != 0) {
                cout << " ";
                fSpace--;
            }
        }
        cout << endl;
    }
    int sSpace;
    for(int x = 0; x < num - 1; x++) {
        int sSpace = num - x - 1;
        for(int y = 0; y < num - x - 1; y++) {
            cout << "*";
            if(sSpace != 0) {
                cout << " ";
                sSpace--;
            }
            
        }
        cout << endl;
    }
    
    return 0;
}
