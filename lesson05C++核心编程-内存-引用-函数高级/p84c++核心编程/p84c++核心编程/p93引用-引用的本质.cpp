/*
���ã�
	���õı�����һ��ָ�볣��

	����һ����ʼ���󣬾Ͳ����Է����ı䣬
	��Ϊ��ָ�볣�� int * const ref = &a

	�õ�ʱ�򣬾Ͱ�ref����a�ı��������ˣ�
	��Ҫ��̫��

	�����Ͽ�������ʲô��������˵��ָ�볣����
*/

#include <iostream>
using namespace std;

// ���������ã��������Ὣ��ת��Ϊint* const ref = &a;
void func(int& ref) 
{
	ref = 100; // ref�����ã�ת��Ϊ*ref = 100;
}

int main93() 
{
	int a = 10;

	// �Զ�ת��Ϊint * const ref = &a;
	// ָ�볣����ָ��ָ�򲻿ɸģ�Ҳ˵��Ϊʲô���ò��ɸ���
	int& ref = a;
	ref = 20; // �ڲ�����ref�����ã��Զ�������ת��Ϊ*ref = 20;

	cout << "a:   " << a << endl;
	cout << "ref: " << ref << endl;

	func(a);
	cout << "func���a: " << a << endl;

	system("pause");
	return 0;
}
// ���ۣ�c++�Ƽ��� ���ü�������Ϊ�﷨����
//		���õı�����ָ�볣������������ָ����� ������������������





