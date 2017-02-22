// Defining a Structure
// To define a structure, you must use the struct statement. The struct statement defines a new data type, with more than one member.
// The format of the struct statement is as follows −
//
// struct [structure tag] {
//
//    member definition;
//    member definition;
//    ...
//    member definition;
// } [one or more structure variables];

// The structure tag is optional and each member definition is a normal variable definition,
// such as int i; or float f; or any other valid variable definition.
// At the end of the structure's definition, before the final semicolon,
// you can specify one or more structure variables but it is optional.
// Here is the way you would declare the Book structure −

// struct Books {     // "Books" is a structure tag
//    char  title[50];
//    char  author[50];
//    char  subject[100];
//    int   book_id;
// } book;            // "book" is a structure variables (optional)
//
// Accessing Structure Members
// To access any member of a structure, we use the member access operator (.).
// The member access operator is coded as a period between the structure variable name
// and the structure member that we wish to access. You would use the keyword struct to define variables of structure type.
// The following example shows how to use a structure in a program −

#include <stdio.h>
#include <string.h>

struct Books {  //structure name/tag
  char title[50];
  char author[50];
  char subject[100];
  int book_id;
};

int main() {

  struct Books Book1; //declare Book1 of type Books
  struct Books Book2; //declare Book1 of type Books

  /* Book1 specification */
  strcpy(Book1.title, "C Programming"); //copy name to the Book1 title
  strcpy(Book1.author, "Nuha Ali");
  // Book1.author = "Nuha Ali"; // not assignable, doesn't work for this way (Access array)
  strcpy(Book1.subject, "C Programming Tutorial");
  Book1.book_id = 6495407;

  /* book 2 specification */
  strcpy( Book2.title, "Telecom Billing");
  strcpy( Book2.author, "Zara Ali");
  strcpy( Book2.subject, "Telecom Billing Tutorial");
  Book2.book_id = 6495700;


  /* print Book1 info */
  printf( "Book 1 title : %s\n", Book1.title);
  printf( "Book 1 author : %s\n", Book1.author);
  printf( "Book 1 subject : %s\n", Book1.subject);
  printf( "Book 1 book_id : %d\n", Book1.book_id);

  /* print Book2 info */
  printf( "Book 2 title : %s\n", Book2.title);
  printf( "Book 2 author : %s\n", Book2.author);
  printf( "Book 2 subject : %s\n", Book2.subject);
  printf( "Book 2 book_id : %d\n", Book2.book_id);

  return 0;
}

// Result
// Book 1 title : C Programming
// Book 1 author : Nuha Ali
// Book 1 subject : C Programming Tutorial
// Book 1 book_id : 6495407
// Book 2 title : Telecom Billing
// Book 2 author : Zara Ali
// Book 2 subject : Telecom Billing Tutorial
// Book 2 book_id : 6495700
