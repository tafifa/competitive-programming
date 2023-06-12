#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    double A, B, C;

	cin >> A >> B >> C;

	cout << "TRIANGULO: " << fixed << setprecision(3) << A * C / 2 << "\n"
	<< "CIRCULO: " << fixed << setprecision(3) << 3.14159 * C * C << "\n"
	<< "TRAPEZIO: " << fixed << setprecision(3) << C * ((A + B) / 2) << "\n"
	<< "QUADRADO: " << fixed << setprecision(3) << B * B << "\n"
	<< "RETANGULO: " << fixed << setprecision(3) << A * B << endl;

    return 0;
}