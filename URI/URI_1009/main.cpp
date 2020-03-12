#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string nameV;
    double sal_tot, tot_vend, tot_final;

    cin >> nameV;
    cin >> sal_tot;
    cin >> tot_vend;

    tot_final = sal_tot+tot_vend*0.15;

    cout << "TOTAL = R$ " << fixed << setprecision(2) << tot_final <<endl;
    return 0;
}
