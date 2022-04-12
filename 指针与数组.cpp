//除了1：&arr 此时数组名表示整个数组 &数组名 取出的是整个数组的地址  2：sizeof（数组名）计算的是整个数组的大小
//数组名是首元素的地址
#include<stdio.h>
int main(){
	int arr[10]={0};
	printf("%p\n",arr);
	printf("%p\n",arr+1);
	
	printf("%p\n",&arr[0]);
	printf("%p\n",&arr[0]+1);
	
	printf("%p\n",&arr);
	printf("%p\n",&arr+1);//直接跳过整形的地址
return 0;
}

int pr(){
	for(int i=0;i<=10;i++){
		//TODO
		printf("%p======%p\n",p+1,arr[i])// 其值相等 p+i即数组往后+i个
	}
}

