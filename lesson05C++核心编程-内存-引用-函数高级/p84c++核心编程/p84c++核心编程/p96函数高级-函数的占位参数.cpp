/*
c++���β��б������ռλ������������ռλ�����ú���ʱ��������λ��

�﷨��
	����ֵ���� ������ (��������) {}

���ֽ׶κ�����ռλ�������ڵ����岻�󣬵��Ǻ���Ŀγ��л��õ��ü���
*/

#include <iostream>
using namespace std;

void func05(int a, int)
{
	cout << "this is function a "<< a << endl;
}

// ռλ����������Ĭ�ϲ���
void func06(int a, int = 10)
{
	cout << "ռλ����������Ĭ�ϲ���" << endl;
}

int main96() 
{

	func05(3, 8888); // ��������8888�ں����У�������ʱ�ò���
	func06(6); // ռλ����������Ĭ�ϲ���

	system("pause");
	return 0;
}



