/* 4. Есть файл input.txt который заполнен действительными числами. Найдите сумму первого числа и последнего числа. Запишите ответ в файл output.txt. */
   //дробные

#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;

void main()
{
	srand(time(NULL));
	int i, n;
	cout << "Vvedite kol-vo chisel: ";
	cin >> n;
	float *a = new float[n];
	float *b = new float[n];
	ofstream myfile1;
	myfile1.open("input.txt");
	for (i = 0; i < n; i++)
	{
		a[i] = rand() % 101 - 50;
		b[i] = rand() % 101 - 50;
		myfile1 << a[i] + 0.01*b[i] << " ";
	}
	ofstream myfile2;
	myfile2.open("output2.txt");
	float sum=0.0;

	sum = (a[0]+0.01*b[0]) + (a[n-1]+0.01*b[n-1]);
	
	myfile2 << "Summa pervogo i poslednego chisla: " << sum;


	myfile1.close();
	delete[] a;
	system("pause");
}