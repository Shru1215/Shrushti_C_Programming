//define a book structure (tittle,price)and put its details //

#include<stdio.h>
struct book
{
    char title[50];
    int price;

};
int main()
{
    struct book b={"C Programming",500};

    printf("Book Title = %s\n", b.title);
    printf("Book Price = %d", b.price);
}
