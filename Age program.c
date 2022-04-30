//If ages of Ram, Shyam and Ajay are input through the keyboard, write a program to determine the youngest of the three.
#include <stdio.h>
int main()
{
	int r,s,a;
	printf("Enter the ages of Ram,Shyam and Ajay respectively");
	scanf("%d %d %d",&r,&s,&a);
	if(r>s)
	{
		if(s>a)
		printf("Ajay is Youngest");
		else
		printf("Shyam is Youngest");
	}
	else
	printf("Ram is Youngest");
	
		
		
}

