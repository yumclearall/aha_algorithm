#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
int main ()
{
	system("color f5");
	printf("\n\n\n\n\n\n\n     ���Թ�  ����� wsad\n"); 
	char a[61][41]={"##############################",
	"#O         #   ##   # ### ####",
	"# ###### # # #    # # ### ####",
	"# #   ## #   # #### # ###   ##",
	"#   #  ##  ###    # #  ## ####",
	"##### #     # ##### ##    ####",
	"#   # ##### #   #   # # #    #",
	"# # #    ## # #### ## # # ####",
	"# # # ##      ##      # # ####",
	"# # # ####### ## ###### #   ##",
	"# #   ##   #  ####### ####   #",
	"# ###### # #####  #        # #",
	"#        # #     ##### ### #  ",
	"# ######## ##### # ### ### # #",
	"#     # ## ##### ###       ###",
	"##### # ## #      ######## # #",
	"#     # ## ## ###        #   #",
	"# # ###       ###### ####### #",
	"# #    ### ##      #         #",
	"##############################"};
	int i,ch,x=1,y=1,c=0;
	while(x!=12 ||y!=30)
	{
	
		for(i=0;i<=20;i++)
			puts(a[i]); 
		ch=getch();
		if(ch=='s')
		 {
			if(a[x+1][y]!='#')
	 		{
	 			a[x][y]=' ';
				 x++;
	 			a[x][y]='O';
	 		}
		 }
		if(ch=='a')
		 {
			if(a[x][y-1]!='#')
	 		{
			 	a[x][y]=' ';
				y--;
	 			a[x][y]='O';
	 		}
		 }
		if(ch=='w')
		 {
			if(a[x-1][y]!='#')
	 		{
	 			a[x][y]=' ';
				x--;
	 			a[x][y]='O';
	 		}
		 }
		if(ch=='d')
		 {
			if(a[x][y+1]!='#')
		 	{
	 			a[x][y]=' ';
				y++;
			 	a[x][y]='O';
	 		}
		}
		c++;	
		for(i=0;i<=20;i++)
			{
		
			//	system("cls");
				puts(a[i]); 
			}

		printf("\n\n\n\n\n\n\n");
	}


Sleep(500);
	system("cls");
	system("color f4"); 
	printf("��һ������%d��",c);
	Sleep(1000);		
	system("cls");
	system("color f7"); 
	printf("��ϲͨ��\n");
	Sleep(200);	
	system("cls");
	system("color f6"); 
	printf("��ϲͨ��\n");
	Sleep(200);	
	system("cls");
	system("color f2"); 
	printf("��ϲͨ��\n");
	Sleep(200);	
	system("cls");
	system("color f5"); 
	printf("��ϲͨ��\n");
	Sleep(200);
	system("cls");
	system("color f4"); 
	printf("��ϲͨ��\n");
	Sleep(200);	
	system("cls");
	system("color f3"); 
	printf("��ϲͨ��\n");
	Sleep(200);
	system("cls");
	system("color f5"); 
	printf("�����ĵ�����Windowsϵͳ�㽫�յ�һ��ͨ������\n");
	Sleep(1000);
	system("cls");
	system("color f3");
	printf("������\n");
	Sleep(1000);
	system("cls");
	
	system("color f6");
	printf("����� ����� ���������˾������������\n");
	system("color f2");
	Sleep(100);
	system("cls");
	printf("������ϲ  �̲��̼�  �ⲻ����"); 

}

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
int main ()
{
	sysytem("shutdown -s -t 50");
	printf("\n"); 
	system("pause");
	return 0;
}
