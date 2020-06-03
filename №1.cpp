/* 1. Есть файл input.txt который заполнен единичками.Требуется
изменить содержимое этого файла на двойки. */

//В первом файле сначала нужно ввести размер массива, потос=м единички

#include<iostream>
#include<math.h>
#include<fstream>

using namespace std;

int main()
{
	ifstream myfile1;
	myfile1.open("input.txt");
	int n;
	myfile1 >> n;
	ofstream myfile2;
	int *a = new int[n];
	for (int i = 0; i < n; i++)
		myfile1 >> a[i];
	for (int i = 0; i < n; i++) {
		if (a[i] == 1) a[i] = 2;
	}
	
	myfile2.open("output.txt");
	for (int i = 0; i < n; i++)
		myfile2 << a[i] << " ";

	delete[]a;
	myfile1.close();
	myfile2.close();
	

	system("pause");
}