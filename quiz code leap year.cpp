#include<stdio.h>
int main(){

int days;
printf("Enter the days in the year to check leap year: ");
scanf("%d",&days);
if (days>=366){

printf("It is a leap year");
}
else{
	printf("It is not a leap year");
	
}
return 0;
}
