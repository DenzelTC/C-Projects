#include <stdio.h>
void main(){
	int selection;
	printf("			ECOCASH Menu\n\n");
	printf("1.Send Money\n");
	printf("2.Make Payment\n");
	printf("3.Cash Out\n");
	printf("4.Airtime & Bundles\n");
	printf("5.EcoCash Diaspora\n");
	printf("6.EcoCash Save\n");
	printf("7.Wallet Services\n");
	printf("8.Banking Services\n");
	scanf("%d",&selection);
	switch (selection)
	{
	
		case 1:
			printf("\tPlease Select :\n\t1.Send to registered customer\n\t2.Send to unregistered customer\n\t3.EcoShopper\n\t4.Check Wallet Balance\n");
			break;
			
		case 2:
			printf("Please Select :\n1.Pay Bill\n2.Pay Merchant\n3.Pay School Fees\n4.Payment Approval\n5.Transfer to Church\n6.Regular Payments\n7.AddBiller");
			break;
			
		case 3:
			printf("Please Select :\n1.From Agent\n2.From ATM\n3.Check Wallet Balance");
			break;
			
		case 4:
			printf("\tSelect Option:\n\t1. Buy Airtime\n\t2. Text/SMS\n\t3. Data\n\t4. Facebook\n\t5. WhatsApp\n\t6. Airtime Credit\n");
			int a;
			scanf("%d",&a);
			switch (a)
				{
				case 5:
				printf("\t\tSelect Option:\n\t\t1. My Mobile\n\t\t2. Other Mobile\n");
				int b;
				scanf("%d",&b);
				switch (b)
					{case 1:
						printf("\t\t\tSelect Option:\n\t\t\t1. $0.30 Daily+Twitter\n\t\t\t2. $1.00 Weekly+Twitter\n\t\t\t3. $3.00 Monthly+Twitter\n");
					}
				}
			break;
			
		case 5:
			printf("Please Select :\n1.Western Union Pick Money\n2.MoneyGram Receive Money");
			break;
			
		case 6:
			printf("Please Select :\n1.EcoCash Save\n2.EcoCash Save Plus\n3.EcoCash Loans\n4.Enquiries\n5.EcoCash Savings Club");
			break;
			
		case 7:
			printf("Please Select :\n1.EcoCash Debit Card\n2.Account Enquiry\n3.Next of Kin\n4.Change Language\n5.Multi-Currency\n6.Pin Reset");
			break;
			
		case 8:
			printf("Please Select :\n1.Wallet to Bank Transfer\n2.Bank to Wallet Transfer\n3.Account Statement\n4.Balance Enquiry");
			break;
	}
getch();
}
