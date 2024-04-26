#include <iostream>

int fatorial(int n){
    if(n == 0 || n == 1){

        return 1;
    }
    else{
        return n * fatorial(n-1);
    }

}


using namespace std;

int main()
{
    int fat, numero;
    cout<<"Informe o número que deseja saber o fatorial: "<<endl;
    cin>>numero;
    fat = fatorial(numero);
    cout<<"Fatorial de "<<numero<<" é: "<< fat<<endl;
    return 0;
}
