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
        printf("******************************��ӭ������������������ڲ�ѯ******************************\n\n\n");
        printf("\t1:���в�ѯ\t\t\t\t2:���������������˵��\n\n\n");
        printf("****************************************************************************************\n\n\n");
        printf("����������ѡ��");
        scanf("%d",&num);
        if(num == 2)//ѡ������2
        {
            FILE *fp=fopen("Biorhythm of human body.txt","r");
            if(fp==NULL)
            {
                printf("failed to open Biorhythm of human body.txt\n");
                system("pause");
                return 1;
            }
            while(!feof(fp))
            //��ȡtxt�ļ�
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
        if(num == 1)//ѡ������1
        {
            
        }
    }
    system("pause");
}