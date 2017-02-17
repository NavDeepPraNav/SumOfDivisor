#include(stdio.h) // place this '<' & '>' instead of '(' & ')' before stdio.h
#include(conio.h)
void main( )
{
int no, sum=0, x;
clrscr( );
printf("Enter the required number :");
scanf("%d", &no);
for( x=1; x<=no; x++) {
if(no%x==0) sum=sum+x;
}
printf("\nSum of the factors of %d is: %d", no, sum);
getch( );
}

