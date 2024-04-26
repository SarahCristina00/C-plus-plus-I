/******************************************************************************
Fac ̧a um programa que leia um numero inteiro  ́ n e aloque
um vetor com n inteiros de forma dinamica (use o ˆ
operador new). Em seguida, o programa deve ler os
valores do vetor e calcular a m ́edia dos elementos desse
vetor. Por fim, deve desalocar (use o operador delete) a
memoria usada para armazenar os seus elementos.  ́
*******************************************************************************/
#include <iostream>

using namespace std;

int main(){

    int n, soma = 0, media;
    int *vet = new int[n];
    cout<<"Informe o tamanho do vetor: "<<endl;
    cin>>n;
    for(int i = 0; i <n; i++){
        cout<<"Informe o valor da posição "<<i<<" : "<<endl;
        cin>> vet[i];
        soma = soma + vet[i];
    }
    cout<<"Vetor completado: ";
    for(int i = 0; i<n; i++){
        cout<<vet[i]<<" ";
    }
    cout<<endl;
    media = soma/n;
    cout<<"A média dos elementos do vetor é: "<<media<<endl;


    delete [] vet;

    return 0;
}

