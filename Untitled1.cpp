#include <stdio.h>
#include <stdlib.h>
#define Stack_Size 100
typedef int elem;
typedef int status;
typedef struct stack
{
	elem data[Stack_Size];
	int top;
}Sqstack;
void caidan(){
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
 	printf("\t\t\t\t\t1:��ʼ��ջ\n");
 	printf("\t\t\t\t\t2:ѹջ\n");
 	printf("\t\t\t\t\t3:��ջ\n");
 	printf("\t\t\t\t\t4:ȡջ��Ԫ��\n");
 	printf("\t\t\t\t\t5:�ж�ջ��\n");
 	printf("\t\t\t\t\t6:ʮ����ת����N������\n");
 	printf("\t\t\t\t\t7:�˳�\n");
 }
void initstack(Sqstack &S){
	S.top = -1;
	printf("��ʼ���ɹ�\n");
}
bool Push(Sqstack &S,int x){
	if (S.top == Stack_Size -1 ){
		perror("ջ���޷���ջ");
		return false;
	}
	else{
		S.data[++S.top] = x;
		printf("��ջ�ɹ�\n");
		return true;
	}
}
bool Pop(Sqstack &S,int &y){
	if(S.top==-1){
		perror("ջ��\n");
		return false;
	}
	y = S.data[S.top--];
	printf("��ջ���\n");
	return true;	
}
bool PrintfStack(Sqstack &S){

		for(int i =0;i<=S.top;i++){
			printf("%d",S.data[S.top-i]);
		}
		return true;
	
}
bool gettop(Sqstack &S){
	if(S.top == -1){
		perror("ջ��\n");
		return false;
	}
	else{
		int x = S.data[S.top];
		printf("ջ��Ԫ��Ϊ%d\n",x);
		return true;
	}
}
bool Stackempty(Sqstack &S){
	if(S.top==-1){
		printf("ջ��\n");
		return true;
	}
	else{
		printf("ջ��Ϊ��\n");
		return false;
	}
}
void jinzhi(int x,int N){
	Sqstack L;
	initstack(L);
	int y;
	printf("����ʮ������\n");
	scanf("%d",&x);
	printf("����ת������\n");
	scanf("%d",&N);
	while(x!=0){
		y = x%N;
		x = x/N;
		Push(L,y);
	}
	PrintfStack(L);
}
int main(){
	int mod,x,y,m,n;
	Sqstack S;
	caidan();
	while(1){

		printf("���������ѡ��(1-7)");
		scanf("%d",&mod);

		switch(mod){
			case 1:
				system("cls");
				caidan();
				initstack(S);
				
			break;
			case 2:
				system("cls");
				caidan();
				printf("����ѹջ��Ԫ��\n");
				scanf("%d",&x);
				Push(S,x);

			break;
			case 3:
				system("cls");
				caidan();
				Pop(S,y);

			break;
			case 4:
				system("cls");
				caidan();
				gettop(S);

			break;
			case 5:
				system("cls");
				caidan();
				Stackempty(S);

			break;
			case 6:
				system("cls");
				caidan();
				jinzhi(m,n);
				printf("\n");

			break;
			case 7:
				return 0;
			break;					
				
		}
	

	}
	return 0;
}
