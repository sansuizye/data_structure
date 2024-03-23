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
	printf("\t\t\t\t\t1:����˳�����Ա�\n");
	printf("\t\t\t\t\t2:��˳�����Ա�ĳ���\n");
	printf("\t\t\t\t\t3:�����ȡ˳���Ԫ��\n");
	printf("\t\t\t\t\t4:��ֵ����˳���Ԫ��\n");
	printf("\t\t\t\t\t5:����Ԫ��\n");
	printf("\t\t\t\t\t6:ɾ��Ԫ��\n");	
	printf("\t\t\t\t\t7:���˳�����Ա�\n");	
	printf("\t\t\t\t\t8:����\n");	
}
void caidan(){
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
 	printf("\t\t\t\t\t1:˳���\n");
 	printf("\t\t\t\t\t2:����\n");
 	printf("\t\t\t\t\t3:�˳�\n");
 }

void lianbiaocaidan(){
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\t\t\t\t\t1:������ʽ���Ա�\n");
	printf("\t\t\t\t\t2:����ʽ���Ա�ĳ���\n");
	printf("\t\t\t\t\t3:�����ȡ����Ԫ��\n");
	printf("\t\t\t\t\t4:��ֵ��������Ԫ��\n");
	printf("\t\t\t\t\t5:����Ԫ��\n");	
	printf("\t\t\t\t\t6:ɾ��Ԫ��\n");	
	printf("\t\t\t\t\t7:�����ʽ���Ա�\n");	
	printf("\t\t\t\t\t8:����\n");	

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
		printf("��ų�����Χ\n");
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
	if(ret) printf("�Ҳ���Ԫ��%d\n",value);return false;
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
	printf("����ɹ�\n");
	return OK;
	
}
Status listdelete(Sqlist&L,int pos){
	if(pos<0||pos>L.length) return false;
	if(L.length>L.maxsize) return false;
	for(int j = pos;j<=L.length;j++){
		L.data[j-1]=L.data[j];                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
	}
	L.length--;	
	printf("ɾ���ɹ�"); 
	return OK;
}
Status printflist(Sqlist&L){
	if(!L.data) return false;
	printf("˳���Ϊ\n");
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
LNode *InitList(int f)//������ĳ�ʼ��
{
	LNode *N;
    N=(LNode*)malloc(sizeof(LNode));
    N->next=NULL;
    if (N==NULL)    // �ж��Ƿ����ɹ�
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
		printf("��������\n"); 
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
			printf("����Ϊ��\n");
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
	if(ret) printf("�Ҳ���Ԫ��%d\n",e);return false;
	return OK;
}
Status CreatList (Linklist L)//������Ĵ���(��巨)
{
   int i,n;
   int num;
    LNode *r,*p=NULL;
    printf("����Ҫ������Ԫ�صĸ���:\n");
    scanf("%d",&n);
    r=L;//��¼β���
    printf("����������%d��Ԫ��\n",n);
    for(i=0;i<n;++i)
    {
        p=(LNode*)malloc(sizeof(struct LNode));
        scanf("%d",&num);
        p->data=num;
        p->next=NULL;
        r->next=p;
        r=p;//�µ�β���
    }
    return OK;
}
Status ListInsert(Linklist L,int i,int e)//������Ĳ���
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
	printf("����ɹ�\n");
    return OK;
}
Status ListDelete(Linklist L,int i)//�������ɾ��
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
void ListDisplay(Linklist L)//������ı���
{
   LNode *p;
   p=L->next;
   printf("��ǰ������\n");
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
			if(flag==0) printf("����ʧ��");
			printf("��ʼ���ɹ�\n");
			CreatList(N);

		break;	
		case(2):
			system("cls");
			lianbiaocaidan();

			printf("����Ϊ%d\n",lengthlian(N));
		break;	
		case(3):
			system("cls");
			lianbiaocaidan();

			printf("Ԫ��Ϊ%d\n",getlianelem(N,i));
		break;	
		case(4):
			system("cls");
			lianbiaocaidan();

			printf("���Ϊ%d\n",locateelem(N,a));
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
			printf("�ɹ�������˳���\n");
		break;	
		case(2):
			system("cls");
			erjicaidan();

			printf("����Ϊ%d\n",length(L));
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
			printf("����ֵ%d\n",getpos(L,a));
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
			printf("����������ѡ��");
		break;
		}
}
int main(){
	while(1){
		
		int x,mod,y;
		caidan();
		printf("�������ѡ��(1-3)��");
		scanf("%d",&mod);
		system("cls");
		yijicaidan(mod);
		switch(mod){
			case 1:
				while(1)
				{
					printf("�������ѡ��(1-8)��");
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
					printf("�������ѡ��(1-8)��");
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
				printf("����������ѡ��");
			break;
		}
	
	}
	return 0;
}
