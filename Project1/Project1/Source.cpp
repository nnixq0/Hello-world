#include <iostream>
#include <math.h>
#include <iomanip>
#include "Header.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	cin.exceptions(istream::failbit | istream::failbit); //��������� ���������� � ���� ������
	cout << "������� ������������� ��������� dx / x * ln(x) ������� ����� ���������������\n << \n ������� ������� �������������� : \n" << "a = ";
	try
	{
		cin >> a;
	}
	catch (istream::failure e)

	{
		cerr << "Exeption: unidentified characters\n";
		exit(0);
	}
	cout << "b = ";
	try
	{
		cin >> b;
	}
	catch (istream::failure e)
	{
		cerr << "Exeption: unidentified characters\n";
		exit(0);
	}
	cout << "\n������� ����� �������� ��������� : \n";
	try
	{
		cin >> n;
	}
	catch (istream::failure e)
	{
		cerr << "Exeption: unidentified characters\n";
		exit(0);
	}
	cout << "\n������� ����� ������� ����� ������� � ������ : \n";
	try
	{
		cin >> k;
	}
	catch (istream::failure e)
	{
		cerr << "Exeption: unidentified characters\n";
		exit(0);
	}
	cout << "\n�����:\n ";
	cout << setprecision(k) << reshenie(a, b, n) << endl; //����� ������
	return 0;
}