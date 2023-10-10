#include<iostream>
using namespace std;
#include<list>
void printlist03(const list<int> l)
{
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test03()
{
	list<int> l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);
	printlist03(l1);

	//判断容器是否为空
	if (l1.empty())		cout << "l1容器为空" << endl;
	else
	{
		cout << "l1容器不为空" << endl;
		cout << "l1的元素个数为:" << l1.size() << endl;
	}
	//重新指定l1的大小
	l1.resize(10,10000);
	printlist03(l1);			//多了六个10000	
	l1.resize(2);
	printlist03(l1);
}
int main03()
{
	test03();
	system("pause");
	return 0;
}
