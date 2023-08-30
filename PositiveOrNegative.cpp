#include <iostream>
using namespace std;

int main() {
    int a,b;
    
    cout<<"Enter the value of a "<<endl;
    cin>>a;
    cout<<"Enter the value of b "<<endl;
    cin>>b;
    if(a>0) {
        cout<<"A is Positive "<<endl;
        }
     else if(a<0) {
        cout<<"A is Negative "<<endl;
     }
     else if(a=0) {
        cout<<" A is Zero ";
     }
     if(b>0) {
        cout<<"B is Positive "<<endl;
     }
     else if(b<0) {
           cout<<"B is Negative "<<endl;
           } 
     else if(b=0){
        cout<<" B is Zero ";
     }
}
