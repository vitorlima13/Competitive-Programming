#include <iostream>
#include<iomanip>

using namespace std;
int main()
{
    double A, B, C, media;

    cin >> A;
    cin >> B;
    cin >> C;
    media = (A/10 * 2) + (B/10 * 3) + (C/10 * 5);

    cout << "MEDIA = " << fixed << setprecision(1) << media << "\n";

    return 0;
}
