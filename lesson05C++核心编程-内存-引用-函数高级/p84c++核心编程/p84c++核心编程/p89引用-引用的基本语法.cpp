/*
���õ����ã�	�����������

���õ��﷨��	�������� &���� = ԭ��

ע�⣺������ԭ�� ��������ͬһ���ڴ�
���ѿ��ӷ�ƨ��
*/

#include <iostream>
using namespace std;

int main89()
{
	// ���õĻ����﷨
	// �������� &���� = ԭ��

	int a = 10;
	int &b = a;

	// abֵ��ͬ
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	// ab��ַ��ͬ
	cout << "a address: " << &a << endl;
	cout << "b address: " << &b << endl;

	// ab��һ���򶼸�
	b = 100;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "a address " << &a << endl;
	cout << "b address " << &b << endl;

	system("pause");
	return 0;
}
