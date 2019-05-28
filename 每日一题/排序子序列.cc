#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; ++i){
		cin >> v[i];
	}
	int ret = 1;
	for (int i = 1; i < n - 1; i++){
		//找出波峰波谷
		if ((v[i - 1] < v[i] && v[i] > v[i + 1]) || (v[i - 1] > v[i] && v[i] < v[i + 1])){
			ret++;
			//需要注意，一个排序子序列至少需要两个数构成
			if (i != n - 3)
				i++;
		}
	}
	cout << ret << endl;

	getchar(); getchar();
	return 0;
}
