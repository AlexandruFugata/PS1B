#include <iostream>
using namespace std;
void verifica(int n)
{
	int x1, x2, x3, x4;
	x1 = n % 10;
	x2 = n / 10 % 10;
	x3 = n / 100 % 10;
	x4 = n / 1000 % 10;
	
}
int main()
{
	int n, x1, x2, x3, x4, ok = 0;
	cout << "Introduceti un numar intre 1 si 3999: ";
	cin >> n;
	while (ok == 0)
	{
		if (n > 0 && n < 4000)
		{
			cout << "Numarul cu cifre romane: ";
			verifica(n);
			ok = 1;
		}
		else
		{
			cout << "Numar gresit. Introduceti un numar intre 1 si 3999!!!\n";
			cin >> n;
		}
	}
	system("pause");
	return 0;
}