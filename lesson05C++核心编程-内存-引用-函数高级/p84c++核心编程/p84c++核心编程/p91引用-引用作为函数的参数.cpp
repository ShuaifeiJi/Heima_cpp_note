/*
��������������
	���ã���������ʱ�������������õļ������β�����ʵ��
	�ŵ㣺���Լ�ָ���޸�ʵ��
*/

#include <iostream>
using namespace std;

// ��������

// 1��ֵ����
void mySwap01(int a, int b) 
{
	int temp = a;
	a = b;
	b = temp;

	cout << "swap01 a = " << a << endl;
	cout << "swap02 b = " << b << endl;
}

// 2����ַ����
void mySwap02(int *a, int *b) // *a  *b��ָ��
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

// 3�����ô���
void mySwap03(int &a, int &b) //�������ã��൱���β�����ʵ�εı���
{
	int temp = a;
	a = b;
	b = temp;
}


int main91() {
	int a = 10;
	int b = 20;
	
	// ֵ���ݣ��ββ�������ʵ��
	mySwap01(a, b);
	cout << "ֵ����a = " << a << endl;
	cout << "ֵ����b = " << b << "\n";

	// ��ַ���ݣ��βλ�����ʵ��
	mySwap02(&a, &b);
	cout << "��ַ����a = " << a << endl;
	cout << "��ַ����b = " << b << endl;

	// ���ô��ݣ��βλ�����ʵ��
	mySwap03(a, b);
	cout << "���ô���" << a << endl;
	cout << "���ô���" <<b << endl;

	system("pause");
	return 0;
}