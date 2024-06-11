# Menu Selection Program 
## Introduction
This document provides a detailed explanation of the code that implements a simple menu selection program in C. The program allows users to select items from different categories (Pizza, Burger, Coffee) and calculates the total cost of the selected items.

## Code Explanation

### Includes
```c
#include <stdio.h>
```
- The program includes the standard input-output library to handle user inputs and outputs.

### Main Function
```c
int main()
{
   int in = 0;
   int total_cost = 0;

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
            total_cost += 235;
            break;
         case 2:
            printf("Meaty Onion served\n");
            total_cost += 240;
            break;
         case 3:
            printf("Tender Beef served\n");
            total_cost += 400;
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
            total_cost += 175;
            break;
         case 2:
            printf("BBQ served\n");
            total_cost += 200;
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
            total_cost += 100;
            break;
         case 2:
            printf("Cold Coffee served\n");
            total_cost += 80;
            break;
         }
      }
      printf("total cost = %dtk\n", total_cost);
   }

   return 0;
}
```

### Variables
- `int in = 0;`
  - This variable stores the user's input for menu selection.
  
- `int total_cost = 0;`
  - This variable keeps track of the total cost of the items selected by the user.

### Menu Loop
The program runs a loop that continuously prompts the user to select a category and an item until the user decides to exit.

```c
while (in != 4)
{
    printf("Category :\n 1.Pizza \n 2.Burger \n 3.Coffee \n 4.Exit \n");
    scanf("%d", &in);
```
- The loop continues as long as the user does not choose option 4 (Exit).

### Category and Item Selection
Depending on the user's input, the program displays a list of items within the selected category. The user then selects an item, and the program updates the total cost accordingly.

#### Pizza Category
```c
if (in == 1)
{
    printf("Items :\n 1.Cheese Fountain -235 tk \n 2.Meaty Onion -240tk \n 3.Tender Beef -400tk \n");
    scanf("%d", &in);

    switch (in)
    {
    case 1:
        printf("Cheese Fountain served\n");
        total_cost += 235;
        break;
    case 2:
        printf("Meaty Onion served\n");
        total_cost += 240;
        break;
    case 3:
        printf("Tender Beef served\n");
        total_cost += 400;
        break;
    }
}
```
- If the user selects the Pizza category, they are presented with three pizza options. Based on the user's selection, the corresponding item is served, and its cost is added to `total_cost`.

#### Burger Category
```c
else if (in == 2)
{
    printf("Items :\n 1.Juicy BOMB -175tk \n 2.BBQ -200tk \n");
    scanf("%d", &in);

    switch (in)
    {
    case 1:
        printf("Juicy BOMB served\n");
        total_cost += 175;
        break;
    case 2:
        printf("BBQ served\n");
        total_cost += 200;
        break;
    }
}
```
- If the user selects the Burger category, they are presented with two burger options. Based on the user's selection, the corresponding item is served, and its cost is added to `total_cost`.

#### Coffee Category
```c
else if (in == 3)
{
    printf("Items :\n 1.Special Hot Coffee -100tk \n 2.Cold Coffee -80tk \n");
    scanf("%d", &in);

    switch (in)
    {
    case 1:
        printf("Special Hot Coffee served\n");
        total_cost += 100;
        break;
    case 2:
        printf("Cold Coffee served\n");
        total_cost += 80;
        break;
    }
}
```
- If the user selects the Coffee category, they are presented with two coffee options. Based on the user's selection, the corresponding item is served, and its cost is added to `total_cost`.

### Total Cost Display
After each item selection, the program prints the current total cost.
```c
printf("total cost = %dtk\n", total_cost);
```

### Program Exit
The program exits the loop and terminates when the user selects the Exit option.

```c
return 0;
```
- The main function returns 0, indicating successful execution of the program.

## Conclusion
This program provides a simple way to navigate through a menu, select items, and calculate the total cost. The use of loops, conditional statements, and switch cases makes the code easy to understand and extend for more categories or items.
