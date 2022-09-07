#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
char a[6][100]={"SUBHAM KUMAR JHA","SUBHAM SHRIVASTAVA","SHRUTI AGARWAL","AVINASH KUMAR","ASHISH KUMAR","AKANSHA KUMARI"};
int bal[6]={503,10000,5000,69,69,5000};
int enteredpin(int b[6],int k)
{
	int i;
	for(i=0;i<5;i++)
	{
		if(k==b[i])
		{
			Beep(2500,700);
			printf("\n\n\t\t\t================== Welcome %s ==================",a[i]);
			return i;
		}
	}
		
		{
			printf("\n\n\t\t\t\t\t\t==INVALID PIN==\n");
			printf("\n\t\t============================================================================================");
			Beep(800,1000);
			return -1;
		}
	
	
}

int function(int choice,int ans)
{
	int money,new_bal;
	int add,new_pin;
	switch (choice)
	{
	case 1:
	       printf("\n\t\tYour Balance is: %d",bal[ans]);
	       break;
	case 2: printf("\n\n\t\t\tEnter Amount: ");
	        scanf("%d",&money);
	        Beep(700,500);
	        if(bal[ans]<money)
	        {
	        	printf("\n\n\tInsufficent Balance");
			}
			else
			{
				bal[ans]-=money;
				printf("\n\n\t\t\tYour New Balance is: %d",bal[ans]);
			}
			break;
	case 3:printf("\n\n\t\tEnter Amount:");
	       scanf("%d",&add);
	       Beep(700,500);
		   bal[ans]+=add;
		   printf("\n\n\t\tYour Balance is: %d",bal[ans]);
		   break;
	case 4:	printf("\n\n\t\t\tEnter Your New Pin: ");
	        scanf("%d",&new_pin);
	        Beep(700,500);
			printf("\n\n\t\tYour New Pin is: %d",new_pin); 
			break;
	case 5: printf("\t\t\t\t\t=========THANK YOU========= ");	
	        	  		
	}
	return 5;
	
	
}
int main()
{
	int cream,choice,ans,k,t;
	int b[6]={7463,9334,9308,7061,7549,8434};
	int ok,chubham;
	
	system("COLOR F2");
	printf("\n\n");
	time_t s;
	time(&s);
	printf("\n\t\t\t\t\t%s",ctime(&s));
	back: printf("\n\n\t\t\tEnter Your Code: ");
	scanf("%d",&k);
	
     ans=enteredpin(b,k);
	if(ans==-1)
	{
		goto back;
	}
	else
	
	babu: printf("\n\n\t\t1.Check Balance");
	printf("\n\n\t\t2.Withdraw Money");
	printf("\n\n\t\t3.Deposite");
	printf("\n\n\t\t4.Change Pin");
	printf("\n\n\t\t5.Exit");
	printf("\n\n\t\t\tEnter your choices: ");
	scanf("%d",&choice);
	Beep(700,500);
	chubham=function(choice,ans);
	if(chubham==5)
	{
		printf("\n\n\tDo You Want To Do Further Transaction?");
		printf(" Press [1]Yes or [0]Exit : ");
		scanf("%d",&ok);
		Beep(700,500);
		if(ok==0)
		{
			printf("\n\n\t\t\t\t\t========= THANK YOU =========");
			
		}
		else
		{
			goto babu;
		}
		
	}
}
