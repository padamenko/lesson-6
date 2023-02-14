#include <stdio.h>


main()
{
	int d,m,y;
	printf("Enter your birth date \n");
	printf("year= ");
	scanf("%i", &y);
	printf("month= ");
	scanf("%i", &m);
	printf("day= ");
	scanf("%i", &d);
	
	//check leap year
	if(y%4==0)
	{
		printf("leap year \n");
	}
	
	//check chines calendar
	int china = y%12;
	printf("Chines calendar: ");
	switch(china)
	{
		case 0:
			{
				printf("Monkey");
			}
			break;
		case 1:
			{
				printf("Chicken");
			}
			break;
		case 2:
			{
				printf("Dog");
			}
			break;
		case 3:
			{
				printf("Pig");
			}
			break;
		case 4:
			{
				printf("Rat");
			}
			break;
		case 5:
			{
				printf("Bull");
			}
			break;
		case 6:
			{
				printf("Tiger");
			}
			break;
		case 7:
			{
				printf("Rabbit");
			}
			break;
		case 8:
			{
				printf("Dragon");
			}
			break;
		case 9:
			{
				printf("Snake");
			}
			break;
		case 10:
			{
				printf("Horse");
			}
			break;
		case 11:
			{
				printf("Goat");
			}
			break;
		default:
			{
				printf("Error");
			}
	}
	
	//check zodiac	
	printf("\nZodiac:");
	if((m==12&&d>21)||(m==1&&d<21))
	{
		printf("Capricorn");
	}
	if((m==1&&d>20)||(m==2&&d<19))
	{
		printf("Aquarius");
	}
	if((m==2&&d>18)||(m==3&&d<21))
	{
		printf("Fish");
	}
	if((m==3&&d>20)||(m==4&&d<21))
	{
		printf("Aries");
	}
	if((m==4&&d>20)||(m==5&&d<22))
	{
		printf("Taurus");
	}
	if((m==5&&d>21)||(m==6&&d<22))
	{
		printf("Twins");
	}
	if((m==6&&d>21)||(m==7&&d<23))
	{
		printf("Cancer");
	}
	if((m==7&&d>22)||(m==8&&d<24))
	{
		printf("Lion");
	}
	if((m==8&&d>23)||(m==9&&d<23))
	{
		printf("Virgo");
	}
	if((m==9&&d>22)||(m==10&&d<24))
	{
		printf("Libra");
	}
	if((m==10&&d>23)||(m==1&&d<23))
	{
		printf("Scorpion");
	}
	if((m==11&&d>22)||(m==12&&d<22))
	{
		printf("Sagittarius");
	}
}
