
/*first line intentionally left blank*/
/*********************************************************************************************************************/
/*inclusion directives*/
#include "testFuncs2.h"
#if 0
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <signal.h>
#include <time.h>
#endif
/*********************************************************************************************************************/
/*macro and definitions*/
typedef const* INTPTR;

#define XMACRO Y

#define ABSOLUTE(X) (((X) >= 0) ? (X) : -(X))
#define ABSOLUTE2(X) ((X >= 0) ? X : -X)
#define ABSOLUTE3(XMACRO) (((XMACRO) <= 0) ? (XMACRO) : -(XMACRO))
#define MINUS(X,Y) ((X) - (Y))
#define PRINT(bubba) printf(#bubba "%d\n", bubba)
#define LOCO i##nt
#define LOCO2 #LOCO2
#define LOCO3(bubba) printf(#bubba "%d\n", bu##bba)
#define DEFINEVAR(X,Y) int X##Y
#define PI 3.14
#define PI2 (a)

#define __FILE__
#define __DATE__
#define __TIME__
#undef __STDC__
#undef __FILE__

#define int int
#undef int

#if defined PI2
#endif

#if 0
#if defined LOCO2
#endif
#endif

#if defined LOCOLUPO
#endif

#if defined LOCO
#endif

#if defined LOCOLUPO || LOCO
#endif


#define LOCOLUPO
#if 1
#undef LOCOLUPO
#endif
/*********************************************************************************************************************/
/*Globals*/

/*********************************************************************************************************************/
/*functions go here.*/
static void test33(void)
{

  short int a;
  long int b;

  MINUS(a, b);
  //MINUS(a);

  b = (int)a;
}

void testfunc1(void)
{
  unsigned char a;
  unsigned char b;

  b =  a;
}

#if CRAZYMACRO < 0
#endif

testfunc2(void)
{
  int a;
  int b;
  int sum;

  sum = a + b;
}

void testfunc3()
{
  int a;
  int b;
  int c;

#define LUPO wolf

  int abcdefghijklmnopqrstuvwxyz1234567890;
  int abcdefghijklmnopqrstuvwxyz12345678902;

  /*do stuff*/
}

int testfunc6(void)
{
  int a;
  int b;
  //return ();
}

int testfunc7(void)
{
  int a;
  int b;
  //return;
}

int testfunc8(void)
{
  int a[10];
  int b[10];

  int* p;

  p = &a[0];

#undef LUPO

  int i;
  int sum;
  int sum2;
  int garbage;
  int garbage2;

  for (i = 0; i < 10; ++i)
  {
    sum += *(a + i);
    sum2 += *(p + i);
    //garbage = *(a - b);
  }

  for (i = 10; i < 1; i++)
  {
    sum += *(a - i);
    sum2 += *(p - i);
    //garbage2 = *(p - a);
  }
}

void testfunc9(void)
{
  int** p1;
  int*** p2;

  struct
  {
    int* sp1;
    int** sp2;
    int*** sp3;
  };

  struct s* ps1;
  struct s** ps2;
  struct s*** ps3;

  INTPTR *const* const fedupp1;

  int ** (*pfunc1)();
  int ** (**pfunc2)();
  int ** (***pfunc3)();
  int *** (**pfunc4)();
  int ** (**pfunc5)(int**, int**);
  int ** (**pfunc6)(int**, int***);
}

void testfunc10 (int ** (**p5)(int**, int**), int ** (**p6)(int**, int***))
{

}
/*********************************************************************************************************************/
/*last line intentionally left blank.*/
