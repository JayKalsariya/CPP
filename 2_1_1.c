#include<stdio.h>
#include<conio.h>
#define p printf
#define s scanf
main()
{
	int a=56, b=2;
	clrscr();
	p("%d + %d = %d\n",a,b,a+b);
	p("%d - %d = %d\n",a,b,a-b);
	p("%d * %d = %d\n",a,b,a*b);
	p("%d / %d = %d\n",a,b,a/b);
	p("%d %% %d = %d\n",a,b,a%b);
	getch();

}
