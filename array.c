#include<stdio.h>

int main()
{
    int maths[3],guj[3],eng[3],total[3],percentage[3],grade[3];

    char ch;

    for  (int i = 1 ; i <= 3 ; i++)
    {
        printf("enter maths marks : ");
        scanf("%d",&maths[i]);
        printf("enter guj marks : ");
        scanf("%d",&guj[i]);
        printf("enter eng marks : ");
        scanf("%d",&eng[i]);
    }

    for(int i=1;i<=3;i++)
    {
        total[i]=maths[i]+guj[i]+eng[i];
        percentage[i]=total[i]*0.3;
        
        if(percentage[i] > 75 && percentage[i] <= 99)
        {
            grade[i]='A';
        }
        else if(percentage[i] > 50 && percentage[i] <= 75)
        {
            grade[i]='B';
        }
         else if(percentage[i] > 33 && percentage[i] <= 50)
        {
            grade[i]='C';
        }
        else if (percentage[i] <= 33)
        {
            grade[i]='F';
        }



        printf("************************************************************\n");
        printf("maths student marks[%d] is :  %d\n",i,maths[i]);
        printf("guj student marks[%d] is :  %d\n",i,guj[i]);
        printf("eng student marks[%d] is :  %d\n",i,eng[i]);
        printf("total student marks[%d] is :  %d\n",i,total[i]);
        printf("percentage of student[%d]  is :  %d\n",i,percentage[i]);
        printf("grade of student[%d]  is :  %c\n",i,grade[i]);

    }

    return 0;
}