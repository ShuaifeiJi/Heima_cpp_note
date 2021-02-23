// 菜单功能
/*
步骤：
1、封装函数显示该界面，如void showMenu()
2、在main函数中调用封装好的函数
*/

#include <iostream>
using namespace std;
#include <string>

#define MAX 1000 //最大人数， 写在前边，方便维护


// 第1步、菜单界面
void showMenu()
{
	cout << "*********祖安通讯录********" << endl;
	cout << "****	1、添加联系人	****" << endl;
	cout << "****	2、显示联系人	****" << endl;
	cout << "****	3、删除联系人	****" << endl;
	cout << "****	4、查找联系人	****" << endl;
	cout << "****	5、修改联系人	****" << endl;
	cout << "****	6、清空联系人	****" << endl;
	cout << "****	0、退出通讯录	****" << endl;
	cout << "***************************" << endl;
}

// 第2步、退出功能（使用switch语句，搭建架构）（面向过程）
// 第3步，添加联系人功能（上限是1000人）
//	（联系人信息包括： 姓名、性别、年龄、联系电话、家庭住址）
/*
步骤：
	设计联系人结构体（包括姓名、性别、年龄、联系电话、家庭住址等）
	设计通讯录结构体（包括最多1000个联系人信息）
	main函数中创建通讯录
	封装添加联系人函数
	测试添加联系人功能
*/
// 第4步，显示联系人
/*
功能描述：显示通讯录中现有联系人信息
步骤：
	封装显示联系人函数
	测试显示联系人功能
*/
// 第5步，删除联系人 （按照姓名删除）
/*
步骤：
	封装检测联系人是否存在
	封装删除联系人函数
	测试删除联系人功能
*/

// 第6步，查找联系人
/*
功能描述：按照姓名查看指定联系人信息
步骤：
	封装查找联系人函数
	测试查找指定联系人
*/

// 第7步，按照姓名重新修改指定联系人
/*
步骤：
	封装修改联系人函数
	测试修改联系人功能
*/

// 第8步，清空通讯录中所有信息（清空联系人）
/*
步骤：
	封装清空联系人函数
	测试清空联系人
*/

// 联系人结构体
struct Person
{
	string m_Name;	// 姓名
	int m_Sex;   // 性别
	int m_Age;      // 年龄
	string m_Phone; // 电话
	string m_Addr;  // 地址
};


// 通讯录结构体
struct Addressbooks
{
	struct Person personArray[MAX]; //通讯录中保存的联系人数据
	int m_Size; // 通讯录中当前记录的人员个数
};

// 添加联系人
void addPerson(Addressbooks * adbs) 
{
	// 判断通讯录是否已满，如果满了就不再添加
	if (adbs->m_Size == MAX) 
	{
		cout << "通讯录已满，无法添加" << endl;
		return;
	}
	else
	{
		// 添加联系人

		// 姓名
		string name;
		cout << "请输入姓名:" << endl;
		cin >> name;
		adbs->personArray[adbs->m_Size].m_Name = name;
		cout << "姓名是:" << adbs->personArray[adbs->m_Size].m_Name << endl;

		// 性别
		int sex = 0;
		cout << "请输入性别：" << endl;
		cout << "1 --- 男" << endl;
		cout << "2--- 女" << endl;

		while (true)
		{
			// 如果输入的是1或者2，则可以退出循环
			// 如果输入有误，就重新输入
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				adbs->personArray[adbs->m_Size].m_Sex = sex;
				break;
			}
			cout << "您的输入有误，请重新输入:" << endl;
		}
		cout << "性别是：" << adbs->personArray[adbs->m_Size].m_Sex << endl;
		
		// 年龄
		cout << "请输入年龄： " << endl;
		int age = 0;
		cin >> age;
		adbs->personArray[adbs->m_Size].m_Age = age;
		cout << "您输入的年龄是：" << adbs->personArray[adbs->m_Size].m_Age <<endl;

		// 电话
		cout << "请输入联系电话： " << endl;
		string phone;
		cin >> phone;
		adbs->personArray[adbs->m_Size].m_Phone = phone;
		cout << "您输入的手机号是：" << adbs->personArray[adbs->m_Size].m_Phone << endl;

		// 住址
		cout << "请输入家庭住址" << endl;
		string address;
		cin >> address;
		adbs->personArray[adbs->m_Size].m_Addr = address;
		cout << "您输入的地址是：" << adbs->personArray[adbs->m_Size].m_Addr << endl;

		// 更新通讯录人数
		adbs->m_Size++;

		cout << "添加成功" << endl;

		system("pause"); // 请按任意键继续
		system("cls"); // 清屏操作
	}
}

// 显示联系人函数：如果当前通讯录中没有人员，就提示记录为空
//				人数大于0，就显示通讯录中信息
void showPerson(struct Addressbooks * adbs)
{
	// 判断通讯录中人数是否为0，如果为0，提示记录为空
	// 如果不为0，显示记录的联系人信息
	if (adbs->m_Size == 0) 
	{
		cout << "当前的记录为空" << endl;
	}
	else
	{
		for (int i = 0; i < adbs->m_Size; i++)
		{
			cout << "姓名：	" << adbs->personArray[i].m_Name << "\t";
			cout << "性别：	" << (adbs->personArray[i].m_Sex == 1 ?"男" : "女")<< "\t";  // 三目运算符，括号增加优先级
			cout << "年龄：	" << adbs->personArray[i].m_Age << "\t";
			cout << "电话： " << adbs->personArray[i].m_Phone << "\t";
			cout << "地址：	" << adbs->personArray[i].m_Addr << endl;
			//cout << "\n";
		}
	}
	system("pause"); // 按任意键继续
	system("cls"); // 清屏
}

// 封装检测联系人是否存在
/* 设计思路：
	判断联系人是否存在，若存在就删除；若不存在就提示用户没有要删除的联系人
	检测联系人封装到函数中：
						如果存在，就返回联系人在通讯录中的位置（索引编号）
						如果不存在，就返回-1
*/
int isExist(Addressbooks * adbs, string name) 
{
	for (int i = 0; i < adbs->m_Size; i++)
	{
		if (adbs->personArray[i].m_Name == name)
		{
			//cout << "联系人存在，位置："<< i << endl;
			return i; // 返回下标编号
		}
	}
	return -1; //遍历没找到，就返回-1
}

// 删除指定联系人
void deletePerson(Addressbooks * adbs) 
{
	cout << "请输入您要删除的联系人" << endl;
	
	string name;
	cin >> name;

	// ret == -1 未查到
	// ret != -1 查到了
	int ret = isExist(adbs, name);

	if (ret != -1) 
	{
		// 查找此人，要进行删除操作
		// 要删除李四，将李四后的数据向前移动
		// 并且让通讯录中记录的人员个数做-1的操作
		for (int i = ret; i < adbs->m_Size; i++) 
		{
			// 数据前移
			adbs->personArray[i] = adbs->personArray[i + 1];

		}
		adbs->m_Size--; // 更新通讯录中人员个数
		cout << "删除成功" << endl;
	}
	else 
	{
		cout << "查无此人" << endl;
	}

}
// 查找联系人
// 实现思路：判断用户指定的联系人是否存在，如果存在显示信息
//				不存在则显示查无此人
void findPerson(Addressbooks * adbs) 
{
	cout << "请输入要查找的联系人" << endl;
	string name;
	cin >> name;
	
	int ret = isExist(adbs, name);
	if (ret != -1) 
	{
		cout << "姓名： " << adbs->personArray[ret].m_Name << "\t";
		cout << "性别： " << adbs->personArray[ret].m_Sex << "\t";
		cout << "年龄： " << adbs->personArray[ret].m_Age << "\t";
		cout << "电话： " << adbs->personArray[ret].m_Phone << "\t";
		cout << "地址： " << adbs->personArray[ret].m_Addr << endl;
	}
	else 
	{
		cout << "查无此人" << endl; 
	}
}

// 修改联系人实现思路
// 实现思路：
//			查找用户输入的联系人，如果查找成功进行修改操作
//			查找失败则提示查无此人
void modifyPerson(Addressbooks * adbs) 
{
	cout << "请输入要修改的联系人：" << endl;
	string name;
	cin >> name;

	int ret = isExist(adbs, name);
	if (ret != -1) 
	{
		//姓名
		string name;
		cout << "请输入姓名" << endl;
		cin >> name;
		adbs->personArray[ret].m_Name = name;
		// 性别
		int sex = 0;
		cout << "请输入性别" << endl;
		cout << "1——男" << endl;
		cout << "2——女" << endl;
		while (true) 
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				adbs->personArray[ret].m_Sex = sex;
				break;
			}
			else
			{
				cout << "输入有误，请重新输入" << endl;
			}
		}
		// 年龄
		cout << "请输入年龄：" << endl;
		int age = 0;
		cin >> age;
		adbs->personArray[ret].m_Age = age;
		// 电话
		cout << "请输入电话：" << endl;
		string phone;
		cin >> phone;
		adbs->personArray[ret].m_Phone = phone;
		// 住址
		cout << "请输入地址：" << endl;
		string address;
		cin >> address;
		adbs->personArray[ret].m_Addr = address;

		cout << "修改成功" << endl;
	}
	else 
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}

/*
清空联系人实现思路：
		只需要将通讯录记录的联系人数量置为0，做逻辑清空即可
		(一般都是实现逻辑清空即可)
*/
void cleanPerson(Addressbooks * adbs) 
{
	adbs->m_Size = 0;
	cout << "通讯录已清空" << endl;
	system("pause");
	system("cls");
}


int main() 
{
	int select = 0; // 创建用户选择输入的变量
	// 菜单输入
	
	struct Addressbooks adbs; // 创建结构体变量
	adbs.m_Size = 0; // 初始化通讯录中当前人员个数


	while (true) 
	{
		showMenu();

		cin >> select;

		switch (select)
		{
		case 1: // 添加联系人
			addPerson(&adbs); // 传入地址，可以改变实参
			break;
		case 2: // 显示联系人
			showPerson(&adbs);
			break;
		case 3: // 删除联系人
		//{ // case很长的时候，需要括号
			//cout << "请输入删除联系人的姓名：" << endl;
		//	string name;
		//	cin >> name;

		//	if (isExist(&adbs, name) == -1)
		//	{
		//		cout << "查无此人" << endl;
		//	}
		//	else
		//	{
		//		cout << "找到此人" << endl;
		//	}
		//}
			deletePerson(&adbs);
			system("pause"); // 按任意键继续
			system("cls"); // 清屏
			break;
		case 4: // 查找联系人
			findPerson(&adbs);
			system("pause"); // 按任意键继续
			system("cls"); // 清屏
			break;
		case 5: // 修改联系人
			modifyPerson(&adbs);
			break;
		case 6: // 清空联系人
			cleanPerson(&adbs);
			break;
		case 0: // 退出功能
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
	}

	

	}

	system("pause");
	return 0;
}