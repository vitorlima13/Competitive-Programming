#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int cod_p1, cod_p2, n_p1, n_p2;
    double v_p1, v_p2, valorfinal;
    cin >> cod_p1 >> n_p1 >> v_p1;
    cin >> cod_p2 >> n_p2 >> v_p2;
    valorfinal = (v_p1*n_p1)+(v_p2*n_p2);
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << valorfinal << endl;
    return 0;
}
