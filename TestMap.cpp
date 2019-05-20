#include<iostream>
#include<map>
#include<string>
#include<windows.h>

using  std::cout;
using  std::endl;
using  std::cin;

void TestMap(){
	//字典
	//std::map<std::string, std::string> dict;
	//dict.insert(std::pair<std::string, std::string>("insert", "插入"));
	//dict.insert(std::pair<std::string, std::string>("sort", "排序"));
	//dict.insert(std::pair<std::string, std::string>("debug", "抓虫子"));
	//dict.insert(std::pair<std::string, std::string>("string", "字符串"));
	//dict.insert(std::pair<std::string, std::string>("bug", "幺蛾子"));
	//dict.insert(std::pair<std::string, std::string>("map", "图"));

	////std::map<std::string, std::string>::iterator dit = dict.begin();
	//auto dit = dict.begin();
	//while (dit != dict.end()){
	//	//cout << (*dit).first << ":" << (*dit).second << endl;
	//	cout << dit->first << ":" << dit->second << endl;

	//	++dit;
	//}
	//cout << endl;

	//typedef std::map<std::string, std::string> Dict;
	//typedef std::map<std::string, std::string>::iterator DictIter;

	//Dict dict;
	//dict.insert(std::make_pair("insert", "插入"));
	//dict.insert(std::make_pair("sort", "排序"));
	//dict.insert(std::make_pair("debug", "抓虫子"));
	//dict.insert(std::make_pair("string", "字符串"));
	//dict.insert(std::make_pair("bug", "幺蛾子"));
	//dict.insert(std::make_pair("map", "图"));
	//dict.insert(std::make_pair("left", "左边"));

	////std::map<std::string, std::string>::iterator dit = dict.begin();
	////auto dit = dict.begin();
	//DictIter dit = dict.begin();
	//while (dit != dict.end()){
	//	//cout << (*dit).first << ":" << (*dit).second << endl;
	//	cout << dit->first << ":" << dit->second << endl;

	//	++dit;
	//}
	//cout << endl;
	//for (const auto& e : dict){
	//	cout << e.first << ":" << e.second << endl;
	//}

	//std::string str;
	//while (std::cin >> str){
	//	auto it = dict.find(str);
	//	//DictIter it = dict.find(str);
	//	if (it != dict.end()){
	//		cout << str << "->" << it->second << endl;
	//	}
	//	else{
	//		cout << str << "不在词库中" << endl;
	//	}
	//}

	/*auto it = dict.find("left");
	if (it != dict.end()){
	it->second = "左边，剩余等意义";
	}*/

	//dict["left"] = "左边，剩余等意义";
	//for (const auto& e : dict){
	//	cout << e.first << ":" << e.second << endl;
	//}


	//统计单词出现的次数
	std::string StrArray[] = { "sort", "first", "first", "end", "insert" };
	typedef std::map<std::string, int> CountMap;
	typedef std::map<std::string, int> ::iterator CountMapIter;
	CountMap count_map;

	//方法1：find + insert 统计次数
	//数组，原生指针支持迭代器，也就支持基于范围for
	//operator* 返回数据的引用
	//operator-> 返回数据的指针

	//for (const auto& e : StrArray){
	//	CountMapIter it = count_map.find(e);
	//	if (it != count_map.end()){
	//		//(*it).second++;
	//		it->second++;
	//	}
	//	else{
	//		count_map.insert(make_pair(e, 1));
	//	}
	//}


	//方法2：insert 统计次数
	//for (const auto& e : StrArray){
	//	//insert返回值为pair(iterator，boll)
	//	//auto基于参数类型，自动推演返回值类型
	//	//std::pair<std::map<std::string, int>::iterator, bool> ret = count_map.insert(make_pair(e, 1));
	//	//auto ret = count_map.insert(make_pair(e, 1));
	//	std::pair<CountMapIter, bool> ret = count_map.insert(make_pair(e, 1));
	//	if (ret.second == false){
	//		ret.first->second++;
	//	}
	//}

	////方法3：operator[] 统计次数
	////operator[]用法：读写，插入
	////operator[]参数：
	////operator[]返回值：这个场景是返回的次数，返回value的引用（类型不确定）
	//for (const auto& e : StrArray){
	//	//单词第一次出现：[]先调insert，进行插入，
	//	//v给的缺省值（值为0），返回v的别名，++后为1，
	//	count_map[e]++;
	//}


	typedef std::map<std::string, std::string> Dict;
	typedef std::map<std::string, std::string>::iterator DictIter;

	Dict dict;
	dict["sort"] = "排序";
	dict["left"] = "左边";
	dict["bug"] = "虫子";
	dict["left"] = "剩余";
	//注意这里会插入
	cout << dict["set"] << endl;
}


//int main(){
//	TestMap();
//	system("pause");
//	return 0;
//}
