#include <stdio.h>

main()
{
    int bankpun,bankharoi,bankroi,moneyinatm,money,temp,chaibankpun,chaibankharoi,chaibankroi;
    scanf("%d %d %d",&bankpun,&bankharoi,&bankroi);
    moneyinatm=(bankpun*1000)+(bankharoi*500)+(bankroi*100);
    while(moneyinatm>0)
    {
        scanf("%d",&money);
        if(money>moneyinatm||money%100!=0||money<100||money>30000)
        {
            printf("ERROR\n");
            printf("%d %d %d\n",bankpun,bankharoi,bankroi);
        }
        else if(bankpun>0&&bankharoi==0&&bankroi==0)
        {
            if(money%1000!=0)
            {
                printf("ERROR\n");
                printf("%d %d %d\n",bankpun,bankharoi,bankroi);
            }
            else
            {
                moneyinatm-=money;
                chaibankpun=money/1000;
                if(chaibankpun>bankpun)
                {
                    money=money-bankpun*1000;
                    chaibankpun=bankpun;
                    bankpun=0;
                }
                else
                {
                    money=money%1000;
                    bankpun-=chaibankpun;
                }
                printf("1000 = %d\n500 = %d\n100 = %d\n",chaibankpun,0,0);
                printf("%d %d %d\n",bankpun,bankharoi,bankroi);
            }
        }
        else if(bankharoi>0&&bankroi==0)
        {
            if(money%500!=0)
            {
                printf("ERROR\n");
                printf("%d %d %d\n",bankpun,bankharoi,bankroi);
            }
            else
            {
                moneyinatm-=money;
                chaibankharoi=money/500;
                if(chaibankharoi>bankharoi)
                {
                    money=money-bankharoi*500;
                    chaibankharoi=bankharoi;
                    bankharoi=0;
                }
                else
                {
                    money=money%500;
                    bankharoi-=chaibankharoi;
                }
                printf("1000 = %d\n500 = %d\n100 = %d\n",chaibankpun,0,0);
                printf("%d %d %d\n",bankpun,bankharoi,bankroi);
            }
        }
        else
        {
            moneyinatm-=money;
            chaibankpun=money/1000;
            if(chaibankpun>bankpun)
            {
                money=money-bankpun*1000;
                chaibankpun=bankpun;
                bankpun=0;
            }
            else
            {
                money=money%1000;
                bankpun-=chaibankpun;
            }
            chaibankharoi=money/500;
            if(chaibankharoi>bankharoi)
            {
                money=money-bankharoi*500;
                chaibankharoi=bankharoi;
                bankharoi=0;
            }
            else
            {
                money=money%500;
                bankharoi-=chaibankharoi;
            }
            chaibankroi=money/100;
            if(chaibankroi>bankroi)
            {
                money=money-bankroi*100;
                chaibankroi=bankroi;
                bankroi=0;
            }
            else
            {
                money=money%100;
                bankroi-=chaibankroi;
            }
            printf("1000 = %d\n500 = %d\n100 = %d\n",chaibankpun,chaibankharoi,chaibankroi);
            printf("%d %d %d\n",bankpun,bankharoi,bankroi);
        }
    }
    printf("EMPTY");
}
