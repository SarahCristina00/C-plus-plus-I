/******************************************************************************

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int *pt;

    cout<<"Endereço de pt: "<<&pt<<endl;
    
    int x;
    
    cout<<"Informe o valor de X: "<<endl;
    cin>>x;
    
    pt = &x;
    
    cout<<"Conteúdo da Variavel pt: "<<*pt<<endl;
    cout<<"Endereço de X: "<<&x<<endl;
   
    *pt = *pt *10;
    
    cout<<"Conteúdo apontado por pt: "<<pt<<endl;
    
    *pt = *pt + 10;
    
    cout<<"Conteúdo de pt: "<<*pt<<endl;
    
    

    return 0;
}

