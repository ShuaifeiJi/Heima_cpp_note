/*
��������
	���ã� ��Ҫ���������βΣ���ֹ�����
	�ں����β��б��У����Լ�const�����βΣ���ֹ�βθı�ʵ��
*/

#include <iostream>
using namespace std;

// ��ӡ���ݺ���
void showValue(int & val) // ���ã��൱���β�val��ʵ�εı���
{
	val = 1000;
	cout << "val = " << val << endl; // ��ӡ����ָ����ڴ�ռ�
}

// ����const�󣬾Ͳ����ں������޸�
// ���磺 ֻ���ӡ�������޸�ʵ�Σ���ֹ�������������д
void showValue02(const int & val)
{
	// val = 2000; // ������ֵ�����޸�
	cout << "val = " << val << endl;
}

int main94() {

	// ��������
	// ʹ�ó����� ���������βΣ���ֹ�����

	// int &ref = 10;������Ϊ���ñ��������ڴ��ϺϷ����ڴ�ռ䣬����ջ����ϵ�����

	const int & ref = 10; // ��ȷ���������������޸�Ϊ��int temp = 10; const int & ref = temp;
	// ��ʱ��ֻ���ñ���ref��������ڴ�ռ�
	// ����const���޶�Ϊֻ��״̬���������޸�
	
	// ref = 20; ������Ϊֻ���������޸�

	int a = 100;
	showValue(a);
	cout << "ʵ��a = " << a << endl;

	showValue02(a);

	system("pause");
	return 0;
}