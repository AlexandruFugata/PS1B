#include <iostream>
using namespace std;
void verifica(int n)
{
	int x1, x2, x3, x4;
	x1 = n % 10;
	x2 = n / 10 % 10;
	x3 = n / 100 % 10;
	x4 = n / 1000 % 10;
	switch (x4)
	{
	case 1:
		cout << "M";
		break;
	case 2:
		cout << "MM";
		break;
	case 3:
		cout << "MMM";
		break;
	}
	switch (x3)
	{
	case 1:
		cout << "C";
		break;
	case 2:
		cout << "CC";
		break;
	case 3:
		cout << "CCC";
		break;
	case 4:
		cout << "CD";
		break;
	case 5:
		cout << "D";
		break;
	case 6:
		cout << "DC";
		break;
	case 7:
		cout << "DCC";
		break;
	case 8:
		cout << "DCCC";
		break;
	case 9:
		cout << "CM";
		break;
	}
	switch (x2)
	{
	case 1:
		cout << "X";
		break;
	case 2:
		cout << "XX";
		break;
	case 3:
		cout << "XXX";
		break;
	case 4:
		cout << "XL";
		break;
	case 5:
		cout << "L";
		break;
	case 6:
		cout << "LX";
		break;
	case 7:
		cout << "LXX";
		break;
	case 8:
		cout << "LXXX";
		break;
	case 9:
		cout << "XC";
	}
	switch (x1)
	{
	case 1:
		cout << "I";
		break;
	case 2:
		cout << "II";
		break;
	case 3:
		cout << "III";
		break;
	case 4:
		cout << "IV";
		break;
	case 5:
		cout << "V";
		break;
	case 6:
		cout << "VI";
		break;
	case 7:
		cout << "VII";
		break;
	case 8:
		cout << "VIII";
		break;
	case 9:
		cout << "IX";
		break;
	}
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