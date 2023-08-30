#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int row = 0;
    char start = n;
    while(row<=n) {

        int col = 1;
        char start = ('A'+row);
        while(col<=n){
            cout<< start <<" ";
            start = start + 1;
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
}
