//3. ��������� ���� input.txt ���������� �������� ������� (������: 2.4 1.5 6.8 1.2 8.9 � �.�).

#include <iostream>
#include <fstream> //��� ������ � �������
#include <ctime>
using namespace std;
void main() 
{
	srand(time(NULL));
	int i,n;
	cin>>n;
	float *a = new float[n];
	float *b = new float[n];
	ofstream myfile1;
	myfile1.open("input.txt");
	for(i=0;i<n;i++)
	{
		a[i] = rand() % 101 - 50;
		b[i] = rand() % 101 - 50;
		myfile1<<a[i]+0.01*b[i]<<" ";
	}
	myfile1.close();
	delete[] a;
	system("pause");
}







