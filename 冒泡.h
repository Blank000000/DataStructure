void Bubblesort(int array[], int size){
	int isSorted;                               //优化算法
	for (int i = size - 1; i > 0; i--){         //遍历整个数组，除过已经排好的数
		isSorted = 1;

		//一次冒泡过程
		for (int j = 0; j < size; j++){        //将最大/小的数交换到最后/前
			if (array[i] > array[i - 1]){
				swap();                       //交换函数
				isSorted = 0;
			}
			//一次冒泡过程结束

			if (isSorted == 1)
				break;
		}
	}
}