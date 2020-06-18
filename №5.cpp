/* 5. Есть файл input.txt который заполнен действительными числами. Запишите эти числа в транспонированном порядке в файл output.txt. */

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream myfile1;
	myfile1.open("input.txt");
	int n, m;
	myfile1 >> n;
	myfile1 >> m;

	int **A = new int*[n];
	for (int i = 0; i < n; i++)
		A[i] = new int[n];


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) 
			myfile1 >> A[i][j];
		}

	ofstream myfile2;
	myfile2.open("output.txt");

	myfile2 << m << " " << m << endl;
	for (int j = 0; j < m; j++) {
		for (int i = 0; i < n; i++) {
			myfile2 << A[i][j] << " ";
		}
		myfile2 << endl;
	}

	for (int i = 0; i < n; i++)
		delete[]A[i];

	delete[]A;
	
	myfile1.close();
	myfile2.close();


	system("pause");
	
}