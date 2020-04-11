#include<stdio.h>
#include<math.h>
#include<cs50.h>
int main(void)
{
    int i , max , a[4]={25,10,5,1} , count=0;
    float n = get_float("Change owed:");
    int cents = round(n*100);
    while(cents!=0)
        {
            for(i=0;i<4;i++)
            {if(cents>=a[i])
                {max=a[i];
                    break;
                }
             }
            cents=cents-max;
            count++;
        }
printf("%d\n",count);

}
