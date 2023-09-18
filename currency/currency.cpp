#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double pesos, reais, soles;
    cout << "Your Pesos: "; 
    cin >> pesos;
    cout << "Your Reais: "; 
    cin >> reais;
    cout << "Your Soles: "; 
    cin >> soles;

    double dollars = soles * 0.21 + reais * 0.00025 + pesos * 0.27;
    cout << "Your dollars: $ \n" << dollars;
};