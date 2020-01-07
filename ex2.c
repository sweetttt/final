#include "stdio.h"
#include "string.h"
void inverse(char str[])
{
   int i,length;
   char tmp;
   length=strlen(str);
   for(i=0;i<length/2;i++)
   {
      tmp=str[i];
      str[i]=str[length-1-i];
      str[length-1-i]=tmp;
   }
}
void main()
{
   char ch[80];
   printf("请输入一个字符串:");
   gets(ch);
   inverse(ch);
   printf("逆序存储后的字符串为:");
   puts(ch);
}