#include<stdio.h>
#include<ctype.h>
int main()
{
	char alpha;
	printf("Enter any character to check if it uppercased or not: ");
	scanf("%c",&alpha);
	if(isupper(alpha)){
    printf("it is an upper cased letter");
}
else{
	printf("it i a lower case letter");
}
		
return 0;
	}

