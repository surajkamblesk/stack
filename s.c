#include<stdio.h>
#include<stdlib.h>
#define max 10

struct stack{
	int data[max];
	int top;
	
};


	
void push(struct stack *s,int ele){
	if(s->top == max+1){
		printf("stack is full\n");
		exit(0);
		
	}
	else
	{
		s->data[++(s->top)]= ele;
	}
}

int pop(struct stack *s){
	int x;
	if(s->top == -1){
		printf("stack is empty \n");
		return -1;
		
	}else{
		x = s->data[s->top];
		s->top= s->top - 1;
	}
	return x;
}



void display(struct stack *s){
	int i;
	if(s->top == -1){
		printf("stack is empty \n");
		exit(0);
	}
	else{
		for(i=s->top;i>0;--i){
			printf("%d\n",s->data[i]);
			
		}
	}
}






void main(){

	struct stack s;
	s.top=-1;
	int ch,ele,x;
	
	while(1){
	
	printf("1.push\n2.pop\n3.dispaly\n4.exit\n5.clear screen\n");
	printf("enetr your choice");
	scanf("%d",&ch);
	
switch(ch){
	case 1:
		printf("enter the data to insert\n");
		scanf("%d",&ele);
		push(&s,ele);
		break;
		
		case 2:
			 x= pop(&s);
			 printf("deleted item on top was %d\n",x);
			 break;
			 
			 case 3:
			 	display(&s);
			 	break;
			 	
			 	
			 	case 4:
			 		exit(0);
			 		break;
			 		
			 		case 5:
			 			system("cls");
			 			break;
			 		
			 		
		default:
			printf("invalid entry\n");
			exit(0);
}	
	
	
}
	
}
