#include<iostream>
using namespace std;
#include<map>
void printmap04(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key=" << (*it).first << " value=" << (*it).second << endl;	//也可以写成 (*it)->first
	}
	cout << endl;
}
void test04()
{
	map<int, int>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(3, 40));

	//查找
	map<int, int>::iterator pos = m.find(2);
	if (pos != m.end())
	{
		cout << "查到了元素key=" << (*pos).first << " value=" << (*pos).second << endl;
	}
	else
	{
		cout << "没有查找到元素" << endl;
	}

	//统计
	//map不允许插入重复key的元素，count统计结果非1即0，
	//multimap的count统计可能大于1
	int num = m.count(3);
	cout << "num=" << num << endl; 
}
int main04()
{
	test04();
	system("pause");
	return 0;
}