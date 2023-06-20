#include <stdio.h>


struct complex
{
   float r, imag;
} a, b, c;

struct complex read(void);
void write(struct complex);
struct complex add(struct complex, struct complex);

struct complex mul(struct complex, struct complex);


void main()
{
  

   printf("Enter the 1st complex number\n ");
   a = read();
   write(a);

   printf("Enter the 2nd complex number\n");
   b = read();
   write(b);

   printf("Addition\n ");
   c = add(a, b);
   write(c);

   

   printf("Multiplication\n");
   c = mul(a, b);
   write(c);

   
   
}

struct complex read(void)
{
   struct complex t;
   printf("Enter the real part\n");
   scanf("%f", &t.r);
   printf("Enter the imaginary part\n");
   scanf("%f", &t.imag);
   return t;
}

void write(struct complex a)
{
   printf("Complex number is\n");
   printf(" %.1f + i %.1f", a.r, a.imag);
   printf("\n");
}

struct complex add(struct complex p, struct complex q)
{
   struct complex t;
   t.r = (p.r + q.r);
   t.imag = (p.imag + q.imag);
   return t;
}



struct complex mul(struct complex p, struct complex q)
{
   struct complex t;
   t.r = (p.r * q.r) - (p.imag * q.imag);
   t.imag = (p.r * q.imag) + (p.imag * q.r);
   return t;
}



