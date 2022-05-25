#include <iostream>
using namespace std;
void verifica(int n)
{
	int x1, x2, x3, x4;
	x1 = n % 10;
	x2 = n / 10 % 10;
	x3 = n / 100 % 10;
	x4 = n / 1000 % 10;
	if (x4 == 1)
		cout << "M";
	if (x4 == 2)
		cout << "MM";
	if (x4 == 3)
		cout << "MM";
	if (x3 == 1)
		cout << "C";
	if (x3 == 2)
		cout << "CC";
	if (x3 == 3)
		cout << "CCC";
	if (x3 == 4)
		cout << "CD";
	if (x3 == 5)
		cout << "D";
	if (x3 == 6)
		cout << "DC";
	if (x3 == 7)
		cout << "DCC";
	if (x3 == 8)
		cout << "DCCC";
	if (x3 == 9)
		cout << "CM";
	if (x2 == 1)
		cout << "X";
	if (x2 == 2)
		cout << "XX";
	if (x2 == 3)
		cout << "XXX";
	if (x2 == 4)
		cout << "XL";
	if (x2 == 5)
		cout << "L";
	if (x2 == 6)
		cout << "LX";
	if (x2 == 7)
		cout << "LXX";
	if (x2 == 8)
		cout << "LXXX";
	if (x2 == 9)
		cout << "XC";
	if (x1 == 1)
		cout << "I";
	if (x1 == 2)
		cout << "II";
	if (x1 == 3)
		cout << "III";
	if (x1 == 4)
		cout << "IV";
	if (x1 == 5)
		cout << "V";
	if (x1 == 6)
		cout << "VI";
	if (x1 == 7)
		cout << "VII";
	if (x1 == 8)
		cout << "VIII";
	if (x1 == 9)
		cout << "IX";

	cout << "\n";
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