#include<stdio.h>
int main()
{
char str1[100],str2[100];
int i=0,flag = 0;
printf("Enter the first string");
gets(str1);
printf("Enter the second string");
gets(str2);
while(str1[i]!='\0' || str2[i]!='\0')
{
if(str1[i]!=str2[i])
{
flag=1;//1 value of flag indicate that the given condition is true
break;
}
i++;
}
if(flag==0)
{
printf("Both the string are equal");
}else{
printf("Both the string are not equal");
}
return 0;
}
