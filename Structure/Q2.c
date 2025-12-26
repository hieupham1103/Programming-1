#include<stdio.h>

struct book{
    char title[50];
    char author[50];
    char subject[50];
    int book_id;
};

int main() {
    struct book b;
    printf("Enter book title: ");
    scanf("%s", &b.title);
    printf("Enter book author: ");
    scanf("%s", &b.author);
    printf("Enter book subject: ");
    scanf("%s", &b.subject);
    printf("Enter book ID: ");
    scanf("%d", &b.book_id);

    printf("\nBook Details:\n");
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Subject: %s\n", b.subject);
    printf("Book ID: %d\n", b.book_id);
   
    return 0;
}