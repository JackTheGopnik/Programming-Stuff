#include<iostream>
#include<stdio.h>
using namespace std;
struct date {
 int dd, mm, yy;
};
int date_cmp(struct date d1, struct date d2);
void date_print(struct date d);
int main() {
 struct date d1 = {7, 3, 2005};
 struct date d2 = {24, 10, 2005};
 date_print(d1);
 int cmp = date_cmp(d1, d2);
 if(cmp == 0)
   cout<<" is equal to ";
 else if (cmp > 0)
   cout<<" is later than ";
 else
   cout<<" is earlier than ";
 date_print(d2);
 return 0;
}
/* compare given dates d1 and d2 */
int date_cmp(struct date d1, struct date d2) {
 if (d1.dd == d2.dd && d1.mm == d2.mm && d1.yy ==d2.yy)
    return 0;
 else if (d1.yy > d2.yy || d1.yy == d2.yy && d1.mm > d2.mm || 
           d1.yy == d2.yy && d1.mm == d2.mm && d1.dd > d2.dd)
    return 1;
 else return -1;
}
/* print a given date */
 void date_print(struct date d) {
    printf("%d/%d/%d", d.dd, d.mm, d.yy);
 } 
