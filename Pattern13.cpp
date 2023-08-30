#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int row = 1;4;
    char start = 'A';
    while(row<=n) {

        int col = 1;
        while(col<=n){
            char ch = (start++);
            cout<< ch;
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
}