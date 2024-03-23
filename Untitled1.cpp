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
 	printf("\t\t\t\t\t1:初始化栈\n");
 	printf("\t\t\t\t\t2:压栈\n");
 	printf("\t\t\t\t\t3:弹栈\n");
 	printf("\t\t\t\t\t4:取栈顶元素\n");
 	printf("\t\t\t\t\t5:判断栈空\n");
 	printf("\t\t\t\t\t6:十进制转换成N进制数\n");
 	printf("\t\t\t\t\t7:退出\n");
 }
void initstack(Sqstack &S){
	S.top = -1;
	printf("初始化成功\n");
}
bool Push(Sqstack &S,int x){
	if (S.top == Stack_Size -1 ){
		perror("栈满无法进栈");
		return false;
	}
	else{
		S.data[++S.top] = x;
		printf("入栈成功\n");
		return true;
	}
}
bool Pop(Sqstack &S,int &y){
	if(S.top==-1){
		perror("栈空\n");
		return false;
	}
	y = S.data[S.top--];
	printf("出栈完成\n");
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
		perror("栈空\n");
		return false;
	}
	else{
		int x = S.data[S.top];
		printf("栈顶元素为%d\n",x);
		return true;
	}
}
bool Stackempty(Sqstack &S){
	if(S.top==-1){
		printf("栈空\n");
		return true;
	}
	else{
		printf("栈不为空\n");
		return false;
	}
}
void jinzhi(int x,int N){
	Sqstack L;
	initstack(L);
	int y;
	printf("输入十进制数\n");
	scanf("%d",&x);
	printf("输入转换进制\n");
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

		printf("请输入你的选项(1-7)");
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
				printf("输入压栈的元素\n");
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
