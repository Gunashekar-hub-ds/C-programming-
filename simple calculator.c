#include<stdio.h>
void main()
{
	 int op1,op2;
	 char cop;
	 //clrscr()
	 printf("enter the  valid arithm exp\n");
	 scanf("%d%c%d",&op1,&cop,&op2);
	      switch(cop)
	      {
	      	case'+':printf("Result=%d",op1+op2);
	      	             break;
	      	case'-':printf("Result=%d",op1-op2);
	      	             break;
	      	case'*':printf("Result=%d",op1*op2);
	      	             break;
	      	case'/':printf("Result=%d",op1/op2);
	      	             break;
	      	case'%':printf("Result=%d",op1%op2);
	      	             break;
	      	default:printf("Invalid expression\n");
	      }
}
