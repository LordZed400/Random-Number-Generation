#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
clrscr();
int i=1,j;
int no[26];
no[0]=rand()%26+1;
do
{ up:
  no[i]=rand()%26+1;
  for(j=0;j<i;j++)
  {
   if(no[i]==no[j])
   {
   goto up;
   }
  }
i++;
}while(i<26);
j=0;
printf("\n\nNon-Repeating Random Numbers:\n");
for(i=0;i<26;i++)
{
 gotoxy(5+((i+1)%7)*5, 5+j*3);
 printf("  %d  ",no[i]);
 if((i+1)%7==0)
 {
	printf("\n");
	j++;
 }
}

getch();
}