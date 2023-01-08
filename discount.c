#include <stdio.h>

int main()
{
    float dsc;
    float sub;
    float price;
    float temp;
    
    printf("Enter original price: ");
    scanf("%f", &price);
    printf("Enter discount: ");
    scanf("%f", &dsc);
    printf("\n");
    
    sub = (dsc / 100.0) * price;
    temp = (dsc / 100.0) * price;
    sub = price - sub;
    printf("Price after discount: %.2f\n", sub);
    printf("You save: %.2f\n", temp);
    
    return 0;
}
