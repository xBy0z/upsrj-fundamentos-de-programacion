#include <stdio.h>

float area(float side)
{
    float a = side * side;
    return a;
}



int main()
{
    int side = 0;

   printf("Enter the side length: ");
   scanf("%i", &side);


    int a = area(side);

    printf("square area: %i\n", a);
    
    
    return 0;

}