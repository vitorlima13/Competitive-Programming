#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, c, pi=3.14159;
    double triangulo, circulo, trapezio, quadrado, retangulo;

    cin >> a >> b >> c;
    triangulo = (a*c)/2;
    circulo = pi*(c*c);
    trapezio = ((a+b)/2)*c;
    quadrado = b*b;
    retangulo = a*b;
    cout << "TRIANGULO: " << fixed << setprecision(3) << triangulo << endl;
    cout << "CIRCULO: " << fixed << setprecision(3) << circulo << endl;
    cout << "TRAPEZIO: " << fixed << setprecision(3) << trapezio << endl;
    cout << "QUADRADO: " << fixed << setprecision(3) << quadrado << endl;
    cout << "RETANGULO: " << fixed << setprecision(3) << retangulo << endl;
    return 0;
}
