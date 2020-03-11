#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char szTest[1000] = {0};
    int num;
    system("color 5F");
    while(1)
    {
        printf("******************************欢迎进行人体生物节律周期查询******************************\n\n\n");
        printf("\t1:进行查询\t\t\t\t2:人体生物节律周期说明\n\n\n");
        printf("****************************************************************************************\n\n\n");
        printf("请输入数字选择：");
        scanf("%d",&num);
        if(num == 2)//选择数字2
        {
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
            system("cls");
        }
        if(num == 1)//选择数字1
        {
            
        }
    }
    system("pause");
}