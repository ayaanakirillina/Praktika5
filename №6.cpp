/* 6. Задание на длинную арифметику. Создать два файла,
которые заполнены цифрами. Требуется найти сумму этих чисел
и вывести на экран / файл.*/

#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>

using namespace std;

string Sum(string s1, string s2)
{
	int n1 = s1.length(), n2 = s2.length();
	if (n1 > n2)
	{
		swap(s1, s2);
		swap(n1, n2);
	}
	string s3;
	reverse(s1.begin(), s1.end());
	reverse(s2.begin(), s2.end());

	int z = 0;
	for (int i = 0; i < n1; i++)
	{
		int sum = ((s1[i] - '0') + (s2[i] - '0') + z);
		s3.push_back(sum % 10 + '0');
		z = sum / 10;
	}
	for (int i = n1; i < n2; i++)
	{
		int sum = ((s2[i] - '0') + z);
		s3.push_back(sum % 10 + '0');
		z = sum / 10;
	}
	if (0)
		s3.push_back(z + '0');//остаток
	reverse(s3.begin(), s3.end());
	return s3;
}
int main()
{
	setlocale(LC_ALL, "");
	ifstream myfile1;
	ifstream myfile2;
	ofstream myfile3;
	myfile1.open("input.txt");
	string s1;
	string s2;
	myfile1 >> s1;
	myfile2 >> s2;
	myfile3 << Sum(s1, s2);

	system("pause");
}
