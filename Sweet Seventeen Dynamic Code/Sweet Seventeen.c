//This Program is made by Mr KT
//This program is asked in TCS NQT 2020 SHIFT 3

// Sweet Seventeen
// WAP for base 17 that will have input of length 4
#include<stdio.h>
#include<math.h>
void main()
{
	char name[1000000];
	int i=0,len,sum,j;
	scanf("%s",name);
	j=strlen(name)-1;
	while(name[i]!=NULL)
	{
		sum+=kt(name[i])* pow(17,j);
	i++;
	j--;
	}
	printf("%d",sum);
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