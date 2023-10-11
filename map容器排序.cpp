#include<iostream>
using namespace std;
#include<map>

//map���� Ĭ�ϰ��� keyֵ ��С���� ����

//дһ���º���
class mycompare
{
public:
	bool operator()(int v1,int v2) const
	{
		//����
		return v1 > v2;
	}
};
void printmap05(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key=" << (*it).first << " value=" << (*it).second << endl;	//Ҳ����д�� (*it)->first
	}
	cout << endl;
}
void test05()
{
	//����
	map<int, int>m1;
	m1.insert(make_pair(1, 10));
	m1.insert(make_pair(4, 40));
	m1.insert(make_pair(2, 20));
	m1.insert(make_pair(5, 50));
	m1.insert(make_pair(3, 30));
	printmap05(m1);

	cout << endl;

	//����
	map<int, int, mycompare>m2;
	m2.insert(make_pair(1, 10));
	m2.insert(make_pair(4, 40));
	m2.insert(make_pair(2, 20));
	m2.insert(make_pair(5, 50));
	m2.insert(make_pair(3, 30));
	for (map<int, int, mycompare>::iterator it = m2.begin(); it != m2.end(); it++)
	{
		cout << "key=" << (*it).first << " value=" << (*it).second << endl;
	}
	cout << endl;
}
int main()
{
	test05();
	system("pause");
	return 0;
}