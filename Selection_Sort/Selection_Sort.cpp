#include <stdio.h>

int main(void){
	
	/* ���� ���� ���� �����ؼ� ���� ������ ������ ���? (�� ���� ����)
	�ð����⵵ : 10 + 9 + 8 .. + 1 = N * (N + 1) / 2 = O(N * N) ���ǥ���
	index : ���� ���� ���Ұ� �����ϴ� ��ġ */
	
	int i, j, min, index, temp; 
	int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	
	for(i = 0; i <10; i++){
		min = 9999; // ��� ���ҵ麸�� �ξ� �� ū ���� ����		
		for(j = i; j < 10; j++){
			if (min > array[j]){
				min = array[j];
				index = j;
			}
		}	
		// ���� �տ��ִ� ���� �ּҰ��� swap	
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;	
	}
		
	for(i = 0; i < 10; i++){
		printf("%d ", array[i]);
	}
		
	return 0;
}
