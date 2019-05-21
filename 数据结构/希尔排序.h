//插排的优化:希尔排序（分组插排）

#include<stdio.h>
void InsertSortWithGap(int array[], int size, int gap){
	for (int i = gap; i < size; i++){
		int key = array[i];
		int j;
		for (j = i - gap; j >= 0; j--){
			if (array[j] > key){
				array[j + gap] = array[j];
			}
			else{
				break;
			}
		}
		array[j] = key;
	}
}
void ShallSort(int array[], int size){ 
	int gap = size;
	while (1){
		gap = gap / 3 + 1;
		//gap 比较大的数 -> 小 -> 1 停止
		InsertSortWithGap(array, size, 1);
			if (gap = 1){
				break;
			}
	}
}




void PrintArray(array, size){
	for (int i = 0; i < size; i++){
		printf("%d ", array + i);
	}
	printf("/n");
}

void TestSort(){
	int array[] = { 3, 4, 5, 2, 1, 9, 8, 6, 7, 0 };
	int size = sizeof array / sizeof(int);
	ShallSort(array, size);
	PrintArray(array, size);
}