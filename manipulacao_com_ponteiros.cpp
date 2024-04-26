/******************************************************************************


*******************************************************************************/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int val = 5;
    int *ptr = &val;
    
    cout<<"Valor de Val: "<<val<<endl;
    cout<<"Endereço de Val: "<<&val<<endl;
    cout<<"Valor de Ptr: "<< ptr<<endl;
    cout<<"Conteúdo de ptr: "<<*ptr<<endl;
    
    
    *ptr = *ptr*2;
    cout<<"Conteudo de ptr atualizado: "<<*ptr<<endl;
    cout<<"Conteudo de Val atualizado: "<<val<<endl;
    
    int *ptr2 = &val;
    cout<<"Valor de Ptr2: "<<*ptr2<<endl;
    *ptr2 = *ptr + 5;
    cout<<"Valor atualizado de Ptr2: "<<*ptr2<<endl;
    return 0;
}

