//calculate the string length using recursion


#include<stdio.h>

int CalculateLen(char *Str)
{
  static int iCount = 0;
   if(*Str != '\0')
   {
       iCount++;
	   Str++;
	   CalculateLen(Str);
   }
   return iCount;
}

int main()
{
  char carr[30];
  int iRet = 0;
  
  printf("Enter The String \n");
  scanf("%[^'\n']s",carr);
  
  iRet = CalculateLen(carr);
  
  printf("Length of the string is :%d",iRet);

return 0;
}

/*
output

Enter The String
nikita
Length of the string is :6
D:\ProgramTopicWise\LB\7Recursion\CalStrLengthByRecursion>myexe
Enter The String
nikita raut
Length of the string is :11

*/