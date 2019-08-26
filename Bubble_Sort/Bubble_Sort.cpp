#include <stdio.h>

int main(void){
	
	/* 옆에 있는 값과 비교해서 더 작은 값을 앞으로 보내면 어떨까? (가장 큰 값이 맨 뒤 부터 정렬) 
	효율성이 가장 떨어지는 알고리즘. 일반적으로 정렬알고리즘 중 가장 느린 정렬 방법. 
	시간복잡도 : 10 + 9 + 8 .. + 1 = N * (N + 1) / 2 = O(N * N)
	버블정렬이 선택정렬보다 더 느린이유 - 매번 비교하고, 자리를 교체한다. */
	
	int i, j, temp;
	int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	
	for(i = 0; i < 10; i++){
		for (j = 0; j < 9-i; j++){ 
			// 왼쪽값과 오른쪽값 비교. 왼쪽값이 더 크다면 오른쪽과 swap 
			if(array[j] > array[j+1]){
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
	for(i = 0; i < 10; i++){
		printf("%d ", array[i]);
	}
	return 0;
}
