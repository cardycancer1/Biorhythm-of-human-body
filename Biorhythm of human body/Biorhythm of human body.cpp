#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char szTest[1000] = {0};
    int num;
    int year1,month1,day1,year2,month2,day2;
	int year,month,day,leap;
	int month3,day3;
	int a,b,c;
    system("color 1F");
    while(1)
    {
        printf("******************************欢迎进行人体生物节律周期查询******************************\n\n\n");
        printf("\t1:进行查询\t\t\t\t2:人体生物节律周期说明\n\n\n");
        printf("****************************************************************************************\n\n\n");
        printf("请输入数字选择：");
        scanf("%d",&num);
        if(num == 2)//选择数字2
        {
            system("cls");
            FILE *fp=fopen("Biorhythm of human body.txt","r");
            if(fp==NULL)
            {
                printf("failed to open Biorhythm of human body.txt\n");
                system("pause");
                return 1;
            }
            while(!feof(fp))
            //读取txt文件
            {
                memset(szTest,0, sizeof(szTest));
                fgets(szTest,sizeof(szTest) - 1, fp);
                printf("%s",szTest);
            }
            fclose(fp);
            printf("\n"); 
            system("pause");
        }
        if(num == 1)//选择数字1
        {
            system("cls");
            printf("人体内存在三大生物节律，即体力戒律、情绪节律、智力节律。他们的周期分别为28天，33天，23天。\n");
	        printf("高效期:第13-19天!行为处于最佳状态，体力旺盛，情绪高昂，智力开阔\n危险期:第1-3天和27-28天!体内生理变化剧烈，各种器官协调机能下降，容易发生错误行为\n低效期:第4-12天和20-26天！体力衰减，耐力下降，情绪低落，反应迟钝，智力抑制，工作效率低。\n");
	        printf("下面开始测试您的生物节律，请输入您的出生年月日。(例:2000 10 27)\n");
	        scanf("%d %d %d",&year1,&month1,&day1);
	        printf("请输入你想测试那天的日期:(例:2020 10 27)\n");
	        scanf("%d %d %d",&year2,&month2,&day2);
	        year=year2-year1;
	        day=year*365;
        	leap=year/4;
	        day=day+leap;
	        month3=month2-month1;
	        if(month3>0)
            {
	     	    month3=month3;
            }
	        else
            {
		        month3=-month3;
            }
	        day3=day2-day1;
	        if(day3>0)
            {
		        day3=day3;
            }
	        else
            {
		        day3=-day3;
            }
	        day=day+month3*30+day3;
	        a=day%23;
	        b=day%28;
	        c=day%33;
	        printf("您在当天的体力周期在第%d天\n",a);
	        printf("您在当天的情绪周期在第%d天\n",b);
	        printf("您在当天的智力周期在第%d天\n",c);
            system("pause");
        }
        system("cls");
    }
    system("pause");
    return 0;
}
