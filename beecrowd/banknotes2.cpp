#include <iostream>
using namespace std;

int main()
{
	//declaration
	double n;

	//input
	cin >> n;

	//process

	int n100 = n / 100;
	int n100a = n - n100*100;

	int n50 = n100a / 50;
	int n50a = n100a - n50*50;

	int n20 = n50a / 20;
	int n20a = n50a - n20*20;

	int n10 = n20a / 10;
	int n10a = n20a - n10*10;

	int n5 = n10a / 5;
	int n5a = n10a - n5*5;

	int n2 = n5a / 2;
	int n2a = n5a - n2*2;

	int n1 = n2a / 1;
    int n1a = 10*(n2a - n1*1);

    int nn = (n * 100) - (int)n*100;

    int n050 = nn / 50;
    int n050a = nn - n050*50;

    int n025 = n050a / 25;
    int n025a = n050a - n025*25;

    int n010 = n025a / 10;
    int n010a = n025a - n010*10;

    int n005 = n010a / 5;
    int n005a = n010a - n005*5;

    int n001 = n005a / 1;

	//output
	cout << "NOTAS:\n" << n100 << " nota(s) de R$ 100.00\n" << n50 << " nota(s) de R$ 50.00\n" << n20 << " nota(s) de R$ 20.00\n" << n10 << " nota(s) de R$ 10.00\n" << n5 << " nota(s) de R$ 5.00\n" << n2 << " nota(s) de R$ 2.00\n" 
    << "MOEDAS:\n" << n1 << " moeda(s) de R$ 1.00\n" << n050 << " moeda(s) de R$ 0.50\n" << n025 << " moeda(s) de R$ 0.25\n" << n010 << " moeda(s) de R$ 0.10\n" << n005 << " moeda(s) de R$ 0.05\n" << n001 << " moeda(s) de R$ 0.01" << endl;
	

	return 0;
}