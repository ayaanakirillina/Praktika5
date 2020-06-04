/* 2. Есть файл input.txt который заполнен двойками.Требуется
удалить вторую половину данных ∗ в этом файле.∗ Необходимо,
чтобы количество элементов в файле input.txt было четным. */

#include<iostream>
#include<math.h>
#include<fstream>

using namespace std;

int main()
{
	int n;
	ifstream myfile1;
	myfile1.open("input.txt");
	myfile1 >> n; //нужно ввести размер массива
	int *a = new int[n];
	for (int i = 0; i < n; i++)
		myfile1 >> a[i];
	ofstream myfile2;
	myfile2.open("output.txt");
	myfile2 << "n=" << n / 2 << endl;
	for (int i = 0; i < n / 2; i++)
		myfile2 << a[i] << " ";

	delete[]a;
	myfile1.close();
	myfile2.close();

	system("pause");
}