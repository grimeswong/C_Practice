
#include <stdio.h>

int main() {

  struct Date {
    unsigned nWeekday : 3;
    unsigned nMonthday : 6;
    unsigned nMonth : 5;
    unsigned nYear : 8;
  } dbits;

  dbits.nWeekday = 7;

  printf("%d\n", dbits.nWeekday);

  Date date1;

  return 0;
}
