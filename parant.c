#include < stdio.h >
#include < conio.h > 
#define max 50

void main()
{
	char stk[max],exp[100];
	int top,i;	
	clrscr();	
	top = -1;	
	printf("\nEnter an infix expression ");
	gets(exp);	
	for(i=0; exp[i] != '\0'; i++)
	{
		if( exp[i]=='(' || exp[i] =='[' || exp[i] == '{' )
		{
			top++;
			stk[top]= exp[i];
		}
		else
		if ( exp[i] == ')' )
		{
			if( stk[top] == '(' )
			top--;
		}
		else
		{
			printf("Unbalanced exp");
			exit(0);
		}
		}
		else
		if ( exp[i] == ']' )
		{
		if( stk[top] == '[' )
			top--;
		else
		{
			printf("Unbalanced exp");
			exit(0);
		}
		}
		else
		if ( exp[i] == '}' )
		{
		if( stk[top] == '{' )
			top--;
		else
		{
			printf("Unbalanced exp");
			exit(0);
		}
		}
	} // for
	if( top == -1 )
		printf("Exp is balanced");
	else
		printf("Exp is not balanced");
} // main