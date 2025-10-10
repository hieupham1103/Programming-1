#include<stdio.h>
#include<math.h>

int main(){
    int book1_available = 1;
    int book2_available = 0;
    
    int book1_copies = 3;
    int book2_copies = 0;
    
    int user1_overdue = 0;
    int user2_overdue = 1;

    printf("=== VGU LIBRARY BOOK BORROWING SYSTEM ===\n");
    printf("Available Books:\n");
    printf("1. Programming in C (Copies: %d)\n", book1_copies);
    printf("2. VGU in the nutshell (Copies: %d)\n", book2_copies);
    printf("----------------------------------------\n");
    
    int continue_borrowing = 1;
    
    while(continue_borrowing){
        printf("\nEnter your User ID (1-2): ");
        int user_id;
        scanf("%d", &user_id);
        
        if(user_id < 1 || user_id > 2){
            printf("Invalid User ID!\n");
            continue;
        }
        
        printf("Enter Book ID to borrow (1-2): ");
        int book_id;
        scanf("%d", &book_id);
        
        if(book_id < 1 || book_id > 2){
            printf("Invalid Book ID!\n");
            continue;
        }
        
        int book_available = 0;
        int current_copies = 0;
        
        if(book_id == 1){
            book_available = book1_available;
            current_copies = book1_copies;
        }
        else if(book_id == 2){
            book_available = book2_available;
            current_copies = book2_copies;
        }
        
        printf("\nProcessing borrowing request...\n");
        printf("User ID: %d, Book ID: %d\n", user_id, book_id);
        
        if(!book_available || current_copies <= 0){
            printf("\n=== BORROWING DENIED ===\n");
            printf("Sorry, the requested book is currently unavailable.\n");
            printf("Reason: No copies available in library.\n");
            printf("Please try again later or choose a different book.\n");
        }
        else{
            int user_has_overdue = 0;
            
            if(user_id == 1){
                user_has_overdue = user1_overdue;
            }
            else if(user_id == 2){
                user_has_overdue = user2_overdue;
            }
            
            if(user_has_overdue){
                printf("\n=== BORROWING DENIED ===\n");
                printf("Sorry, you cannot borrow books at this time.\n");
                printf("Reason: You have overdue books that need to be returned.\n");
                printf("Please return all overdue books before borrowing new ones.\n");
            }
            else{
                printf("\n=== BORROWING APPROVED ===\n");
                printf("Book borrowing successful!\n");
                
                if(book_id == 1){
                    book1_copies--;
                    if(book1_copies <= 0) book1_available = 0;
                }
                else if(book_id == 2){
                    book2_copies--;
                    if(book2_copies <= 0) book2_available = 0;
                }
                
                printf("Database updated successfully.\n");
                printf("Due date: 14 days from today.\n");
                printf("Please return the book on time to avoid overdue charges.\n");
                
                printf("\n--- Updated Book Inventory ---\n");
                printf("1. Programming in C (Copies: %d)\n", book1_copies);
                printf("2. VGU in the nutshell (Copies: %d)\n", book2_copies);
            }
        }
        
        printf("\nDo you want to continue borrowing? (1-Yes, 2-No): ");
        int choice;
        scanf("%d", &choice);
        
        if(choice != 1){
            continue_borrowing = 0;
            printf("Thank you for using the library system!\n");
        }
    }
    
    return 0;
}