/******************************************************************************
Crie uma func ̧ao retorne quantos elementos de um vetor  ̃
vet de inteiros, de tamanho n, sao maiores do que um  ̃
valor val. Essa func ̧ao deve imprimir uma mensagem  ̃
conforme exemplo abaixo para todos os elementos de vet
que sao maiores que  ̃ val. Em seguida, crie uma func ̧ao ̃
para alocar um vetor dinamicamente, copiar os elementos
do vetor vet que sao maiores que  ̃ val para esse novo
vetor criado e, ao final, retornar esse vetor criado de forma
dinamica. Se o vetor n ˆ ao possuir nenhum elemento maior  ̃
que val, retornar NULL.

*******************************************************************************/
#include <iostream>

using namespace std;

int func1(int n, int vet[], int val){
    int cont = 0;
    for(int i = 0; i<n; i++){
        if(vet[i]>val){
            cont++;
        cout<<"Posição: "<<i<<endl;
        cout<<"Valor: "<<vet[i]<<endl;
        cout<<"Endereço: "<<&vet[i]<<endl;
        }
    }
    return cont;

}

int* func2(int n, int vet[], int val, int tam){
    int *vet2 = new int [tam];
    int j = 0;
    for(int i= 0; i <n; i++){
        if(vet[i]>val){
            vet2[j] = vet[i];
            j++;
        }
    }
    if(j>0){
        return vet2;
    }
    else{
        return NULL;
    }


}

int main()
{
    int n, val;
    int tam;
    cout<<"Informe o tamanho do vetor: "<<endl;
    cin>>n;
    int vet[n];
    for(int i = 0; i <n; i++){
        cout<<"Informe o valor da posição "<<i<<endl;
        cin>>vet[i];
    }
    cout<<"Informe um valor para comparação: "<<endl;
    cin>>val;
    tam = func1(n,vet,val);
    int *novoVet = func2(n,vet,val,tam);
    for(int i = 0; i<tam; i++){
        cout<<novoVet[i]<<"  ";
    }


    return 0;
}
