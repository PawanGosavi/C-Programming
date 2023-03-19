#include<stdio.h>
#include<conio.h>
#include<string.h>

    struct books
{
    char title[50];
    char author[50];
    char subject[100];
    int bookid;
};

void main()
{
    struct books book1;
    struct books book2;
    
    clrscr();

// book1 specification

    strcpy(book1.title,"  c programming");
    strcpy(book1.author,"  Kanetkar");
    strcpy(book1.subject,"  programming with c");
    book1.bookid=1;

// book2 specification

    strcpy(book2.title,"  Begining with python");
    strcpy(book2.author,"  john");
    strcpy(book2.subject,"  programming in python");
    book2.bookid=2;

// print book1 information

    printf("book1 title\t %s",book1.title);
    printf("\nbook1 author\t %s",book1.author);
    printf("\nbook1 subject\t %s",book1.subject);
    printf("\nbook1 bookid\t %d",book1.bookid);

// print book2 information

    printf("\nbook2 title\t %s",book2.title);
    printf("\nbook2 author\t %s",book2.author);
    printf("\nbook2 subject\t %s",book2.subject);
    printf("\nbook2 bookid\t %d",book2.bookid);

    getch();
}
