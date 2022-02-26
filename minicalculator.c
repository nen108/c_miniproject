#include <stdio.h>


int  ft_atoi(char *str)
{
   int i;
   int res;
   int rev;

   i=0;
   res=0;
   rev = 1;
   while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
      i++;
   while (str[i] == '-' || str[i] == '+')
   {
      if(str[i++] == '-')
      {
         rev*=-1;
      }
   }
   while(str[i] >= '0' && str[i] <= '9')
   {
      res = res * 10 + str[i++] - 48;
   }
   return (res*rev);
}

int  add(int a, int b)
{
   return (a+b);
}

int  sub(int a, int b)
{
   return (a-b);
}

int  mult(int a, int b)
{
   return (a*b);
}

int  div(int a,int b)
{
    return (a/b);
}


int   main(int argc, char *argv[])
{
   if (argc == 4)
   {
      if (argv[2][0] == '+' || argv[2][1] == '+')
      {
         printf("answer = %d\n", add(ft_atoi(argv[1]) ,ft_atoi(argv[3])));
      }
      else if (argv[2][0] == '-' || argv[2][1] == '-')
      {
         printf("answer = %d\n", sub(ft_atoi(argv[1]) ,ft_atoi(argv[3])));
      }
      else if (argv[2][1] == '*')
      {
         printf("answer = %d\n", mult(ft_atoi(argv[1]) ,ft_atoi(argv[3])));
      }
      else if(argv[2][0] == '/' || argv[2][1] == '/')
      {
         if(ft_atoi(argv[3])!= 0)
         {
         printf("answer = %d\n", div(ft_atoi(argv[1]) ,ft_atoi(argv[3])));
         }
         else{
            printf("error\n");
         }
      }
   }
   return (0);
}