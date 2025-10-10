#include<stdio.h>
#include<math.h>

int main(){
    double laptop_price = 999.99;
    int laptop_qty = 1;
    double mouse_price = 25.50;
    int mouse_qty = 2;
    double keyboard_price = 75.00;
    int keyboard_qty = 1;
    
    printf("=== SHOPPING CART REVIEW ===\n");
    printf("Item Price tSubtotal\n");
    printf("----------------------------------------\n");
    
    double laptop_subtotal = laptop_price * laptop_qty;
    double mouse_subtotal = mouse_price * mouse_qty;
    double keyboard_subtotal = keyboard_price * keyboard_qty;
    double total = laptop_subtotal + mouse_subtotal + keyboard_subtotal;
    
    printf("Laptop: $%.2f %dx = $%.2f\n", laptop_price, laptop_qty, laptop_subtotal);
    printf("Mouse: $%.2f %dx = $%.2f\n", mouse_price, mouse_qty, mouse_subtotal);
    printf("Keyboard: $%.2f %dx = $%.2f\n", keyboard_price, keyboard_qty, keyboard_subtotal);
    
    printf("----------------------------------------\n");
    printf("Total: $%.2f\n\n", total);
    
    // Discount code section
    printf("Do you have a discount code? (1-Yes, 2-No): ");
    int has_discount;
    scanf("%d", &has_discount);
    
    double discount = 0.0;
    if(has_discount == 1){
        printf("Enter discount code (e.g 10, 20,..): ");
        int discount_code;
        scanf("%d", &discount_code);
        
        if(discount_code == 10){
            discount = total * 0.10;
            printf("10%% discount applied! You save $%.2f\n", discount);
        }
        else if(discount_code == 20){
            discount = total * 0.20;
            printf("20%% discount applied! You save $%.2f\n", discount);
        }
        else{
            printf("Invalid discount code.\n");
        }
    }
    
    double final_total = total - discount;
    printf("Final Total: $%.2f\n\n", final_total);
    
    // Payment processing loop
    int payment_successful = 0;
    
    while(!payment_successful){
        printf("=== PAYMENT METHOD ===\n");
        printf("Choose payment method:\n");
        printf("1. Credit Card\n");
        printf("2. PayPal\n");
        printf("3. Bank Transfer\n");
        printf("Enter choice: ");
        
        int payment_method;
        scanf("%d", &payment_method);
        
        if(payment_method < 1 || payment_method > 3){
            printf("Invalid payment method!\n\n");
            continue;
        }
        
        printf("\n=== AUTHENTICATION REQUIRED ===\n");
        printf("Processing payment method %d for $%.2f...\n", payment_method, final_total);
        
        int auth_code;
        printf("Enter authentication code (use 1234 for success, anything else fails): ");
        scanf("%d", &auth_code);
        
        printf("Authenticating...\n");
        printf("Processing payment...\n");
        
        if(auth_code == 1234){
            payment_successful = 1;
            printf("\n=== PAYMENT SUCCESSFUL ===\n");
            printf("Payment Method: %d\n", payment_method);
            printf("Amount Charged: $%.2f\n\n", final_total);
            
            printf("=== ORDER CONFIRMATION ===\n");
            printf("Order ID: 2024001\n");
            printf("Items Ordered:\n");
            printf("- Laptop x%d\n", laptop_qty);
            printf("- Mouse x%d\n", mouse_qty);
            printf("- Keyboard x%d\n", keyboard_qty);
            printf("Subtotal: $%.2f\n", total);
            if(discount > 0){
                printf("Discount: -$%.2f\n", discount);
            }
            printf("Total Paid: $%.2f\n", final_total);
            printf("Payment Method: %d\n", payment_method);
            printf("\nThank you for your purchase!\n");
            printf("Your order will be shipped within 2-3 years.\n");
        }
        else{
            printf("\n=== PAYMENT FAILED ===\n");
            printf("Authentication failed or payment declined.\n");
            printf("Would you like to:\n");
            printf("1. Retry payment\n");
            printf("2. Choose different payment method\n");
            printf("3. Cancel order\n");
            printf("Enter choice: ");
            
            int retry_choice;
            scanf("%d", &retry_choice);
            
            if(retry_choice == 3){
                printf("Order cancelled.\n");
                break;
            }
            else if(retry_choice == 1 || retry_choice == 2){
                printf("Retrying...\n\n");
            }
            else{
                printf("Invalid choice. Retrying payment...\n");
            }
        }
    }

    return 0;
}