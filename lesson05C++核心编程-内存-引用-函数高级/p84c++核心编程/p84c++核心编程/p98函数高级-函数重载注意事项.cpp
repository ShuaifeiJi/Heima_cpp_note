#include <iostream>
using namespace std;

// �������ص�ע������
// 1��������Ϊ���ص�����
void func06(int &a) // int &a = 10�ǲ��Ϸ��ģ���const int &a = 10�ǺϷ��ģ��൱�ڱ�����������һ����ʱ��temp=10��
{
	cout << "func06(int &a)����" << endl;
}

void func06(const int &a)  // const int &a ��int &a�������Ͳ�ͬ
{
	cout << "func(const int &a)����" << endl;
}

// 2��������������Ĭ�ϲ���
void func07(int a, int b = 10) 
{
	cout << "func07�ĵ���!!!" << endl;
}

void func07(int a)
{
	cout << "func07�ĵ���***" << endl;
}

int main() 
{
	int a = 10;
	func06(a); // ��Ϊa�Ǳ������ɶ���д�����Ե����˵�һ��func06

	func06(10); // ��Ϊ�ڶ����Ϸ������Ե��õ��ǵڶ���func06
	
	//func07(10); ��Ϊ�ж����ԣ����������غ����ĵ��ò���ȷ

	func07(22, 88);

	system("pause");
	return 0;
}
