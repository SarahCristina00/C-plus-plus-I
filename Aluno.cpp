#include <iostream>
#include "Aluno.h"

using namespace std;

void Aluno::definirAluno(){
    cout<<"Informe a idade do aluno: "<<endl;
    cin>>idade;
    cout<<"Informe a matricula do aluno: ";
    cin>>matricula;
    for(int i = 0; i<3; i++){
      cout<<"Informe a nota "<< i <<" do aluno: "<< endl;
        cin>>nota[i];  
    }

}

void Aluno::imprimirAluno(){
cout<<"Idade: "<<idade<<endl;
cout<<"Matricula: "<<matricula<<endl;
for(int i = 0; i<3; i++){
    cout<<"Nota "<<i<<": "<<nota[i]<<endl;
}

}
double Aluno:: calculaMedia(){
    int soma = 0;
    for(int i = 0; i<3; i++){
        soma = soma + nota[i];
    }
    int media = soma/3;
    return media;
}

bool Aluno::foiAprovado(){
    if(calculaMedia()>=60){
        return true;
    }
    else{
        return false;
    }
}
