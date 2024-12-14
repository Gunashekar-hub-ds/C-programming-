#include<stdio.h>
void main()
{
	 char grade='b';
	 switch(grade)
	 {
	 	case'a':
	 		printf("excellent!\n");
	 		break;
	 	case'b':
	 	case'c':
	 		printf("well done\n");
	 		break;
	 	case'd':
	 		printf("you passed\n");
	 		break;
	 	case'e':
	 		printf("better try again\n");
	 		break;
	 	default:printf("invalid grade\n");
	 	
	 }
}
