#include <stdio.h>


int main(int argc, char *argv[])
{
  
  if(argc>3||argc<3)
  {
  	printf("usage ./file firstname lastname");
   
  }
  else
  {
  	printf("hello %s ",argv[1]);

  }
  return 0;
}