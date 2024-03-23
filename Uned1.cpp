#include <stdio.h>
#include <stdlib.h>
#define Maxsize 100
#define OK 0
#define false 1
#include<malloc.h>
typedef int elem;
typedef int Status;
typedef struct
{
	int length;
	int maxsize;
	int *data;
}Sqlist;
typedef struct LNode
{
	int data;
	struct LNode*next;
	
}LNode,*Linklist;
void erjicaidan(){
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\t\t\t\t\t1:创建顺序线性表\n");
	printf("\t\t\t\t\t2:求顺序线性表的长度\n");
	printf("\t\t\t\t\t3:按序号取顺序表元素\n");
	printf("\t\t\t\t\t4:按值查找顺序表元素\n");
	printf("\t\t\t\t\t5:插入元素\n");
	printf("\t\t\t\t\t6:删除元素\n");	
	printf("\t\t\t\t\t7:输出顺序线性表\n");	
	printf("\t\t\t\t\t8:返回\n");	
}
void caidan(){
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
 	printf("\t\t\t\t\t1:顺序表\n");
 	printf("\t\t\t\t\t2:链表\n");
 	printf("\t\t\t\t\t3:退出\n");
 }

void lianbiaocaidan(){
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\t\t\t\t\t1:创建链式线性表\n");
	printf("\t\t\t\t\t2:求链式线性表的长度\n");
	printf("\t\t\t\t\t3:按序号取链表元素\n");
	printf("\t\t\t\t\t4:按值查找链表元素\n");
	printf("\t\t\t\t\t5:插入元素\n");	
	printf("\t\t\t\t\t6:删除元素\n");	
	printf("\t\t\t\t\t7:输出链式线性表\n");	
	printf("\t\t\t\t\t8:返回\n");	

}
void initlist(Sqlist&L){
	L.data = (int*)malloc(Maxsize*sizeof(int));
	L.length = 0;
	L.maxsize = Maxsize;
	
}
elem length(Sqlist&L){
	if(L.length==0){
		return 0;
	}
	else{
		return L.length;
	}
}
elem getelem(Sqlist&L,int i){

	if(i<0||i>L.length) {
		printf("序号超出范围\n");
		return -1;
	}
	return L.data[i];
	
}
Status getpos(Sqlist&L,int value){
	int i,ret = 1;
	for(i=0;i<L.length;i++){
		if(L.data[i]==value){
			return i;
			ret = 0;
		}
	}
	if(ret) printf("找不到元素%d\n",value);return false;
	return OK;
}
Status insert(Sqlist&L,int pos,int value){
	
	if(pos<0||pos>L.length+1) return false;
	if(L.length>L.maxsize) return false;
	for(int j = L.length;j>=pos;j--){
		L.data[j]=L.data[j-1];
	}
	L.data[pos-1] = value;
	L.length++;
	printf("插入成功\n");
	return OK;
	
}
Status listdelete(Sqlist&L,int pos){
	if(pos<0||pos>L.length) return false;
	if(L.length>L.maxsize) return false;
	for(int j = pos;j<=L.length;j++){
		L.data[j-1]=L.data[j];                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
	}
	L.length--;	
	printf("删除成功"); 
	return OK;
}
Status printflist(Sqlist&L){
	if(!L.data) return false;
	printf("顺序表为\n");
	for(int i=0;i<=L.length-1;i++){
		printf(" %d ",L.data[i]);
	}
	printf("\n");
	
	return OK;
}

void yijicaidan(int mod){
	switch(mod){
		case(1):
			erjicaidan();
		break;
		case(2):
			lianbiaocaidan();
		break;
		case(3):
			system("cls");
			break;
		break;	
	}
}
LNode *InitList(int f)//单链表的初始化
{
	LNode *N;
    N=(LNode*)malloc(sizeof(LNode));
    N->next=NULL;
    if (N==NULL)    // 判断是否分配成功
    {
        f=0;
    }
    f=1;
    return N;
}
elem lengthlian(Linklist N){
	int len =0;
	LNode *p = N;

	while(p->next!=NULL){
		p = p->next;
		len++;
	}
	return len;
}
elem getlianelem(Linklist N,int i){

	scanf("%d",&i);
	if(i<1) {
		printf("参数错误\n"); 
		return false;
	}
		
	else{
		int j = 0;
		LNode *p = N;
		while(p!=NULL&&j<i){
			p = p->next;
			j++;
		}
		if(p == NULL) 
		{
			printf("链表为空\n");
			return false;	
		}

		else{
			return p->data;
		}
	}
}
Status locateelem(Linklist N,int e){

	int i = 0;
	int ret = 1;
	scanf("%d",&e);
	LNode* p=N;
	while(p->next!=NULL){
		i++;
		p = p->next;
		if(p->data ==e){
			return i;
			ret =0; 
		}

	}
	if(ret) printf("找不到元素%d\n",e);return false;
	return OK;
}
Status CreatList (Linklist L)//单链表的创建(后插法)
{
   int i,n;
   int num;
    LNode *r,*p=NULL;
    printf("输入要创建的元素的个数:\n");
    scanf("%d",&n);
    r=L;//纪录尾结点
    printf("请正序输入%d个元素\n",n);
    for(i=0;i<n;++i)
    {
        p=(LNode*)malloc(sizeof(struct LNode));
        scanf("%d",&num);
        p->data=num;
        p->next=NULL;
        r->next=p;
        r=p;//新的尾结点
    }
    return OK;
}
Status ListInsert(Linklist L,int i,int e)//单链表的插入
{

    LNode *p;
    LNode *s;
    p=L;
    int j=0;
    while(p&&(j<i-1))
    {
        p=p->next;
        ++j;
    }
    if(!p||j>i-1) return false;
    else
	{
    	s=(struct LNode*)malloc(sizeof(struct LNode));
   	 	s->data=e;
    	s->next=p->next;
    	p->next=s;
	}
	printf("插入成功\n");
    return OK;
}
Status ListDelete(Linklist L,int i)//单链表的删除
{
    LNode *p;
    LNode *q;
    int j=0;
    p=L;
    while((p->next)&&(j<i-1))
    {
        p=p->next;
        ++j;
    }
    if(!(p->next)||(j>i-1)) return false;
    else
        {
            q=p->next;
            p->next=q->next;
            free(q);
            return OK;
        }
}
void ListDisplay(Linklist L)//单链表的遍历
{
   LNode *p;
   p=L->next;
   printf("当前单链表：\n");
   while(p!=NULL)
   {
    printf("%d ->",p->data);
     p=p->next;
   }
   printf("\n");
}
void erjilian(int dat){
	static Linklist N;
	int i,a,b,c,d,e,flag;
	switch(dat){
		case(1):
			system("cls");
			lianbiaocaidan();

			N = InitList (flag);
			if(flag==0) printf("创建失败");
			printf("初始化成功\n");
			CreatList(N);

		break;	
		case(2):
			system("cls");
			lianbiaocaidan();

			printf("长度为%d\n",lengthlian(N));
		break;	
		case(3):
			system("cls");
			lianbiaocaidan();

			printf("元素为%d\n",getlianelem(N,i));
		break;	
		case(4):
			system("cls");
			lianbiaocaidan();

			printf("序号为%d\n",locateelem(N,a));
		break;	
		case(5):
			system("cls");
			lianbiaocaidan();
			scanf("%d",&c);
			scanf("%d",&d);
			ListInsert(N,c,d);
		break;				
	
		case(6):
			system("cls");
			lianbiaocaidan();
			scanf("%d\n",&e);
			ListDelete(N,e);
		break;				
	
		case(7):
			system("cls");
			lianbiaocaidan();
			ListDisplay(N);
		break;
		case(8):
			system("cls");
			lianbiaocaidan();
			break;
		}
}
void erji(int dat){
	static Sqlist L;
	int i,a,b,c,d,e,f;

	switch(dat){
		case(1):
			system("cls");
			erjicaidan();
			initlist(L);
			printf("成功创建空顺序表\n");
		break;	
		case(2):
			system("cls");
			erjicaidan();

			printf("长度为%d\n",length(L));
		break;	
		case(3):
			system("cls");
			erjicaidan();
			scanf("%d",&i);
			printf("%d",getelem(L,i));
		break;	
		case(4):
			system("cls");
			erjicaidan();
			scanf("%d",&a);
			printf("输入值%d\n",getpos(L,a));
		break;	
		case(5):
			system("cls");
			erjicaidan();
			scanf("%d%d",&c,&d);
			insert(L,c,d);
		break;				
	
		case(6):
			system("cls");
			erjicaidan();
			scanf("%d%d",&e,&f);
			listdelete(L,e);
		break;				
	
		case(7):
			system("cls");
			erjicaidan();
			printflist(L);
		break;
		case(8):
			system("cls");
			erjicaidan();
			break;
		default:
			printf("请重新输入选项");
		break;
		}
}
int main(){
	while(1){
		
		int x,mod,y;
		caidan();
		printf("输入你的选项(1-3)：");
		scanf("%d",&mod);
		system("cls");
		yijicaidan(mod);
		switch(mod){
			case 1:
				while(1)
				{
					printf("输入你的选项(1-8)：");
					scanf("%d",&x);
					if(x == 8){
						system("cls");
						break;
					}
					else{
						erji(x);
					}
				}
			break;
			case 2:
				while(1)
				{
					printf("输入你的选项(1-8)：");
					scanf("%d",&y);
					if(y == 8){
						system("cls");
						break;
					}
					else{
						erjilian(y);
					}
				
				}
			break;
			case 3:
				return 0;
			break;
			default:
				printf("请重新输入选项");
			break;
		}
	
	}
	return 0;
}
