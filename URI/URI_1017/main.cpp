#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int tempo, velocidade;
    float distancia, quant_l;

    cin >> tempo;
    cin >> velocidade;
    distancia = velocidade*tempo;
    quant_l = distancia/12.0;
    cout << fixed << setprecision(3) << quant_l << endl;
    return 0;
}
