//GM | 15-03-2021
// Write a program to show a pattern like below
//*
//**
//***
//****
//*****
#include<stdio.h>
int main()
{
  int num,row,col;
  printf("Enter number to show a pattern:");
  scanf("%d",&num);
  for(row=0;row<=num;row++)
  {
      for(col=0;col<row;col++)
      {
            printf("%d",col);
      }
      printf("\n");
  }
return 0;
}
