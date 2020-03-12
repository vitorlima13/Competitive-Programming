#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int x; //distancia total.
    double y;//total do combustivel.
    double cons_medio;

    cin >> x;
    cin >> y;

    cons_medio = x/y;
    cout << fixed << setprecision(3) << cons_medio << " km/l" << endl;
    return 0;
}
