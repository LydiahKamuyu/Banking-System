#include<stdio.h>
int main()
{
	float withdraw,deposit,transfer;
	char fname[15];
	char lname[15];
	float balance=10000;
	int account,account1,account2;
	int accountNo;
	int transaction=1;

	printf("\t\t\4\t***********************************************\t\t\4\n");
	printf("\n\t\t\t\t\4_______BANKING SYSTEM________\n\n");
	printf("\t\t\t\tINDIVIDUAL BANKING MADE SIMPLE\t\t\4\n");
	printf("\t\t\4\t***********************************************\t\t\4\n");
	printf("\t\t\4\t\t\t\t\t\t\4\n");
	printf("\t\t\4\t\t\t\t\t\t\4\n");
	printf("\t\t\4 \4 \4 \4 \4\4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4 \4\n");
	printf("Enter Firstname: ");
	scanf("%s",&fname);
	printf("Enter Lastname: ");
	scanf("%s",&lname);
	printf("\nplease enter your account no.: ");
	scanf("%d",&accountNo);
while(transaction == 1)
{
	int pick;
	printf("\nchoose what you want to do\n\n");
	printf("1 - Enquire Balance\n");
	printf("2 - Withdraw\n");
	printf("3 - Deposit\n");
	printf("4 - transfer\n");
	scanf("%d",&pick);
switch(pick)
{
	case 1:
	printf("\n\t\t\t\t__ENQUIRE BALANCE__\n\n");
	printf("your current balance is: %.2fKsh\n",balance);
	break;

	case 2:
	printf("\n\t\t\t\t__WITHDRAW AMMOUNT__\n\n");
	printf("What is the ammount you wish to withdraw? ");
	scanf("%f",&withdraw);
if(withdraw<=balance && withdraw<=400000)
{
	printf("\nyou've just withdrawn %.2fKsh\n\n",withdraw);
	balance-=withdraw;
}
else if(withdraw>400000)
{
	printf("\nAmmount exceeds the ammount of money you can withdraw in a day.\n\n");
}
else
{
	printf("\ninsufficient funds in your account\n\n");
}
break;

	case 3:
	printf("\n\t\t\t\t__DEPOSIT AMMOUNT__\n\n");
	printf("What ammount  do you want to deposit?");
	scanf("%f",&deposit);
if(deposit > 0 && deposit<=400000)
{
	printf("\n%.2fKsh has been deposited in your account.\n\n",deposit);
	balance+=deposit;
}
else if(deposit>400000)
{
	printf("\nCannot deposit such a huge ammount, please visit the bank or use cheque.\n\n");
}
else
{
	printf("\ninvalid deposit amount\n");
}
break;

	case 4:
	printf("\n\t\t\t\t__TRANSFER AMMOUNT__\n\n");
	printf("Enter the AccountNo to transfer to: ");
	scanf("%d",&account2);
	printf("\nhow much do you want to transfer? ");
	scanf("%f",&transfer);
if(balance>=transfer)
{
	printf("\n%.2fKsh successfully transfered to AccountNo %d\n\n",transfer, account2);
	balance-=transfer;
}
else
{
	printf("\nyou do not have sufficient balance\n\n");
}
break;
default:
	printf("invalid transaction\n");
}
transaction=0;
while(transaction!=1 && transaction!=2)
{
	printf("do you want to do another transaction?\n");
	printf("1. yes 2. no\n");
	scanf("%d",&transaction);
if(transaction!=1 && transaction!=2)
{
	printf("invalid no.\nchoose between 1 and 2 only\n");
}
}
}

	printf("\n\t\t\t***************************");
	printf("\n\t\t\tIDEAL BANKING SYSTEM\n");
	printf("\t\t\t***************************\n\n");
	printf("\t\t\tDate: %s\n", __DATE__);
	printf("\t\t\tTime:%s\n", __TIME__);
	printf("\n\t\t\tName: %s %s\n\n",fname, lname);
	printf("\t\t\tYour account no: %d\n", accountNo);
if(deposit >= 0 && deposit < 400000)
{
	printf("\t\t\t\4You've deposited %.2fKsh\n",deposit);
}
else
{
	printf("\t\t\t\4You've deposited 0Khs\n");
}
if(withdraw>0 && withdraw<=400000 && withdraw<=balance)
{
	printf("\t\t\t\4You've withdraw %.2fKsh\n",withdraw);
}
else
{
	printf("\t\t\t\4You've withdraw 0Ksh\n");
}
if(transfer>0 && transfer<=400000 && transfer<=balance)
{
	printf("\t\t\t\4You've Transfered %.2fKsh\n",transfer);
}
else
{
	printf("\t\t\t\4You've Transfered 0Ksh\n\n");}

	printf("\t\t\t*******************************\n");
	printf("\t\t\tThank You For Banking With Us\n");
	printf("\t\t\t*********************************\t\t\4\n");
	getchar();
	return(0);
}
