#include <iostream>

using namespace std;

int SomaPar(int);

int main(){
    int quant = 0;
    cout << "Quantos numeros voce quer verificar?" ;
    cin >> quant;
    SomaPar(quant);
    return 0;
}

int SomaPar(int quant){
    int num = 0;
    int soma_tot = 0;
    int tot_par = 0;

    for (int i = 0; i < quant; i++)
    {
        cout << "Digite um numero inteiro positivo: \n";
        cin >> num;
        if(num%2==0){
            soma_tot = soma_tot + num;
            tot_par = tot_par + 1;
        }
    }
    cout << "Foram digitados " << tot_par << " numeros pares\n" ;
    cout << "A soma dos numeros pares foi: " << soma_tot ;
    return 0;
}