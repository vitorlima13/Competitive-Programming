#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int cod_func, hr_trab;
    double hr_sal, sal_final;
    cin >> cod_func;
    cin >> hr_trab;
    cin >> hr_sal;

    sal_final = hr_sal*hr_trab;

    cout << "NUMBER = " << cod_func << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << sal_final << endl;
    return 0;
}
