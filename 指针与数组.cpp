//����1��&arr ��ʱ��������ʾ�������� &������ ȡ��������������ĵ�ַ  2��sizeof�������������������������Ĵ�С
//����������Ԫ�صĵ�ַ
#include<stdio.h>
int main(){
	int arr[10]={0};
	printf("%p\n",arr);
	printf("%p\n",arr+1);
	
	printf("%p\n",&arr[0]);
	printf("%p\n",&arr[0]+1);
	
	printf("%p\n",&arr);
	printf("%p\n",&arr+1);//ֱ���������εĵ�ַ
return 0;
}

int pr(){
	for(int i=0;i<=10;i++){
		//TODO
		printf("%p======%p\n",p+1,arr[i])// ��ֵ��� p+i����������+i��
	}
}

