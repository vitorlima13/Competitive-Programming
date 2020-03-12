#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    double A, B;
    double media;

    cin >> A;
    cin >> B;

    media = 2/(11/((A*3.5)+(B*7.5)));
    media = media/2;

    cout << "MEDIA = " << fixed << setprecision(5) << media << endl;
    return 0;
}
