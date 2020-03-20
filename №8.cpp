/* 
8. Есть четыре файла, которые заполнены числами от 1 до 100, от 1
   до 1000, от 1 до 10000, от 1 до 100000 в случайном порядке.
   Реализовать сортировку методом выбора. Показать время
   сортировки для каждого файла.
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
cout << "1 файл открыт" << endl;
}
if(!myfile1.is_open())
{
cerr << "1 файл не открыт!\n";
}
for (int i = 0; i < n; i++) {
myfile1 >> a[i];
}
ofstream myfile2;
myfile2.open("output1.txt");
int start=clock(); //запускаем время старта
												//сортировка методом выбора
int m,z;												
for(int k=0;k<n-1;k++)
{
m=k;
for(int i=k+1;i<n;i++)
	if(a[i]<a[m])
		m=i;
z=a[k];
a[k]=a[m];
a[m]=z;
}
for(int i=0;i<n;i++) 
{
	myfile2<<a[i];
	myfile2<<endl;
}

int end=clock(); //запускаем время окончания
double t=(end-start);
myfile2 << "Время выполнения программы в секундах: "<< t << endl;


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
cout << "2 открыт" << endl;
}
if(!myfile3.is_open())
{
cerr << "2 не открыт!\n";
}
for(int i=0;i<n;i++)
{
myfile3 >> a[i];
}
ofstream myfile4;
myfile4.open("output2.txt");
int start=clock(); //запускаем время старта
												//сортировка методом выбора
int m,z;												
for(int k=0;k<n-1;k++)
{
m=k;
for(int i=k+1;i<n;i++)
	if(a[i]<a[m])
		m=i;
z=a[k];
a[k]=a[m];
a[m]=z;
}
for(int i=0;i<n;i++) 
{
	myfile4<<a[i];
	myfile4<<endl;
}

int end=clock(); //Запускаем время окончания
double t=(end-start); 
myfile4 << "Время выполнения работы программы в миллисекундах: "<< t << endl;

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
cout<< "3 файл открыт"<< endl;
}
if(!myfile5.is_open())
{
cerr << "3 файл не открыт!\n";
}
for(int i=0;i<n;i++)
{
myfile5 >> a[i];
}
ofstream myfile6;
myfile6.open("output3.txt");
int start=clock(); //запускаем время старта
												//сортировка методом выбора
int m,z;												
for(int k=0;k<n-1;k++)
{
m=k;
for(int i=k+1;i<n;i++)
	if(a[i]>a[m])
		m=i;
z=a[k];
a[k]=a[m];
a[m]=z;
}
for(int i=0;i<n;i++) 
{
	myfile6<<a[i];
	myfile6<<endl;
}

int end=clock(); //запускаем время окончания
double t=(end-start); 
myfile6 << "Время выполнения работы программы в миллисекундах: "<< t<< endl;

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
cerr << "4 файл открыт"<< endl;
}
if(!myfile7.is_open())
{
cerr << "4 файл не открыт!\n";
}
for(int i=0;i<n;i++)
{
myfile7 >> a[i];
}
ofstream myfile8;
myfile8.open("output4.txt");
int start=clock(); //запускаем время старта
												//сортировка методом выбора
int m,z;												
for(int k=0;k<n-1;k++)
{
m=k;
for(int i=k+1;i<n;i++)
	if(a[i]>a[m])
		m=i;
z=a[k];
a[k]=a[m];
a[m]=z;
}
for(int i=0;i<n;i++) 
{
	myfile8<<a[i];
	myfile8<<endl;
}

int end=clock(); //запускаем время окончания
double t=(end-start);
myfile8 << "Время выполнения работы программы в миллисекундах: "<< t << endl;

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
