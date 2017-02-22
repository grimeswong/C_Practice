// The C programming language provides a keyword called typedef,
// which you can use to give a type, a new name.
// Following is an example to define a term BYTE for one-byte numbers −
//
// typedef unsigned char BYTE;
//
// After this type definition, the identifier BYTE can be used as an abbreviation
// for the type unsigned char, for example..
//
// BYTE  b1, b2;

#include <stdio.h>
#include <string.h>

typedef struct Books {  // structure name "Books"
  char title[50];
  char author[50];
  char subject[50];
  int book_id;
} Book; // typedef name

int main() {

  Book book;

  strcpy(book.title, "C Programming");
  strcpy(book.author, "Nuha Ali");
  strcpy(book.subject, "C Programming Tutorial");
  book.book_id = 6495407;

  printf("Book title : %s\n", book.title);
  printf("Book author : %s\n", book.author);
  printf("Book subject : %s\n", book.subject);
  printf("Book id : %d\n", book.book_id);

  return 0;

}
