#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
int main ()
{
	system("color f5");
	printf("\n\n\n\n\n\n\n     走迷宫  方向键 wsad\n"); 
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
	printf("你一共走了%d步",c);
	Sleep(1000);		
	system("cls");
	system("color f7"); 
	printf("恭喜通关\n");
	Sleep(200);	
	system("cls");
	system("color f6"); 
	printf("恭喜通关\n");
	Sleep(200);	
	system("cls");
	system("color f2"); 
	printf("恭喜通关\n");
	Sleep(200);	
	system("cls");
	system("color f5"); 
	printf("恭喜通关\n");
	Sleep(200);
	system("cls");
	system("color f4"); 
	printf("恭喜通关\n");
	Sleep(200);	
	system("cls");
	system("color f3"); 
	printf("恭喜通关\n");
	Sleep(200);
	system("cls");
	system("color f5"); 
	printf("如果你的电脑是Windows系统你将收到一份通关礼物\n");
	Sleep(1000);
	system("cls");
	system("color f3");
	printf("礼物是\n");
	Sleep(1000);
	system("cls");
	
	system("color f6");
	printf("不会吧 不会吧 不会真有人觉得这是礼物吧\n");
	system("color f2");
	Sleep(100);
	system("cls");
	printf("惊不惊喜  刺不刺激  意不意外"); 

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
