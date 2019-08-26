#include <stdio.h> 

	/* 퀵 정렬 알고리즘 = '분할 정복' 알고리즘 - 평균 속도 O(N * logN), 최악의 경우. 즉 이미 정렬이 되어 있는 경우. O(N * N) 
	ex) 1 2 3 4 5 6 7 8 9 10
	--> 선택정렬 : N ^ 2 = 10 * 10 = 100
	--> 퀵 정렬 : 1 2 3 4 5 | 6 7 8 9 10 = (5 * 5) + (5 * 5) = 50
	특정한 값을 기준으로 큰 숫자와 작은 숫자를 나누면 어떨까?
	기준 값인 피벗 (Pivot)을 기준으로 왼쪽과 오른쪽을 나눈다.
	작은 값의 인덱스가 큰 값의 인덱스보다 작으면 (엇갈리면)  더 작은 값과 피벗 값을 바꾼다.
	이후, 기존 피벗이였던 값이 기준점이 되고 정렬이 완료된다.
	
	항상 퀵 정렬이 빠르다. 항상 삽입 정렬이 빠르다. --> 의미없다.
	정렬할 데이터의 특성에 따라서 적절한 알고리즘을 사용하는 것이 중요. 
	일반적으로 퀵 정렬이 가장 빠르지만, 거의 정렬이 되어있는 경우에는 삽입정렬이 더 빠를수도 있다는 의미.*/

int number = 10;
int data[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};

void quickSort(int *data, int start, int end){ // start, end : 정렬을 수행하는 부분집합의 첫과 마지막 
	if (start >= end){ // 원소가 1개인 경우 
		return;
	}
	int key = start; // 피벗값을 첫번째 원소로 설정
	int i = start + 1; // 왼쪽 출발지점 (피벗 다음 위치) 
	int j = end; // 오른쪽 출발지점
	int temp;
	
	while (i <= j){ // 엇갈릴 때까지 반복. 즉 엇갈리지 않을 때까지 반복. 
		while(data[i] <= data[key]){ // 키 값보다 큰 값을 만날 때까지 오른쪽으로 이동. 
			i++;
		}
		while(data[j] >= data[key] && j > start){ // 키 값보다 작은 값을 만날 때까지. | j > start : 엇갈린 순간, 왼쪽에 있는 값과 키값과 교체하기 때문에, 위에서는 조건이 없는 것. 
			j--;
		}
		if(i > j){ // 현재 엇갈리 상태면 키 값과 교체 
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		}else{ // 엇갈리지 않았다면, 큰 값과 작은값을 교체 
			temp = data[j];
			data[j] =  data[i];
			data[i] = temp;
		}
	}
	
	// 재귀적 함수를 이용하는 방식으로 퀵 정렬 구현 
	quickSort(data, start, j-1);
	quickSort(data, j+1, end);
	
}

int main(void){
	quickSort(data, 0, number-1);
	for(int i = 0; i < number; i++){
		printf("%d ", data[i]);
	}
}
