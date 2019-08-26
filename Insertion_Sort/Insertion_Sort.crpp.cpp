#include <stdio.h>

int main(void){
	
	/*'필요할 때만' 위치를 바꾸게 된다. 각 숫자를 적절한 위치에 삽입하면 어떨까? 
	 버블, 선택정렬보다 좀 더 효율적인 이유 : 앞에 있는 원소들이 이미 정렬이 되어있다고 가정.
	 전체를 살펴볼 필요없이, 특정하게 정렬을 해야하는 원소를 만났을 때 멈추고 swap. 
	 ex) 5 삽입 가정 : _ 1 _ 10 _ 5 8 7 6 4 3 2 9
	 시간복잡도 : (최악) 10 + 9 + 8 + ... + 1 = O(N * N)
	 거의 정렬이 되어있는 경우, 굉장히 효율적인 알고리즘.*/  
	 
	int i, j, temp;
	int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	for (i = 0; i < 9; i++){
		j = i;
		while(array[j] > array[j+1]){
			temp = array[j];
			array[j] = array[j+1];
			array[j + 1] = temp;
			j--;
		}		
	}
	for (i = 0; i < 10; i++){
		printf("%d ", array[i]);
	}
	return 0;	
}
