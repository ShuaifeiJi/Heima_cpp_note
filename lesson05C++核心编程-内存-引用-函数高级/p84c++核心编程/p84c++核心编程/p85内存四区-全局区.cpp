#include <iostream>
using namespace std;

// ȫ�ֱ���
int g_a = 10;
int g_b = 20;

// const���ε�ȫ�ֱ���
const int c_g_a = 30;
const int c_g_b = 40;

int main85() 
{
	//ȫ����

	//ȫ�ֱ�������̬����������
	// ��û��д�ں������еı�������ȫ�ֱ�����


	//������ͨ�ֲ�����
	int a = 10;
	int b = 10;

	cout << "�ֲ�����a�ĵ�ַΪ��" << (int)&a << endl; 
	cout << "�ֲ�����b�ĵ�ַΪ��" << (int)&b << endl;
	
	cout << "ȫ�ֱ���g_a�ĵ�ַΪ��" << (int)&g_a << endl;
	cout << "ȫ�ֱ���g_b�ĵ�ַΪ��" << (int)&g_b << endl; // ȫ�ֱ����;ֲ��������ڴ��еĲ�ͬ����

	// ��̬����(����ͨ����ǰ���static�ؼ��֣������ھ�̬������)
	static int s_a = 10;
	static int s_b = 20; 
	cout << "��̬����s_a�ĵ�ַΪ��" << (int)&s_a << endl;
	cout << "��̬����s_b�ĵ�ַΪ��" << (int)&s_b << endl;
	// ��̬����Ҳ�����ȫ�������

	// ����
	// �ַ������� "hello world"
	cout << "�ַ��������ĵ�ַΪ��" << (int)&"hello world" << endl;
	
	// const���α���
	// const���ε�ȫ�ֱ�����const���εľֲ�����
	// ��const���ε�ȫ�ֱ�����ȫ������
	// ��const���εľֲ������ھֲ�����

	cout << "const���ε�ȫ�ֳ���c_g_a�ĵ�ַΪ��" << (int)&c_g_a << endl;
	cout << "const���ε�ȫ�ֳ���g_c_b�ĵ�ַΪ��" << (int)&c_g_b << endl;

	const int c_l_a = 10;
	const int c_l_b = 10;

	cout << "const���εľֲ�����c_l_a�ĵ�ַΪ��" << (int)&c_l_a << endl;
	cout << "const���εľֲ�����c_l_b�ĵ�ַΪ��" << (int)&c_l_b << endl;

	system("pause");
	return 0;
}

/*
�ܽ᣺
	�ڳ�������֮ǰ��Ϊȫ�����ʹ�����
	�������ص��ǹ����ֻ��
	ȫ�����д��ȫ�ֱ�������̬����������
	�������д��const���ε�ȫ�ֳ��� �� �ַ�������
*/