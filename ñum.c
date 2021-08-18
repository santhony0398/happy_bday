#include <stdio.h>
#include <math.h>
#include <conio.h>
#include<windows.h>
#include<time.h>
#define U 0.1
#define V 0.053

void SetColor(unsigned short ForeColor,unsigned short BackGroundColor)
{
	HANDLE hCon=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hCon,(ForeColor%16)|(BackGroundColor%16*16));
}

int main()
{
	int i,s=0,t,a=1,b=3,c=9,d=11,e=5;
	int z[] = {32,32,206,210,207,178,187,182,196,227,33,32,32};
	float x,y;
	srand(time(NULL));
	for(y=1.3;y>=-1.1;y-=U)
	{
		for(x=-2;x<1.4;x+=V)
		{
			if((((x*x+y*y-1)*(x*x+y*y-1)*(x*x+y*y-1)-x*x*y*y*y)<=0))
			{
				if(y>=1.3-10*U||y<=1.3-11*U)
				{
				s++;
				if(s%4==1){SetColor(a,0);printf("%c", 164);}
				if(s%4==2){SetColor(e,0);printf("u");}
				if(s%4==3){SetColor(c,0);printf("u");}
				if(s%4==0){SetColor(d,0);printf("m");}

				/**La vida es un laberinto. Algunas personas deambulan toda la vida buscando la salida,
				pero sólo hay un camino que te lleva cada vez más profundo y sólo cuando llevas al centro
				lo entiendes. – Jonas adulto**/

				}
				else
				{
					for(i = 0;i < 42;i++)
					{
						if(i<=14||i>=28)
						{
							s++;
							if(s%4==1){SetColor(a,0);printf("%c", 164);}
							if(s%4==2){SetColor(e,0);printf("u");}
							if(s%4==3){SetColor(c,0);printf("u");}
							if(s%4==0){SetColor(d,0);printf("m");}

							/**Nuestras vidas están conectadas, un destino está ligado al siguiente. Cada uno
							de nuestros actos es meramente una respuesta a un acto anterior: Causa y efecto.
							No es otra cosa que una danza sin fin. Todo está conectado a todo lo demás. – Tannhaus**/
						}
						else if (i==15)
						{
							SetColor(b,0);
							printf("  Happy Bday  ");
							Sleep(50);
						}else{}
					}
					break;
				}
			}
				else
					printf(" ");
					Sleep(1);
		}
	printf("\n");
	}
	printf ("Presione cualquier tecla para continuar ");
	getchar();
	while(1)
	{
				system("cls");
			t=a;a=b;b=c;c=d;d=e;e=t;
			for(y=1.3;y>=-1.1;y-=U)
		{
			for(x=-2;x<1.4;x+=V)
			{
				if((((x*x+y*y-1)*(x*x+y*y-1)*(x*x+y*y-1)-x*x*y*y*y)<=0))
				{
					if(y>=1.3-10*U||y<=1.3-11*U)
					{
					s++;
					if(s%4==1){SetColor(a,0);printf("%c", 164);}
					if(s%4==2){SetColor(b,0);printf("u");}
					if(s%4==3){SetColor(c,0);printf("u");}
					if(s%4==0){SetColor(d,0);printf("m");}

					/**El amor es lo único que somos capaces de percibir que trasciende las dimensiones del tiempo
					y del espacio. -Interstellar**/

					}
					else
					{
						for(i = 0;i < 42;i++)
						{
							if(i<=14||i>=28)
							{
								s++;
								if(s%4==1){SetColor(a,0);printf("%c", 164);}
								if(s%4==2){SetColor(b,0);printf("u");}
								if(s%4==3){SetColor(c,0);printf("u");}
								if(s%4==0){SetColor(d,0);printf("m");}

								/**Quizá el amor nunca sea la opción más científica, pero siempre será la más
								esperanzadora ante la ignorancia. -Interstellar**/

							}
							else if (i==15)
                            {
                                SetColor(b,0);
                                printf("  Happy Bday  ");
                                Sleep(50);
                            }else{}
						}
						break;
					}
				}
					else
						printf(" ");
			}
				printf("\n");
		}
			Sleep(1000);
			system("cls");

	}

	/**¿A donde vamos? ¿Quienes somos? ¿Porqué estamos aquí?**/
}
