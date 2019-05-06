int BinarySort(int array[], int size, int value){
	int left = 0;
	int right = size; //int right = size-1;           
	//[left,right);   //[left,right]
	while (left < right){// left <= right      确保数组内还有数
		int mid = (right / 2) + left;
		if (array[mid] = value){
			return mid;
		}
		else if (value < array[mid]){
			right = mid; //right = mid - 1;
		}
		else{
			left = mid + 1;
		}
		return -1;
	}
}