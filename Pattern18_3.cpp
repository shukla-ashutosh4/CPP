#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int row = n;
    while (row >= 1) {
        int space = n - row;
        while (space > 0) {
            cout << " ";
            space = space - 1;
        }
        int col = 1;
        while (col <= row) {
            cout << "*";
            col = col + 1;
        }
        cout << endl;
        row = row - 1; 
    }
}
