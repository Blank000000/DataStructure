#include<iostream>
#include<algorithm>
#include<string>
using namespace std;


int main(){
	string str1, str2;
	//不能用cin接收带空格的字符串，cin遇到空格就结束了
	//所以最好使用gitline()接收字符
	/*cin >> str1;
	cin >> str2;*/
	getline(cin, str1);
	getline(cin, str2);
	
	//使用哈希映射思想先统计str2 中字符出现的个数
	int hashtable[256] = { 0 };
	for (size_t i = 0; i < str2.size(); ++i){
		hashtable[str2[i]]++;
	}

	//遍历str1，str1[i] 映射 hsahtable 中对应位置为0
	//则表示这个字符在str2中没有出现过，则将他 += 到 ret 中
	//最好不要用 str1.erases(i),边遍历便erase容易出错
	string ret;
	for (size_t i = 0; i < str1.size(); ++i){
		if (hashtable[str1[i]] == 0)
			ret += str1[i];
	}
	cout << ret << endl;


	getchar(); getchar();
	return 0;
}