#include<iostream>
using namespace std;
#include<map>
void printmap03(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key=" << (*it).first << " value=" << (*it).second << endl;	//也可以写成 (*it)->first
	}
	cout << endl;
}
void test03()
{
	map<int, int>m;

	//插入
	//第一种
	m.insert(pair<int, int>(1, 10));
	//第二种
	m.insert(make_pair(2, 20));
	//第三种
	m.insert(map<int, int>::value_type(3, 30));
	//第四种
	m[4] = 40;								//不推荐
	//[]不建议插入，可以利用key去访问value
	//cout << m[5] << endl;					//不推荐的原因
	printmap03(m);

	//删除
	m.erase(m.begin());
	printmap03(m);
	m.erase(3);			//把key为3的数据删除
	printmap03(m);

	//清空
	cout << "清空" << endl;
	//m.erase(m.begin(), m.end());
	m.clear();
	printmap03(m);
	cout << "清空完了" << endl;
}
int main03()
{
	test03();
	system("pause");
	return 0;
}