#include <iostream>
using namespace std;

int main()
{
	//declaration
	int n;

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

	//output
	cout << n << "\n" << n100 << " nota(s) de R$ 100,00\n" << n50 << " nota(s) de R$ 50,00\n" << n20 << " nota(s) de R$ 20,00\n" << n10 << " nota(s) de R$ 10,00\n" << n5 << " nota(s) de R$ 5,00\n" << n2 << " nota(s) de R$ 2,00\n" << n1 << " nota(s) de R$ 1,00" << endl;

	return 0;
}