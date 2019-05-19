#include<iostream>
#include<map>
#include<string>
#include<windows.h>

using  std::cout;
using  std::endl;
using  std::cin;

void TestMap(){
	//std::map<std::string, std::string> dict;
	//dict.insert(std::pair<std::string, std::string>("insert", "²åÈë"));
	//dict.insert(std::pair<std::string, std::string>("sort", "ÅÅĞò"));
	//dict.insert(std::pair<std::string, std::string>("debug", "×¥³æ×Ó"));
	//dict.insert(std::pair<std::string, std::string>("string", "×Ö·û´®"));
	//dict.insert(std::pair<std::string, std::string>("bug", "çÛ¶ê×Ó"));
	//dict.insert(std::pair<std::string, std::string>("map", "Í¼"));

	////std::map<std::string, std::string>::iterator dit = dict.begin();
	//auto dit = dict.begin();
	//while (dit != dict.end()){
	//	//cout << (*dit).first << ":" << (*dit).second << endl;
	//	cout << dit->first << ":" << dit->second << endl;

	//	++dit;
	//}
	//cout << endl;

	typedef std::map<std::string, std::string> Dict;
	typedef std::map<std::string, std::string>::iterator DictIter;

	Dict dict;
	dict.insert(std::make_pair("insert", "²åÈë"));
	dict.insert(std::make_pair("sort", "ÅÅĞò"));
	dict.insert(std::make_pair("debug", "×¥³æ×Ó"));
	dict.insert(std::make_pair("string", "×Ö·û´®"));
	dict.insert(std::make_pair("bug", "çÛ¶ê×Ó"));
	dict.insert(std::make_pair("map", "Í¼"));
	dict.insert(std::make_pair("left", "×ó±ß"));

	//std::map<std::string, std::string>::iterator dit = dict.begin();
	//auto dit = dict.begin();
	DictIter dit = dict.begin();
	while (dit != dict.end()){
		//cout << (*dit).first << ":" << (*dit).second << endl;
		cout << dit->first << ":" << dit->second << endl;

		++dit;
	}
	cout << endl;
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
	//		cout << str << "²»ÔÚ´Ê¿âÖĞ" << endl;
	//	}
	//}

	/*auto it = dict.find("left");
	if (it != dict.end()){
		it->second = "×ó±ß£¬Ê£ÓàµÈÒâÒå";
	}*/

	dict["left"] = "×ó±ß£¬Ê£ÓàµÈÒâÒå";
	for (const auto& e : dict){
		cout << e.first << ":" << e.second << endl;
	}



}

int main(){
	TestMap();
	system("pause");
	return 0;
}