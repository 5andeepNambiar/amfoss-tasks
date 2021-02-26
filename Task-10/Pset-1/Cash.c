#include<stdio.h>
#include<cs50.h>
#include<math.h>
int main(void)
{
  float change;
  int coins = 0;
  int Amount;

   do
   {
     change = get_float("change owed = ");
   }while(change<0);

      Amount = round(change * 100);


    while(Amount >= 0.25)
    {
       coins++;
       Amount -= 0.25;
    }

   while(Amount >= 0.10)
    {
       coins++;
       Amount -= 0.10;
    }

     while(Amount >= 0.05)
    {
       coins++;
       Amount -= 0.05;
    }

     while(Amount >= 0.01)
    {
       coins++;
       Amount -= 0.01;
    }

    printf("Coins used: %i\n", coins);
}