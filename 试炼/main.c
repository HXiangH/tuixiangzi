#include <stdio.h>
#include <stdlib.h>
void map1();
void map2();
void map3();
void show();
void move();
void main(int argc, char*argv[])
{
	time_t a, b;
	time(&a);
	system("color 1E");
loop1: {
	system("cls");//刷屏
	printf("\n\n\n\n\n\n\t\t\t\t欢迎进入推箱子游戏\n\n\t\t\t\t 请按a b c选择游戏\n\n\t\t\t\t   按 d 键 结束");
	int t = getch();
	if (t == 'd')
	{
		printf("\n\t\t\t     ");
	}
	else
	{
		if (t == 'a')
		{
			map1();
			goto  loop1;
		}
		if (t == 'b')
		{
			map2();
			goto  loop1;
		}
		if (t == 'c')
		{
			map3();
			goto  loop1;
		}
		else
		{
			printf("\n\n\t\t\t\t   请重新输入:");
			goto  loop1;
		}
	}
	}
	   time(&b);
	   printf("\n\n\n\n\t\t\t\t 游戏总共用时%.3d秒\n\t\t\t     ", b - a);
	   getch();//等待读取回车符以结束程序
}
void map1()
{
	time_t p, q, o;
	time(&p);
	int i = 4, j = 4, m = 6, n = 2, t = 1, k = 3;
	system("cls");//刷屏
	system("color 2E");
	int x = 1, y = 7;
	char z, a[9][9] =
	{    /*为背景设置初始资料*/
		{'#','#','#','#','#','#','#','#','#'},
		{'#','#','#', 3, 0 , 0 , 0 , 1 ,'#'},
		{'#','#', 0 , 0 , 0 ,'#', 0 ,'#','#'},
		{'#', 0 , 0 ,'#', 0 , 0 , 5 , 0 ,'#'},
		{'#', 0 , 5 , 5 , 3 , 0 , 0 , 0 ,'#'},
		{'#','#', 0 ,'#', 0 , 0 ,'#','#','#'},
		{'#','#', 3 , 0 , 0 , 0 ,'#','#','#'},
		{'#','#','#','#','#','#','#','#','#'},
		{'#','#','#','#','#','#','#','#','#'}
	};
	show(a);//调用输出函数
loop://语句标号
	move(a, &x, &y, i, j, m, n, t, k, &z);
	if (a[i][j] == '!'&&a[m][n] == '!'&&a[t][k] == '!')
	{
		system("cls");//刷屏
		show(a);
		printf("\t\t\t\t         YOU ARE WIN!\n");
		time(&q);
		printf("\t\t\t\t\t  用时%.3d秒\n", q - p);
		printf("\t\t\t\t*******回车重 新选择*******\n\t\t\t\t");
		getch();
	}
	else
	{
		time(&o);
		if (z == 'd')
		{
			return;
		}
		if (o - p > 30)
		{
		loop1:		system("cls");//刷屏
			printf("\t\t\t\t时间已过请重新回车选关!");
			int g = getch();
			if (g == 13)//判断是否为回车符
			{
				return;
			}
			else
			{
				goto loop1;
			}
		}
		system("cls");//刷屏
		show(a);//调用输出函数
		goto loop;
	}
}
void map2()
{
	time_t p, q, o;
	time(&p);
	int i = 2, j = 1, m = 1, n = 3, t = 4, k = 6;
	system("cls");//刷屏
	system("color 2E");
	int x = 4, y = 1;
	char z, b[9][9] =
	{    /*为背景设置初始资料*/
		{'#','#','#','#','#','#','#','#','#'},
		{'#','#','#', 3 , 0 ,'#','#','#','#'},
		{'#', 3 ,'#', 0 , 0 , 0 , 0 ,'#','#'},
		{'#', 0 , 5 , 0 ,'#','#', 0 , 0 ,'#'},
		{'#', 1 , 0 , 5 , 0 , 0 , 3 , 0 ,'#'},
		{'#', 0 , 0 , 0 , 0 , 0 , 0 ,'#','#'},
		{'#','#','#', 0 , 0 , 5 ,'#','#','#'},
		{'#','#','#','#', 0 , 0 ,'#','#','#'},
		{'#','#','#','#','#','#','#','#','#'}
	};
	show(b);//调用输出函数
loop://语句标号
	move(b, &x, &y, i, j, m, n, t, k, &z);
	if (b[i][j] == '!'&&b[m][n] == '!'&&b[t][k] == '!')
	{
		system("cls");//刷屏
		show(b);
		printf("\t\t\t\t         YOU ARE WIN!\n");
		time(&q);
		printf("\t\t\t\t\t  用时%.3d秒\n", q - p);
		printf("\t\t\t\t*******回车重 新选择*******\n\t\t\t\t");
		getch();
	}
	else
	{
		time(&o);
		if (z == 'd')
		{
			return;
		}
		if (o - p > 30)
		{
		loop1:		system("cls");//刷屏
			printf("\t\t\t\t时间已过请重新回车选关!");
			int g = getch();
			if (g == 13)//判断是否为回车符
			{
				return;
			}
			else
			{
				goto loop1;
			}
		}
		system("cls");//刷屏
		show(b);//调用输出函数
		goto loop;
	}
}
void map3()
{
	time_t p, q, o;
	time(&p);
	int i = 2, j = 1, m = 6, n = 2, t = 7, k = 6;
	system("cls");//刷屏
	system("color 2E");
	int x = 3, y = 6;
	char z, c[9][9] =
	{    /*为背景设置初始资料*/
	{'#','#','#','#','#','#','#','#','#'},
	{'#','#','#','#','#', 0 , 0 , 0 ,'#'},
	{'#', 3 ,'#', 0 , 0 , 0 , 0 , 0 ,'#'},
	{'#', 0 , 5 , 0 , 5 ,'#', 1 ,'#','#'},
	{'#', 0 , 0 , 0 , 0 , 0 , 5 , 0 ,'#'},
	{'#','#', 0 , 0 , 0 , 0 , 0 , 0 ,'#'},
	{'#','#', 3 , 0 ,'#', 0 ,'#', 0 ,'#'},
	{'#','#','#', 0 , 0 , 0 , 3 ,'#','#'},
	{'#','#','#','#','#','#','#','#','#'}
	};
	show(c);//调用输出函数
loop://语句标号
	move(c, &x, &y, i, j, m, n, t, k, &z);
	if (c[i][j] == '!'&&c[m][n] == '!'&&c[t][k] == '!')
	{
		system("cls");//刷屏
		show(c);
		printf("\t\t\t\t         YOU ARE WIN!\n");
		time(&q);
		printf("\t\t\t\t\t  用时%.3d秒\n", q - p);
		printf("\t\t\t\t*******回车重 新选择*******\n\t\t\t\t");
		getch();
	}
	else
	{
		time(&o);
		if (z == 'd')
		{
			return;
		}
		if (o - p > 30)
		{
		loop1:		system("cls");//刷屏
			printf("\t\t\t\t时间已过请重新回车选关!");
			int g = getch();
			if (g == 13)//判断是否为回车符
			{
				return;
			}
			else
			{
				goto loop1;
			}
		}
		system("cls");//刷屏
		show(c);//调用输出函数
		goto loop;
	}
}
void show(char b[9][9])
{
	printf("\t\t\t\t***************************\n");
	printf("\t\t\t\t        推箱子游戏       ");
	printf("\n\t\t\t\t***************************\n");
	printf("\t\t\t\t  人:★       墙:■\n\t\t\t\t  箱子:◎     目的地:□\n\t\t\t\t  按 d 键 退出游戏\n\t\t\t\t  限时30秒!");
	printf("\n\t\t\t\t***************************\n");
	int i;
	int k;
	for (i = 0; i < 9; i++)                 //使用循环将地图转换输出
	{
		printf("\t\t\t\t     ");
		for (k = 0; k < 9; k++)
		{
			if (b[i][k] == '#')
			{
				printf("■");
			}
			else
			{
				if (b[i][k] == 3)
				{
					printf("□");
				}
				else
				{
					if (b[i][k] == 5)
					{
						printf("◎");
					}
					else
					{
						if (b[i][k] == 1)
						{
							printf("★");
						}
						else
						{
							if (b[i][k] == 0)
							{
								printf("  ");
							}
							else
							{
								if (b[i][k] == '!')
								{
									printf("⊙");
								}
								else
									printf("%c ", b[i][k]);
							}
						}
					}
				}
			}
		}
		printf("\n");
	}
	printf("\t\t\t\t***************************\n");
}
void move(char c[9][9], int *x, int *y, int X, int Y, int A, int B, int N, int M, char *t)
{
	*t = getch();//用getch()得到上下左右键，要调用二次getch(),上键72，下键80，左键75，右键77.
	if (*t == 'd') {}//遇到d返回
	if (*t == 75)//左键
	{
		if (c[*x][*y - 1] == '#' || c[*x][*y - 1] == 5 && c[*x][*y - 2] == 5
			|| c[*x][*y - 1] == 5 && c[*x][*y - 2] == '!') {
		}//遇到墙或推两个箱子

		else
		{
			if (c[*x][*y - 1] == '!')//把箱子推出目的地
			{
				if (c[*x][*y - 2] != 0) {}
				else
				{
					c[*x][*y] = 0;
					*y -= 1;
					c[*x][*y] = 1;
					c[*x][*y - 1] = 5;
				}
			}
			else
			{
				if (c[*x][*y - 1] == 5 && c[*x][*y - 2] != '#')//推箱子
				{
					if (c[*x][*y] == c[X][Y] || c[*x][*y] == c[A][B]
						|| c[*x][*y] == c[N][M]) //推着箱子离开目的地
					{
						c[*x][*y] = 3;
						*y -= 1;
						c[*x][*y] = 1;
						c[*x][*y - 1] = 5;
					}
					else
					{
						c[*x][*y] = 0;
						*y -= 1;
						c[*x][*y] = 1;
						c[*x][*y - 1] = 5;
					}
				}
				else
				{
					if (c[*x][*y - 1] == 5 && c[*x][*y - 2] == '#') {}//推不动箱子
					else
					{
						if (c[*x][*y - 1] == c[X][Y] || c[*x][*y - 1] == c[A][B]
							|| c[*x][*y - 1] == c[N][M])//进到目的地
						{
							c[*x][*y] = 0;
							*y -= 1;
							c[*x][*y] = 1;
						}
						else
						{
							if (c[*x][*y] == c[X][Y] || c[*x][*y] == c[A][B]
								|| c[*x][*y] == c[N][M])   //离开目的地
							{
								c[*x][*y] = 3;
								*y -= 1;
								c[*x][*y] = 1;
							}
							else  //走到空地
							{
								c[*x][*y] = 0;
								*y -= 1;
								c[*x][*y] = 1;
							}
						}
					}
				}
			}
		}
		if (c[X][Y] == 5 || c[A][B] == 5 || c[N][M] == 5)//箱子推到目的地
		{
			c[*x][*y - 1] = '!';
		}
	}
	if (*t == 77)//右键
	{
		if (c[*x][*y + 1] == '#' || c[*x][*y + 1] == 5 && c[*x][*y + 2] == 5
			|| c[*x][*y + 1] == 5 && c[*x][*y + 2] == '!') {
		}//遇到墙或推两个箱子

		else
		{
			if (c[*x][*y + 1] == '!')//把箱子推出目的地
			{
				if (c[*x][*y + 2] != 0) {}
				else
				{
					c[*x][*y] = 0;
					*y += 1;
					c[*x][*y] = 1;
					c[*x][*y + 1] = 5;
				}
			}
			else
			{
				if (c[*x][*y + 1] == 5 && c[*x][*y + 2] != '#')//推箱子
				{
					if (c[*x][*y] == c[X][Y] || c[*x][*y] == c[A][B]
						|| c[*x][*y] == c[N][M]) //推着箱子离开目的地
					{
						c[*x][*y] = 3;
						*y += 1;
						c[*x][*y] = 1;
						c[*x][*y + 1] = 5;
					}
					else
					{
						c[*x][*y] = 0;
						*y += 1;
						c[*x][*y] = 1;
						c[*x][*y + 1] = 5;
					}
				}
				else
				{
					if (c[*x][*y + 1] == 5 && c[*x][*y + 2] == '#') {}//推不动箱子
					else
					{
						if (c[*x][*y + 1] == c[X][Y] || c[*x][*y + 1] == c[A][B]
							|| c[*x][*y + 1] == c[N][M])//进到目的地
						{
							c[*x][*y] = 0;
							*y += 1;
							c[*x][*y] = 1;
						}
						else
						{
							if (c[*x][*y] == c[X][Y] || c[*x][*y] == c[A][B]
								|| c[*x][*y] == c[N][M])   //离开目的地
							{
								c[*x][*y] = 3;
								*y += 1;
								c[*x][*y] = 1;
							}
							else  //走到空地
							{
								c[*x][*y] = 0;
								*y += 1;
								c[*x][*y] = 1;
							}
						}
					}
				}
			}
		}
		if (c[X][Y] == 5 || c[A][B] == 5 || c[N][M] == 5)//箱子推到目的地
		{
			c[*x][*y + 1] = '!';
		}
	}
	if (*t == 72)//上键
	{
		if (c[*x - 1][*y] == '#' || c[*x - 1][*y] == 5 && c[*x - 2][*y] == 5
			|| c[*x - 1][*y] == 5 && c[*x - 2][*y] == '!') {
		}//遇到墙或推两个箱子

		else
		{
			if (c[*x - 1][*y] == '!')//把箱子推出目的地
			{
				if (c[*x - 2][*y] != 0) {}
				else
				{
					c[*x][*y] = 0;
					*x -= 1;
					c[*x][*y] = 1;
					c[*x - 1][*y] = 5;
				}
			}
			else
			{
				if (c[*x - 1][*y] == 5 && c[*x - 2][*y] != '#')//推箱子
				{
					if (c[*x][*y] == c[X][Y] || c[*x][*y] == c[A][B]
						|| c[*x][*y] == c[N][M]) //推着箱子离开目的地
					{
						c[*x][*y] = 3;
						*x -= 1;
						c[*x][*y] = 1;
						c[*x - 1][*y] = 5;
					}
					else
					{
						c[*x][*y] = 0;
						*x -= 1;
						c[*x][*y] = 1;
						c[*x - 1][*y] = 5;
					}
				}
				else
				{
					if (c[*x - 1][*y] == 5 && c[*x - 2][*y] == '#') {}//推不动箱子
					else
					{
						if (c[*x - 1][*y] == c[X][Y] || c[*x - 1][*y] == c[A][B]
							|| c[*x - 1][*y] == c[N][M])//进到目的地
						{
							c[*x][*y] = 0;
							*x -= 1;
							c[*x][*y] = 1;
						}
						else
						{
							if (c[*x][*y] == c[X][Y] || c[*x][*y] == c[A][B]
								|| c[*x][*y] == c[N][M])   //离开目的地
							{
								c[*x][*y] = 3;
								*x -= 1;
								c[*x][*y] = 1;
							}
							else  //走到空地
							{
								c[*x][*y] = 0;
								*x -= 1;
								c[*x][*y] = 1;
							}
						}
					}
				}
			}
		}
		if (c[X][Y] == 5 || c[A][B] == 5 || c[N][M] == 5)//箱子推到目的地
		{
			c[*x - 1][*y] = '!';
		}
	}
	if (*t == 80)//下键
	{
		if (c[*x + 1][*y] == '#' || c[*x + 1][*y] == 5 && c[*x + 2][*y] == 5
			|| c[*x + 1][*y] == 5 && c[*x + 2][*y] == '!') {
		}//遇到墙或推两个箱子

		else
		{
			if (c[*x + 1][*y] == '!')//把箱子推出目的地
			{
				if (c[*x + 2][*y] != 0) {}
				else
				{
					c[*x][*y] = 0;
					*x += 1;
					c[*x][*y] = 1;
					c[*x + 1][*y] = 5;
				}
			}
			else
			{
				if (c[*x + 1][*y] == 5 && c[*x + 2][*y] != '#')//推箱子
				{
					if (c[*x][*y] == c[X][Y] || c[*x][*y] == c[A][B]
						|| c[*x][*y] == c[N][M]) //推着箱子离开目的地
					{
						c[*x][*y] = 3;
						*x += 1;
						c[*x][*y] = 1;
						c[*x + 1][*y] = 5;
					}
					else
					{
						c[*x][*y] = 0;
						*x += 1;
						c[*x][*y] = 1;
						c[*x + 1][*y] = 5;
					}
				}
				else
				{
					if (c[*x + 1][*y] == 5 && c[*x + 2][*y] == '#') {}//推不动箱子
					else
					{
						if (c[*x + 1][*y] == c[X][Y] || c[*x + 1][*y] == c[A][B]
							|| c[*x + 1][*y] == c[N][M])//进到目的地
						{
							c[*x][*y] = 0;
							*x += 1;
							c[*x][*y] = 1;
						}
						else
						{
							if (c[*x][*y] == c[X][Y] || c[*x][*y] == c[A][B]
								|| c[*x][*y] == c[N][M])   //离开目的地
							{
								c[*x][*y] = 3;
								*x += 1;
								c[*x][*y] = 1;
							}
							else  //走到空地
							{
								c[*x][*y] = 0;
								*x += 1;
								c[*x][*y] = 1;
							}
						}
					}
				}
			}
		}
		if (c[X][Y] == 5 || c[A][B] == 5 || c[N][M] == 5)//箱子推到目的地
		{
			c[*x + 1][*y] = '!';

		}
	}
}