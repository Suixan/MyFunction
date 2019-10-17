/*
#include <iostream>
#include <map>

using namespace std;

void print(map<int, int> mymap)
{
	map<int, int>::iterator iter = mymap.begin();
	while(iter != mymap.end())
	{
		cout << "打印map的数据： " << iter->first << " " << iter->second << endl;
		iter++;
	}

}

int main()
{
	map<int, int> mymap;
	cout << "初始化前map的大小： " << mymap.size() << endl;

	mymap[0] = 10;
	mymap[2] = 12;

	mymap.insert(map<int, int>::value_type(1, 11));
	cout << "初始化后map的大小： " << mymap.size() << endl;

	map<int, int>::iterator iter = mymap.begin();
	while(iter != mymap.end())
	{
		cout << "打印map的数据： " << iter->first << " " << iter->second << endl;
		iter++;
	}
	
	mymap.clear();
	cout << "调用clear()后map的大小： " << mymap.size() << endl;
	

	map<int, int>::iterator it1 = mymap.find(1);
	if(it1 != mymap.end())
	{
		cout << "返回元素" << it1->second << endl;
	}

	map<int, int>::iterator it2 = mymap.begin();
	while(it2 != mymap.end())
	{
		if(12 == it2->second)
		{
			mymap.erase(it2++);
		}
		else
		{
			it2++;
		}
		
	}
	
	print(mymap);
	return 0;
}
*/