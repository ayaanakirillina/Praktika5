/* 4. ���� ���� input.txt ������� �������� ���������������
   �������. ������� ����� ������� ����� � ���������� �����.
   �������� ����� � ���� output.txt. */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	ifstream myfile1;
	myfile1.open("input.txt");
	if (myfile1.is_open()) {
		cout << "1 ���� ������" << endl;
	}
	if (!myfile1.is_open()) {
		cerr << "1 ���� �� ������!\n";
	}
	ofstream myfile2;
	myfile2.open("output.txt");
	if (myfile2.is_open()) {
		cout << "2 ���� ������" << endl;
	}
	if (!myfile2.is_open()) {
		cerr << "2 ���� �� ������!\n";
	}
	char chisla[100];
	int a[100], x[100];
	myfile1.get(chisla, 100);
	int l = strlen(chisla);
	int d = 0, z = 0;
	a[0] = 0;
	l++;
	chisla[l - 1] = ' ';
	for (int i = 0; i < l; i++)
	{
		if (chisla[i] >= '0' && chisla[i] <= '9')
		{
			a[z] = a[z] * pow(10, d) + (chisla[i] - 48);
			d++;
		}
		else
		{
			x[z] = a[z];
			z++;
			a[z] = 0;
			d = 0;
		}
	}
	myfile2 << "����� ������� � ���������� �����:\n" << x[0] + x[z - 1];

	system("pause");
}