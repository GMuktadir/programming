//GM | 22-03-2021
// Mobile Bundle Package Management
float Recharge()
{
    int SecretCode;
    Rechargebalance:
    printf("\nPlease Recharge your Balance First\n(Sample secret Code: 888777 for Tk. 100)");
    printf("\nEnter Secret Code below\n->");
    scanf("%d",&SecretCode);

    if(SecretCode==888777)
    {
        printf("\nSuccessfully Recharge Tk 100.0 in your Balance\n");
        return 100.0;
    }
    else if(SecretCode==999222)
    {
        printf("\nSuccessfully Recharge Tk 200.0 in your Balance\n");
        return 200.0;
    }
    else
    {
        printf("\nInvalid code!Try Again\n");
        goto Rechargebalance;
    }
}
void MinuteBundle(float balance)
{
    int menu2;
     printf("\n1.50 Minute Tk.20\n2.100 Minute Tk.35\n->");
        m2:
        scanf("%d",&menu2);
        switch(menu2)
        {
        case 1:
            //100 Minute Bundle
            if(balance>0)
            {
                if(balance>=50.0)
                {
                    balance-=50.0;
                    printf("\nSuccessfully purchase 50 Minute Bundle!.\nYour rest amount is Tk %0.2f only, Thanks.Stay with us",balance);
                }
                else
                   printf("\nInsufficient Balance !.Please Recharge more\n");
            }
            else
                printf("\nYour Main Balance is Tk.0.Please Recharge\n");
            break;
        case 2:
            //200 Minute Bundle
            if(balance>0)
            {
                if(balance>=35.0)
                {
                    balance-=35.0;
                    printf("\nSuccessfully purchase 200 Minute Bundle!.\nYour rest amount is Tk %0.2f only, Thanks.Stay with us ",balance);
                }
                else
                   printf("\nInsufficient Balance !.Please Recharge more\n");
            }
            else
                printf("\nYour Main Balance is Tk.0.Please Recharge\n");
            break;
        default:
            printf("\nWrong menu !,Please select right menu\n");
            goto m2;
            break;
        }
}
void SmsBundle(float balance)
{
    int menu3;
    printf("\n1.100 SMS Tk.10\n2.200 Minute Tk.18\n->");
        m3:
        scanf("%d",&menu3);
        switch(menu3)
        {
        case 1:
            if(balance>0)
            {
                if(balance>=10.0)
                {
                    balance-=10.0;
                    printf("\nSuccessfully purchase 100 SMS Bundle!.\nYour rest amount is Tk %0.2f only, Thanks.Stay with us",balance);
                }
                else
                   printf("\nInsufficient Balance !.Please Recharge more\n");
            }
            else
                printf("\nYour Main Balance is Tk.0.Please Recharge\n");
            break;
        case 2:
            if(balance>0)
            {
                if(balance>=18.0)
                {
                    balance-=18.0;
                    printf("\nSuccessfully purchase 200 SMS Bundle!.\nYour rest amount is Tk %0.2f only, Thanks.Stay with us",balance);
                }
                else
                   printf("\nInsufficient Balance !.Please Recharge more\n");
            }
            else
                printf("\nYour Main Balance is Tk.0.Please Recharge\n");
            break;
        default:
            printf("\nWrong menu !,Please select right menu\n");
            goto m3;
            break;
        }
}
void InternetBundle(float balance)
{
    int menu4;
    printf("\n1.1GB data Tk.10\n2.3GB data Tk.25\n3.5GB data Tk.50\n4.10GB data Tk.75 \n->");
        m4:
        scanf("%d",&menu4);
        switch(menu4)
        {
        case 1:
            if(balance>0)
            {
                if(balance>=10.0)
                {
                    balance-=10.0;
                    printf("\nSuccessfully purchase 1GB Bundle!.\nYour rest amount is Tk %0.2f only, Thanks.Stay with us",balance);
                }
                else
                   printf("\nInsufficient Balance !.Please Recharge more\n");
            }
            else
                printf("\nYour Main Balance is Tk.0.Please Recharge\n");
            break;
        case 2:
            if(balance>0)
            {
                if(balance>=25.0)
                {
                    balance-=25.0;
                    printf("\nSuccessfully purchase 3GB data Bundle!.\nYour rest amount is Tk %0.2f only, Thanks.Stay with us",balance);
                }
                else
                   printf("\nInsufficient Balance !.Please Recharge more\n");
            }
            else
                printf("\nYour Main Balance is Tk.0.Please Recharge\n");
            break;
        case 3:
            if(balance>0)
            {
                if(balance>=45.0)
                {
                    balance-=45.0;
                    printf("\nSuccessfully purchase 5GB data Bundle!.\nYour rest amount is Tk %0.2f only, Thanks.Stay with us",balance);
                }
                else
                   printf("\nInsufficient Balance !.Please Recharge more\n");
            }
            else
                printf("\nYour Main Balance is Tk.0.Please Recharge\n");
            break;
        case 4:
            if(balance>0)
            {
                if(balance>=75.0)
                {
                    balance-=75.0;
                    printf("\nSuccessfully purchase 10GB data Bundle!.\nYour rest amount is Tk %0.2f only, Thanks.Stay with us",balance);
                }
                else
                   printf("\nInsufficient Balance !.Please Recharge more\n");
            }
            else
                printf("\nYour Main Balance is Tk.0.Please Recharge\n");
            break;
        default:
            printf("\nWrong menu !,Please select right menu\n");
            goto m4;
            break;
        }
}
#include<stdio.h>
int main()
{
    float balance=0;
    int menu;
    printf("\n==Welcome to Mobile Bundle Package Management ==\n");
    //scanf("%f",&balance);
    balance=Recharge();
    printf("\n1.Minute Bundle\n2.SMS Bundle\n3.Internet Bundle==\n->");
    m1:
    scanf("%d",&menu);
    switch(menu)
    {
    case 1:
        //Minute Bundle
        MinuteBundle(balance);
        break;
    case 2:
        //SMS Bundle
        SmsBundle(balance);
        break;
    case 3:
        //Internet Bundle
        InternetBundle(balance);
        break;
    default:
            printf("\nWrong menu !,Please select right menu\n");
            goto m1;
            break;
    }

    return 0;
}
