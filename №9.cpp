/* 9. ���� ������ �����, ������� ��������� ������� �� 1 �� 100, �� 1
   �� 1000, �� 1 �� 10000, �� 1 �� 100000 � ��������� �������.
   ����������� ���������� ������� �������. �������� �����
   ���������� ��� ������� �����.
*/

#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;
void F1()
{
int n=100;
setlocale(LC_ALL,"rus");
int*a = new int[n];
ifstream myfile1;
myfile1.open("C:\\Users\\Student\\Desktop\\Praktika5KirillinaA\\input1.txt");
if (myfile1.is_open())
{
cout << "1 ���� ������" << endl;
}
if(!myfile1.is_open())
{
cerr << "1 ���� �� ������!\n";
}
for (int i = 0; i < n; i++) {
myfile1 >> a[i];
}
ofstream myfile2;
myfile2.open("output1.txt");
int start=clock(); //��������� ����� ������
												//���������� ������� ������� �� �����������
int x;
long i,j;
for(i=0;i<n;i++) //���� ��������, i-����� �������
{
	x=a[i];
		//����� ����� �������� � ������� ������������������
	for(j=i-1;j>=0 && a[j]>x;j--)
	a[j+1]=a[j]; //�������� ������� �������, ���� �� �����
		//����� �������, �������� �������
	a[j+1]=x;
}
for(int i=0;i<n;i++) 
{
	myfile2<<a[i];
	myfile2<<endl;
}

int end=clock(); //��������� ����� ���������
double t=(end-start);
myfile2 << "����� ���������� ������ ��������� � �������������: "<< t<< endl;


myfile1.close();
myfile2.close();
delete[] a;
}

void F2()
{
int n=1000;
setlocale(LC_ALL,"rus");
int*a = new int[n];
ifstream myfile3;
myfile3.open("C:\\Users\\Student\\Desktop\\Praktika5KirillinaA\\input2.txt");
if (myfile3.is_open())
{
cout << "2 ���� ������" << endl;
}
if(!myfile3.is_open())
{
cerr << "2 ���� �� ������!\n";
}
for(int i=0;i<n;i++)
{
myfile3 >> a[i];
}
ofstream myfile4;
myfile4.open("output2.txt");
int start=clock(); //��������� ����� ������
												//���������� ������� ������� �� �����������
for(int i=0;i<n;i++)
	for(int j=i;j>0 && a[j-1]>a[j]; j--) //���� j>0 � ������� j-1>j
		swap(a[j-1],a[j]); //������ ������� �������� j � j-1
for(int i=0;i<n;i++)
{
myfile4 << a[i];
myfile4 << endl;
}

int end=clock(); //��������� ����� ���������
double t=(end-start); //������� CLOCKS_PER_SEC ����� ��� �������� ���������� ������� clock � �������
myfile4 << "����� ���������� ������ ��������� � �������������: "<< t << endl;

myfile3.close();
myfile4.close();
delete[] a;
}

void F3()
{
int n=10000;
setlocale(LC_ALL,"rus");
int*a = new int[n];
ifstream myfile5;
myfile5.open("C:\\Users\\Student\\Desktop\\Praktika5KirillinaA\\input3.txt");
if (myfile5.is_open())
{
cout<< "3 ���� ������"<< endl;
}
if(!myfile5.is_open())
{
cerr << "3 ���� �� ������!\n";
}
for(int i=0;i<n;i++)
{
myfile5 >> a[i];
}
ofstream myfile6;
myfile6.open("output3.txt");
int start=clock(); //��������� ����� ������
												//���������� ������� ������� �� ��������
for(int i=0;i<n;i++)
	for(int j=i;j>0 && a[j-1]<a[j]; j--) //���� j>0 � ������� j-1>j
		swap(a[j-1],a[j]); //������ ������� �������� j � j-1
for(int i=0;i<n;i++)
{
myfile6 << a[i];
myfile6 << endl;
}

int end=clock(); //��������� ����� ���������
double t=(end-start); //������� CLOCKS_PER_SEC ����� ��� �������� ���������� ������� clock � �������
myfile6 << "����� ���������� ������ ��������� � �������������: "<< t<< endl;

myfile5.close();
myfile6.close();
delete[] a;
}

void F4()
{
int n=100000;
setlocale(LC_ALL,"rus");
int*a = new int[n];
ifstream myfile7;
myfile7.open("C:\\Users\\Student\\Desktop\\Praktika5KirillinaA\\input4.txt");
if (myfile7.is_open())
{
cerr << "4 ���� ������"<< endl;
}
if(!myfile7.is_open())
{
cerr << "4 ���� �� ������!\n";
}
for(int i=0;i<n;i++)
{
myfile7 >> a[i];
}
ofstream myfile8;
myfile8.open("output4.txt");
int start=clock(); //��������� ����� ������
												//���������� ������� ������� ��������
for(int i=0;i<n;i++)
	for(int j=i;j>0 && a[j-1]<a[j]; j--) //���� j>0 � ������� j-1>j
		swap(a[j-1],a[j]); //������ ������� �������� j � j-1
for(int i=0;i<n;i++)
{
myfile8 << a[i];
myfile8 << endl;
}
int end=clock(); //��������� ����� ���������
double t=(end-start);
myfile8 << "����� ���������� ������ ��������� � �������������: "<< t << endl;

myfile7.close();
myfile8.close();
delete[] a;
}

int main()
{
cout << "GOOD LUCK!" << endl;
F1();
F2();
F3();
F4();
system("pause");
return 0;
}