/*
�������ݵĿ��٣�
	new
�������ݵ��ͷţ�
	delete
*/

#include <iostream>
using namespace std;

// 1��new�Ļ����﷨
int * func3() 
{
	// �ڶ���������������
	// new���ص��Ǹ��������͵�ָ��
	int *p = new int(10);
	return p;
}

void test01() 
{
	int *p = func3();
	cout << "new���ٵĶ������ݵĵ�ַ�ǣ�" << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	// �����������ɳ���Ա�����٣�����Ա�����ͷ�
	// ������ͷŶ��������ݣ����ùؼ���delete
	system("pause");

	delete p;
	//cout << "�ͷź�" << *p << endl; // ������Ϊ�ڴ��Ѿ����ͷţ��ٴη��ʾ��ǷǷ�����
}

// 2���ڶ�������new��������
void test02()
{
	// �ڶ��� ����һ��10������Ԫ�� ���ɵ�����
	int * arr = new int[10]; // 10������10��Ԫ��
	//��ֵ
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100; // ��10��Ԫ�ظ�ֵ��  100��109
	}

	// ��ӡ
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	// �ͷŶ�������
	// �ͷ������ʱ��Ҫ��[]�ſ���
	delete[] arr;

}


int main88() 
{
	test01();
	test02();
	system("pause");
	return 0;
}