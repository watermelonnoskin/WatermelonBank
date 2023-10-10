#include<iostream>
using namespace std;
#include<list>
//list容器构造函数

void printlist01(const list<int>& L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	//创建list容器 默认构造
	list<int>L1;		
	//添加数据
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	//遍历容器
	cout << "默认构造 ";
	printlist01(L1);
	cout << endl;

	//创建list容器 区间方式构造
	list<int>L2(L1.begin(), L1.end());
	//遍历容器
	cout << "区间方式构造 ";
	printlist01(L2);
	cout << endl;

	//创建list容器 拷贝构造
	list<int>L3(L1);
	//遍历容器
	cout << "拷贝构造 ";
	printlist01(L3);
	cout << endl;

	//n个elem
	list<int>L4(10, 1000);
	//遍历容器
	cout << "n个elem构造 ";
	printlist01(L4);
	cout << endl;

}
int main01()
{
	test01();
	system("pause");
	return 0;
}