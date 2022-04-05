#include<iostream>

using  namespace std;

void Fibonacci(int n);
int  main(){
    int n1;
    cout<<"numeros a generar "<<endl;
    cin>>n1;
    if(n1 >=0){
       Fibonacci(n1);
    }else {
        cout<<"Error no se  puede  generara  numeros  negativos ";
    }


   return 0;
}
void Fibonacci(int n){
    int a=0,b=1,c=1;
    cout<<"1 ";
    for(int i=1;i<n;i++){
    c = a+b;
    cout<<" "<<c;
    a=b;
    b=c;
    }
}
