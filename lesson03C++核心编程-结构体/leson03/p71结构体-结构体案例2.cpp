/*
����������
���һ��Ӣ�۵Ľṹ�壬������Ա���������䡢�Ա�
�����ṹ�����飬�����д��5��Ӣ��

ͨ��ð��������㷨���������е�Ӣ�۰������������������

���մ�ӡ�����Ľ��
*/

/*
����Ӣ�۵���Ϣ���£�
{"liubei", 23, "male"},
{"guanyu", 22, "male"},
{"zhangfei", 20, "male"},
{"zhaoyun", 21, "male"},
{"diaochan", 16, "female"}
*/

#include <iostream>
using namespace std;
#include <string>

// 1�����Ӣ�۽ṹ��
// Ӣ�۵Ľṹ��
struct Hero {
	// ����
	string name;
	// ����
	int age;
	// �Ա�
	string sex;
};

// ð������ ʵ���������������
void bubbleSort(struct Hero heroArray[], int len) 
{
	// ��Ȧ ��i��ð�ݣ�һ��ð��len-1��
	for (int i = 0; i < len - 1; i++) 
	{
		// ��Ȧ�����ұȽϴ�����һ��len-i-1��
		for (int j = 0; j < len - i - 1; j++)
		{
			// ���j�±�Ԫ�ص����䣬����j+1�±�Ԫ�ص����䣬�򽻻�
			if (heroArray[j].age > heroArray[j+1].age) 
			{
				struct Hero temp = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = temp;
			};
		}
	}
	
}

// ��ӡ
void printHero(struct Hero heroArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << heroArray[i].name << endl;
		cout << "\t" << heroArray[i].age << endl;
		cout << "\t" << heroArray[i].sex << endl;
	}
}


int main71() {

	// 2������������5��Ӣ��
	struct Hero heroArray[5] = 
	{
		{ "liubei", 23, "male" },
		{ "guanyu", 22, "male" },
		{ "zhangfei", 20, "male" },
		{ "zhaoyun", 21, "male" },
		{ "diaochan", 16, "female" }
	};
	// ���׶��Բ��ԡ� ��֤�ɷ�������ӡ
	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	//for (int i = 0; i < len; i++)
	//{
	//	cout << heroArray[i].name << endl;
	//	cout << heroArray[i].age << endl;
	//	cout << heroArray[i].sex << endl;
	//};
	 
	// 3��������������򣬰������������������
	bubbleSort(heroArray, len);

// 4���������Ľ����ӡ���
	printHero(heroArray, len);

	system("pause");
	return 0;
}

// �ܽ᣺�����������׵�ַ�������������������ǵ�ַ����
// ����[]�������*����������ܸı�ʵ�ε�ֵ