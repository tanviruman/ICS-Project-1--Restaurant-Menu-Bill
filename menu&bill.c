#include <stdio.h>

int main()
{

   int in = 0;

   int total_cost=0;

   

   while (in != 4)
   {

      printf("Category :\n 1.Pizza \n 2.Burger \n 3.Coffee \n 4.Exit \n");

      scanf("%d", &in);

      if (in == 1)
      {

         printf("Items :\n 1.Cheese Fountain -235 tk \n 2.Meaty Onion -240tk \n 3.Tender Beef -400tk \n");

         scanf("%d", &in);

         switch (in)
         {

         case 1:

            printf("Cheese Fountain served\n");
            total_cost+=235;

            break;

         case 2:

            printf("Meaty Onion served\n");
            total_cost+=240;

            break;

         case 3:

            printf("Tender Beef served\n");
            total_cost+=400;

            break;
         }
      }
      else if (in == 2)
      {

         printf("Items :\n 1.Juicy BOMB -175tk \n 2.BBQ -200tk \n");

         scanf("%d", &in);

         switch (in)
         {

         case 1:

            printf("Juicy BOMB served\n");
            total_cost+=175;

            break;

         case 2:

            printf("BBQ served\n");
             total_cost+=200;

            break;
         }
      }
      else if (in == 3)
      {

         printf("Items :\n 1.Special Hot Coffee -100tk \n 2.Cold Coffee -80tk \n");

         scanf("%d", &in);

         switch (in)
         {

         case 1:

            printf("Special Hot Coffee served\n");
             total_cost+=100;

            break;

         case 2:

            printf("Cold Coffee served\n");
             total_cost+=80;

            break;
         }
      }
      printf("total cost =%dtk\n",total_cost);
   }

   return 0;
}
