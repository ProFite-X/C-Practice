#include<stdio.h>
#include <stdlib.h>
#include <assert.h>
int CompInt(const void* vx, const void* vy)
{
	int *x = (int*)vx;
	int *y = (int*)vy;

	//vx,vy代表任意两个元素的地址，*x, *y，任何两个元素
	if (*x > *y){
		return 1;
	}
	else if (*x < *y){
		return -1;
	}
	else{
		return 0;
	}
}
int CompDouble(const void *vx, const void *vy)
{
	double *x = (double *)vx;
	double *y = (double *)vy;

	if (*x > *y){
		return 1;
	}
	else if (*x < *y){
		return -1;
	}
	else{
		return 0;
	}
}
void show(int *arr, int num)
{
	for (int i = 0; i < num; ++i){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void swap(char *x, char *y, int size)
{
	for (int i = 0; i < size; i++){
		*(x+i) ^= *(y+i);
		*(y+i) ^= *(x+i);
		*(x+i) ^= *(y+i);
	}
}
void swap(char *x, char *y, int size)
{
	for (int i = 0; i < size; i++){
		*(x+i) ^= *(y+i);
		*(y+i) ^= *(x+i);
		*(x+i) ^= *(y+i);
	}
}

void mysort(void *base ,int num,int size,int(*Comp)(const void*,const void *))
{
	assert(base);
	assert(Comp);
	char *_base=(char*)base;
	for(int i=0;i<num-1;i++)
	{
		int flag=0;
		for(int j=0;j<num-1-i;j++)
		{
				if (comp(_base + size*j, _base + size*(j+1)) > 0){
				flag = 1;
				swap(_base + size*j, _base + size*(j + 1), size);
			}
		}
		if (flag == 0){
			break;
	}
} 
int main()
{
	double arr[] = { 4.3, 6.7, 9.8, 1.1, 2.1, 0.1, 5.6 };
	int num = sizeof(arr) / sizeof(arr[0]);
	MySort(arr, num, sizeof(double), CompDouble);
	show(arr, num);
	return 0; 
}
