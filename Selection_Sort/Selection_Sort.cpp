#include <stdio.h>

int main(void){
	
	/* 가장 작은 것을 선택해서 제일 앞으로 보내면 어떨까? (앞 부터 정렬)
	시간복잡도 : 10 + 9 + 8 .. + 1 = N * (N + 1) / 2 = O(N * N) 빅오표기법
	index : 가장 작은 원소가 존재하는 위치 */
	
	int i, j, min, index, temp; 
	int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	
	for(i = 0; i <10; i++){
		min = 9999; // 모든 원소들보다 훨씬 더 큰 값을 가정		
		for(j = i; j < 10; j++){
			if (min > array[j]){
				min = array[j];
				index = j;
			}
		}	
		// 가장 앞에있는 값과 최소값을 swap	
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;	
	}
		
	for(i = 0; i < 10; i++){
		printf("%d ", array[i]);
	}
		
	return 0;
}
