#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int i = 1;
    int count = 0;
    int sum = 0;
    
    while(count<n) {
        if(i % 2 == 0) {
            sum = sum + i;
            count = count + 1;
        }
        i = i+1;
        }
    
    cout<< "Value of sum of all even number is " <<sum<<endl;
}