#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	int n;
	while (cin >> n){
		vector<int> a;
		a.resize(3 * n);
		for (int i = 0; i < 3 * n; i++){
			cin >> a[i];
		}

		//将输入的数据进行排序(从小到大)
		std::sort(a.begin(), a.end());

		//(然后进行分组：最大的两个数+最小的一个数，三三分组)-->其实可以不用分
		//每组的平均值即排序好之后循环取数组的arr[3*n-2*m],循环次数m=n
		//1 1 2 8 9 3 2 8 4 --> 1 1 2 [2] 3 [4] 8 [8] 9 --> 8+4+2
		int sum = 0;
		for (int m = 1; m <= n; m++){
			sum += a[(3 * n) - (2 * m)];
		}
		cout << sum;
	}

	getchar(); getchar();
	return 0;
}