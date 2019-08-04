//This Program is made by Mr KT
//This program is asked in TCS NQT 2020 SHIFT 3

// Sweet Seventeen
// WAP for base 17 that will have input of length 4
#include<stdio.h>
void main()
{
	char name[4];
	int i=0,len,sum;
	scanf("%s",name);
	len=strlen(name);
	if(len==1) 
	{
		printf("%d",kt(name[i]));
	}
	else if(len==2) 
	{
		sum=kt(name[0])*17 + kt(name[1]);		
		printf("%d",sum);
	}
	else if(len==3) 
	{
		sum=kt(name[0])*pow(17,2) + kt(name[1])*17 + kt(name[1])*17 ;		
		printf("%d",sum);
	}
	else if(len==4) 
	{
		sum=kt(name[0])*pow(17,3) + kt(name[1])*pow(17,2) + kt(name[2])*17 + kt(name[3]) ;		
		printf("%d",sum);
	}
	
	return 0;
}
int kt(alp)
{
  char c=alp;	
	switch(c) 
	{
		case 'A':
					return 10;
					break;
		case 'B':
		return 11;
		break;
		case 'C':
		return 12;
		break;
		case 'D':
		return 13;
		break;case 'E':
		return 14;
		break;case 'F':
		return 15;
		break;case 'G':
		return 16;
		break;
		case'1':
		return 1;
		break;
		case '2':
		return 2;
		break;case '3':
		return 3;
		break;case '4':
		return 4;
		break;case '5':
		return 5;
		break;
		case '6':
		return 6;
		break;
		case '7':
		return 7;
		break;case '8':
		return 8;
		break;case '9':
		return 9;
		break;
		default:
		return 0;
		break;
	}
}