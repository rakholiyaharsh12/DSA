// self refrential node
#include <stdio.h>
struct node{
    int data;
    char ch;
    struct node *pointer;
};

int main(){
    struct node a,b,c,d;
    a.data = 10;
    a.ch = 'A';
    a.pointer = NULL;

   
    b.data = 20;
    b.ch = 'B';
    b.pointer = NULL;

    c.data = 30;
    c.ch = 'C';
    c.pointer = NULL;

    d.data = 40;
    d.ch = 'D';
    d.pointer = NULL;

  //printf("A: dat: %d,ch: %c",a.data,a.ch);
  //printf("\nB: dat: %d,ch: %c",b.data,b.ch);
  //printf("\nc: dat: %d,ch: %c",c.data,c.ch);
  //printf("\nd: dat: %d,ch: %c",d.data,d.ch);

    a.pointer =&b;
    printf("B: data: %d, ch: %c", a.pointer ->data,a.pointer->ch);

    b.pointer =&a;
    printf("\nA: data: %d, ch: %c", b.pointer ->data,b.pointer->ch);
    
    c.pointer =&d;
    printf("\nD: data: %d, ch: %c", c.pointer ->data,c.pointer->ch);

     d.pointer =&c;
    printf("\nC: data: %d, ch: %c", d.pointer ->data,d.pointer->ch);
   
}
