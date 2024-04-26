/******************************************************************************

*******************************************************************************/
#include <iostream>

using namespace std;

float prodEscalar(int n, float x[], float y[]){
    float produto = 0;
    for(int i = 0; i <n; i++){
        produto = produto + (x[i]*y[i]);
}
            return produto;
}

int main()
{
   int n;
   float prod;
   cout<<"Informe o tamanho dos 2 vetores: "<<endl;
   cin>>n;
   float *v = new float [n];
   float *w = new float [n];
   for(int i = 0; i< n; i++){
    cout<<"Informe o valor do vetor V na posição "<<i<<" : "<<endl;
    cin>>v[i];
   }
   for(int j = 0; j<n; j++){
    cout<<"Informe o valor do vetor W na posição "<<j<<" : "<<endl;
    cin>>w[j];
   }
    prod = prodEscalar(n,v,w);
    cout<<"O produto escalar dos vetores é: "<<prod<<endl;

    delete [] v;
    delete [] w;
    return 0;
}


