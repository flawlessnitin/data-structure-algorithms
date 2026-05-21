#include <iostream>
using namespace std;
 
int main() {
    int m, n;
    cin >> m >> n;
    
    while(m > 0) {
        int i = 0;
        while(i < n) {
            cout << "*";
            i++;
        }
        cout << endl;
        m--;
    }
    
    return 0;
}
