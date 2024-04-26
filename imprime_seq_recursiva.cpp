/******************************************************************************


*******************************************************************************/
#include <iostream>

using namespace std;

void imprimeIntervalo(int a, int b, int inc){

    if(a <= b){
        cout<<a<<endl;
        imprimeIntervalo(a+inc,b,inc);
    }

}


int main()
{
    int c,d,e;
    cout<<"Informe 2 números, sendo que o segundo número(se houver) deve ser maior que o primeiro: "<<endl;
    cin>>c;
    cin>>d;
    cout<<"Informe um número aleatório(incremento): "<<endl;
    cin>>e;
    imprimeIntervalo(c,d,e);
    return 0;
}
