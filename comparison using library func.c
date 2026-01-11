#include<stdio.h>
#include<string.h>
int main()
{
char str1[100],str2[100];
printf("Enter the first string");
gets(str1);
printf("Enter the second string");
gets(str2);
strcmp(str2,str1);
if(strcmp(str1,str2)== 0)
{
printf("Both the strings are equal");
}
else
{
printf("Both the strings are not equal");
}
return 0;
}
