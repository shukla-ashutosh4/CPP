#include <iostream>
using namespace std;

int main (){
    int a;
    int b;
    cout<< "Welcome to Calculator";
    cout<< "Enter The values of A & B"<<endl;
    cin>> a;
    cin>> b;
    char op;
    cout<< "Enter the operation you want to perform";
    cin>> op;
    switch(op){

        case '+': cout<< (a+b)<<endl;
                  break;

        case '-': cout<< (a-b)<<endl;
                  break;

        case '*': cout<< (a*b)<<endl;
                  break;

        case '/': cout<< (a/b)<<endl;
                  break;

        case '%': cout<< (a%b)<<endl;
                  break;




    }

}