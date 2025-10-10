#include<stdio.h>
#include<math.h>

int main(){

    int quantity_tv = 0;
    int quantity_fridge = 2;
    int quantity_washing_machine = 3;

    while (quantity_tv > 0 || quantity_fridge > 0 || quantity_washing_machine > 0){
        printf("----------------------------------------\n");
        int ordered_product;
        printf("Enter ordered product:\n 1. TV\n 2. Refrigerator\n 3. Washing machine\n");
        scanf("%d", &ordered_product);
        int out_of_stock = 0;
        if (ordered_product == 1){
            if (quantity_tv > 0){
                quantity_tv--;
                printf("Order successful, generate shipping order\n");
            }
            else{
                printf("Out of stock\n");
                out_of_stock = 1;
            }
        }
        else if (ordered_product == 2){
            if (quantity_fridge > 0){
                quantity_fridge--;
                printf("Order successful, generate shipping order\n");
            }
            else{
                printf("Out of stock\n");
                out_of_stock = 1;
            }
        }
        else if (ordered_product == 3){
            if (quantity_washing_machine > 0){
                quantity_washing_machine--;
                printf("Order successful, generate shipping order\n");
            }
            else{
                printf("Out of stock\n");
                out_of_stock = 1;
            }
        }
        else{
            printf("Invalid product\n");
        }

        if (out_of_stock){
            printf("You can order other products (1), or cancel (2):\n");
            int choice;
            scanf("%d", &choice);
            if (choice == 2){
                break;
            }
        }
        else{
            printf("You can continue ordering (1), or cancel (2):\n");
            int choice;
            scanf("%d", &choice);
            if (choice == 2){
                break;
            }
        }
    }
    

    return 0;
}