//ÿ�α����������䣬�ҵ���������±�
//��������������һ����  size--
void SerchSort(int array[], int size){
	for (int i = 1; i < size; i++){
		int max;
	    array[max] = array[0];
		if (array[i] < array[max]){
			int tmp = array[max];
			array[max] = array[size - 1];
			array[size - 1] = tmp;
		}
		else{
			array[max] = array[i];
			i++;
		}
	}
}