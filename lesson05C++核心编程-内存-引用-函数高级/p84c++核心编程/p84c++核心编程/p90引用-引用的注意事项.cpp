/*
����ע�����
	1�����ñ����ʼ��
		���磺int &b; // �����
	2�������ڳ�ʼ���󣬲����Ըı�
		���磺 int &b = a;��������b�Ǳ���c�ı����ˣ�
*/

#include <iostream>
using namespace std;

int main90() {

	int a = 10;

	// 1�����ñ����ʼ��
	// int &b; ���������ʼ������
	int &b = a;

	cout << "b�ĵ�ַ�� " << &b << endl;
	cout << "a�ĵ�ַ�� " << &a << endl; // ��ַ��ͬ���൱��b��a������ַ�Ĳ�ͬ����

	// 2�������ڳ�ʼ���󣬲����Ըı�
	int c = 20;

	b = c; // ���Ǹ�ֵ�����������Ǹ�������
	cout << "b��ֵ�� " << b << endl;
	cout << "c��ֵ�� " << c << endl;

	cout << "b�ĵ�ַ�� " << &b << endl;
	cout << "c�ĵ�ַ�� " << &c << endl; // ��ַ��ͬ

	system("pause");
	return 0;

}