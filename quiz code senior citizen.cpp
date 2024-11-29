#include <stdio.h>
int main()
{
	int age;
	printf("Enter your age to know if you are eligible for senior citezen discount: ");
	scanf("%d",&age);
	if(age>=65){
	printf("\nYou are eligible for senior citezen discount");
}
else{
	printf("\nYou are not eligible for senior citezen discount");
}
	
	return 0;
}
