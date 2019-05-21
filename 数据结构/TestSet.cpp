#include<iostream>
#include<set>
#include<string>
#include<windows.h>


using  std::cout;
using  std::endl;
using  std::cin;


void testset(){
	//1，key的模型场景，判断在不在？效率高，时间复杂度o(logn)
	//排序 + 去重
	std::set<int> s1;
	s1.insert(10);
	s1.insert(8);
	s1.insert(12);
	s1.insert(7);
	s1.insert(7);
	s1.insert(8);
	s1.insert(7);
	s1.insert(7);
	s1.insert(10);
	s1.insert(10);


	/*std::set<int>::iterator it2 = s1.end();
	while (it2 != s1.begin()){
	cout << *it2 << " ";
	--it2;
	}
	cout << endl;*/

	//auto it1 = s1.begin();
	std::set<int>::iterator it1 = s1.begin();
	while (it1 != s1.end()){
		cout << *it1 << " ";
		++it1;
	}
	cout << endl;



	int x;
	cin >> x;
	auto retit = s1.find(x);
	if (retit != s1.end()){
		cout << x << "在set集合中" << endl;
		s1.erase(x);
	}
	else{
		cout << x << "不在set集合中" << endl;
	}

	for (auto e : s1){
		cout << e << " ";
	}
	cout << endl;

	//字符串排序
	//按照首字母ascii顺序排序
	std::set<std::string> strs;
	strs.insert("sort");
	strs.insert("long");
	strs.insert("insert");
	for (auto e : strs){
		cout << e << endl;
	}

	std::set<std::string> names;
	names.insert("张伟");
	names.insert("王芳");
	names.insert("王丽芳");
	for (auto e :names){
		cout << e << endl;
	}
}


void testmultiset(){
	//排序
	//允许重复
	std::multiset<int> ms;
	ms.insert(10);
	ms.insert(8);
	ms.insert(12);
	ms.insert(7);
	ms.insert(7);
	ms.insert(8);
	ms.insert(7);
	ms.insert(7);
	ms.insert(10);
	ms.insert(10);

	for (auto e : ms){
		cout << e << " ";
	}
	cout << endl;

}

//int main(){
//	testset();
//	testmultiset();
//	system("pause");
//	return 0;
//}