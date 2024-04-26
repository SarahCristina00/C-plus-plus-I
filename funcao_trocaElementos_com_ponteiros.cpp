/******************************************************************************

*******************************************************************************/
#include <iostream>

using namespace std;

void troca(int *a, int*b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

int main()
{
    int a = 10;
    int b = 15;
    cout<<"Valor de A e B antes da troca: A - "<<a<<" B - "<<b<<endl;
    troca(&a,&b);
    cout<<"Valor de A e B após a troca: A - "<<a<<" B - "<<b<<endl;

    return 0;
}
