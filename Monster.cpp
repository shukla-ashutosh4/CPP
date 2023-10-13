#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for(int i = 0; i<t; i++) {

        long long H, X, Y;
        cin >> H; X; Y;

        long old_h = (H+Y-X);
        long new_h = (old_h + Y - X);

        if(new_h < old_h) {
            cout<< 1 << endl;
        }
        else {
            cout << 0 << endl;
        }
    }
}