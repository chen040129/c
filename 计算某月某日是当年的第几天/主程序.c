
#include<stdio.h>
void menu() {
	printf("--------------------------------------\n");
	printf("--------------------------------------\n");
	printf("---输入月份日期求该日期在当年的天数----\n");
	printf("--------------------------------------\n");
	printf("--------------------------------------\n");
}
int main() {
	menu();
	int year, mouth, day;
	int date;
	printf("请输入年月日（格式：2004 5 4）\n");
	scanf("%d %d %d", &year,&mouth,&day);
	if (mouth > 12) {
		printf("您输入的月份有误。\n");
		return 0;
	}
	switch (mouth)
	{
	case 1:date=0;
		break;
	case 2:date = 31;
		break;
	case 3:date = 59;
		break;
	case 4:date = 90;
		break;
	case 5:date = 120;
		break;
	case 6:date = 151;
		break;
	case 7:date = 181;
		break;
	case 8:date = 212;
		break;
	case 9:date = 243;
		break;
	case 10:date = 273;
		break;
	case 11:date = 304;
		break;
	case 12:date = 334;
		break;
	default:printf("您输入的月份有误。\n"); break;
	}
	date = date + day;
    if ((mouth == 2 || mouth == 4 || mouth == 6 || mouth == 9 || mouth == 11) && day > 30) {
    printf("您输入的日期或月份有误。\n");
    return 0;
    }
	if ((mouth == 1 || mouth == 3 || mouth == 5 || mouth == 7 || mouth == 8|| mouth == 10|| mouth == 12) && day > 31) {
		printf("您输入的日期或月份有误。\n");
		return 0;
	}
	if ((year % 400 == 0||(year%4==0&&year%100!=0) )&& mouth > 2) {
		date++;
	}

	printf("您输入的日期是%d年的%d天\n",year,date);
	return 0;
}
//输入某年某月某日，判断这一天是这一年的第几天?