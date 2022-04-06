#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char palabra[50];
    string aux1,aux2;
    cout<<"Entrada"<<endl;
    cin.getline(palabra,50,'\n');
    aux1=palabra;
    cout<<"=================="<<endl;
    strrev(palabra);
    cout<<palabra<<endl;
    aux2=palabra;
        if(aux1==aux2){
            cout<<"SI son palabras Polindromas";
        }else{
            cout<<"No son polindromas";
        }
}
