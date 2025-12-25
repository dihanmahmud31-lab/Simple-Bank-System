#include<stdio.h>
int main()
{
    int accno;
    float accbalance[5]={0,0,0,0,0};
    int choice;

    while(1){
            float p,q;

    printf("\n---The Bangladesh Bank---\n");
    printf("Enter The Account Number(1-5):");
    scanf("%d",&accno);
    if(accno < 1 || accno > 5)
    {
        printf("Invalid Account");
        continue;
    }

    printf("Menu: \n");
    printf("\n1.Check Balance.\n");
    printf("\n2.Deposit.\n");
    printf("\n3.Withdraw.\n");
    printf("\n4.Exit.\n");

    printf("\nPress any number 1-4:\n");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:

        printf("\nThis account balance is %.2f",accbalance[accno-1]);
        break;
    case 2:
        printf("\nHow much money you want to Deposit?\n");
        scanf("%f",&p);
        if(p <= 0)
        {
            printf("\nInvalid\n");
        }
        else{
        accbalance[accno-1] = accbalance[accno-1] +  p;
        printf("\nYou have depositted %.2f dollars\n",p);
        printf("\nYour new balance is %.2f dollars\n",accbalance[accno-1]);
         break;
        }
    case 3:
         printf("\nHow much money you want to Withdraw?\n");
         scanf("%f",&q);
          if(q <= 0)
        {
            printf("\nInvalid\n");
        }
        else if(q > accbalance[accno-1])
        {
            printf("\nInsufficient. \n");
        }
        else{
        accbalance[accno-1] = accbalance[accno-1] -  q;
        printf("\nYou have withdrawed %.2f dollars\n",q);
        printf("\nYour new balance is %.2f dollars\n",accbalance[accno-1]);
         break;
        }
    case 4:
        printf("\nExiting...\n");
         return 0;
    }

    }
    return 0;
}
