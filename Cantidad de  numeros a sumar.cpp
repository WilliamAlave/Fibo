#include<iostream>

using  namespace std;

void Fibonacci(int n);
int  main(){
    int n1;
    cout<<"numeros a Sumar  "<<endl;
    cin>>n1;
    if(n1 >=0){
       Fibonacci(n1);
    }else {
        cout<<"No puedo procesar numero negativos  ";
    }


   return 0;
}
void Fibonacci(int extremo_fin){
    int result=0;
    for(int i=1;i<=extremo_fin;i++){
        result+= i+extremo_fin;
        extremo_fin--;
    }
    cout<<"La  suma es "<<result<<endl;
}
