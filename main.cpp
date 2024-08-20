#include <iostream>

#include "Aluno.h"

using namespace std;

int main(){


Aluno x;
x.definirAluno();
x.imprimirAluno();
cout<<"A média do aluno é: "<<x.calculaMedia()<<endl;


if(x.foiAprovado()){
    cout<<"Aprovado!!"<<endl;
}
    else{
        cout<<"Reprovado!"<<endl;
    }

    return 0;

}