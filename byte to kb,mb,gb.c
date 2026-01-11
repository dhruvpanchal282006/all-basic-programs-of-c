#include<stdio.h>
int main()
{
long long bytes;
double kb,mb,gb;
printf("Enter the number of bytes");
scanf("lld",&bytes);
kb=bytes/1024.0;
mb=kb/1024.0;
gb=mb/1024.0;
printf("kilobytes=%.2f kb\n",kb);
printf("megabytes=%.2f mb\n",mb);
printf("gigabyte=%.2f gb\n",gb);
return 0;
}
