#include<iostream>
using namespace std;

int main() {

    int a = 21;
    int b = 6;

    cout<<" a<<2 "<<(a<<2) <<endl;
    // cout<<" a|b "<<(a|b) <<endl;
    // cout<<" ~a "<<~a <<endl;
    // cout<<" a^b "<<(a^b) <<endl;

    int i = 7;

    cout<<(++i)<<endl;
    // 8
    cout<<(i++)<<endl;
    // 8, i = 9
    cout<<(i--)<<endl;
    // 9, i = 8
    cout<<(--i)<<endl;
    //  7, i = 7
}