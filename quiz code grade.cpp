#include <stdio.h>
int main(){

int grade;
printf("Enter your Grade to know you are pass or fail: ");
scanf("%d",&grade);
if(grade<50){
	printf("\nYou are failed");
	
}
else{
	printf("\nCongrats you passed");
}
return 0;
}
