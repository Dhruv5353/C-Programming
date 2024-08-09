/* This program is prepared by 23CS041_DHRUV_LOKADIYA*/
        #include <stdio.h>
        struct book_detail {
            char book_title[100];
            char author_name[100];
            float amount_of_book;
        } s1, s2, s3;

        // Function to display book details
        void displayBookDetails(struct book_detail book) {
            printf("\nBook Title: %s", book.book_title);
            printf("\nAuthor Name: %s", book.author_name);
            printf("\nAmount of Book: %.2f", book.amount_of_book);
        }

        int main() {
            printf("Enter data for Book 1:\n");
            printf("Enter book title: ");
            scanf(" %[^\n]s", s1.book_title);
            printf("Enter author name: ");
            scanf(" %[^\n]s", s1.author_name);
            printf("Enter amount of book: ");
            scanf("%f", &s1.amount_of_book);

            printf("\nEnter data for Book 2:\n");
            printf("Enter book title: ");
            scanf(" %[^\n]s", s2.book_title);
            printf("Enter author name: ");
            scanf(" %[^\n]s", s2.author_name);
            printf("Enter amount of book: ");
            scanf("%f", &s2.amount_of_book);

            printf("\nEnter data for Book 3:\n");
            printf("Enter book title: ");
            scanf(" %[^\n]s", s3.book_title);
            printf("Enter author name: ");
            scanf(" %[^\n]s", s3.author_name);
            printf("Enter amount of book: ");
            scanf("%f", &s3.amount_of_book);

            printf("\nDisplaying the data:\n");
            displayBookDetails(s1);
            displayBookDetails(s2);
            displayBookDetails(s3);
            printf("\n\t\t23CS041_DHRUV_LOKADIYA");
            return 0;
        }
